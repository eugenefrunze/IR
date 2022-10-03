using System.Collections;
using UnityEngine;
using UnityEngine.InputSystem;
using Vector3 = UnityEngine.Vector3;

public class Player : MonoBehaviour
{
    //main comps
    CharacterController controller;
    [SerializeField] Transform playerCam;
    [SerializeField] AudioSource collideSound;
    
    //gameplay
    bool isPaused;

    public delegate void RestartManuallyAction();

    public static event RestartManuallyAction OnManuallyRestart;
    
    //player status
    public delegate void DeathAction();
    public static event DeathAction OnDeath;
    //temp
    public bool isGameStarted = true;
    //--temp
    PlayerInputActions gameplayInputActions;
    public Animator animator;

    //movement
    public float runSpeed = 7;
    Vector3 velocity;
    Vector3 velocityVertical;
    bool isGrounded;
    [SerializeField] float gravity = 9.8f;
    [SerializeField] float jumpPower = 1.5f;
    
    //jumping
    bool isJump;
    [SerializeField] AnimationCurve jumpAnimCurve;
    bool roll;

    //lanes
    [SerializeField] float laneWidth = 2;
    [SerializeField] int targetLane;
    public int[] lanesLimits = { -1, 1 };
    [SerializeField] float turnSpeed = 0.04f;

    void OnEnable(){
        Obstacle.OnCollided += ObstCollide;
    }

    void OnDisable(){
        Obstacle.OnCollided -= ObstCollide;
    }

    void Awake(){
        gameplayInputActions = new PlayerInputActions();
        gameplayInputActions.player_map.Enable();
        gameplayInputActions.player_map.jump.performed += Jump;
        gameplayInputActions.player_map.strafe_right.performed += StrafeRight;
        gameplayInputActions.player_map.strafe_left.performed += StrafeLeft;
        gameplayInputActions.player_map.roll.performed += Roll;
        gameplayInputActions.player_map.pause.performed += Pause;
        gameplayInputActions.player_map.restart.performed += Restart;

        //char constroller
        controller = GetComponent<CharacterController>();
    }
    
    void Update(){
        // temp shit
        if(!isGameStarted) return;
        //end temp shit
        Movement();
        Orientation();
    }
    
    void Movement()
    {
        //vert movement
        isGrounded = IsGroundedCheck(true);
        animator.SetBool("isGrounded", isGrounded);
        if (isGrounded && isJump)
        {
            velocityVertical.y = jumpPower;
            animator.SetTrigger("jump");
            StartCoroutine(JumpDroper());
            isJump = false;
        }
        else
        {
            velocityVertical.y -= Time.deltaTime * gravity;
            if (roll)
            {
                print("roll");
                print("VB" + velocityVertical);
                velocityVertical.y = -jumpPower;
                print("VA" + velocityVertical.y);
                roll = false;
            }
        }
        
        //temp shit
        IEnumerator JumpDroper()
        {
            yield return new WaitForSeconds(0.4f);
            velocityVertical.y = -jumpPower;
            yield return null;
        }
        //--temp shit
        
        //movement
        Vector3 moveDirection = transform.position.z * Vector3.forward;
        moveDirection += targetLane * laneWidth * Vector3.right;
        velocity.x = (moveDirection - transform.position).normalized.x * runSpeed;
        velocity.y = velocityVertical.y;
        velocity.z = runSpeed;
        controller.Move(Time.deltaTime * velocity);
    }

    void Orientation(){
        Vector3 rotateDirection = controller.velocity;
        rotateDirection.y = 0;
        transform.forward = Vector3.Lerp(transform.forward, rotateDirection, turnSpeed);
    }

    void Jump()
    {
        if (!isJump & isGrounded) isJump = true;
    }

    void Roll()
    {
        roll = true;
    }

    void Pause()
    {
        if (isPaused)
        {
            Time.timeScale = 1;
            isPaused = false;
        }
        else
        {
            Time.timeScale = 0;
            isPaused = true;
        }
    }

    void Restart()
    {
        if (OnManuallyRestart != null) OnManuallyRestart();
    }

    bool IsGroundedCheck(bool debug)
    {
        Ray rayGroundChecker = new Ray(new Vector3(
            controller.bounds.center.x, (controller.bounds.center.y - controller.bounds.extents.y) + 0.2f, controller.bounds.center.z), Vector3.down);
        if(debug) Debug.DrawRay(rayGroundChecker.origin, rayGroundChecker.direction, Color.cyan, 1.0f);
        return Physics.Raycast(rayGroundChecker, 0.4f);
    }

    void StrafeLeft(InputAction.CallbackContext context)
    {
        SwitchLane(-1);
    }
    
    void StrafeRight(InputAction.CallbackContext context)
    {
        SwitchLane(1);
    }

    public void Jump(InputAction.CallbackContext context)
    {
        Jump();
    }

    public void Roll(InputAction.CallbackContext context)
    {
        Roll();
    }

    public void Pause(InputAction.CallbackContext context)
    {
        print("PAUSE");
        Pause();
    }

    public void Restart(InputAction.CallbackContext context)
    {
        print("PAUSE");
        Restart();
    }

    void SwitchLane(int direction){
        targetLane += direction;
        targetLane = Mathf.Clamp(targetLane, lanesLimits[0], lanesLimits[1]);
    }

    void ObstCollide(){
        Debug.Log("COLLIDED WITH SOMETHING");
        collideSound.Play();
        if (OnDeath != null) OnDeath();
        gameplayInputActions.player_map.Disable();
        GameManager.gameStatus = GameStatus.Stopped;
        Debug.Log(GameManager.gameStatus);
        StartCoroutine(camCollideMove());
        runSpeed = 0f;
        animator.SetTrigger("stumble");
    }

    //temp
    //cam move when obst collide
    IEnumerator camCollideMove(){
        Vector3 targetCamPos = new Vector3(playerCam.transform.position.x, playerCam.transform.position.y, playerCam.transform.position.z - 2.5f);
        Vector3 startCamPos = playerCam.transform.position;
        float timeCount = 0f;
        Debug.Log("AAAAAAA");
        while (playerCam.position.z > targetCamPos.z){
            playerCam.transform.position = Vector3.Lerp(startCamPos, targetCamPos, timeCount / 0.5f);
            timeCount += Time.deltaTime;
            yield return null;
        }
    }
    //--temp
}