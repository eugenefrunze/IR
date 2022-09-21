using System.Collections;
using UnityEngine;
using UnityEngine.InputSystem;
using Vector3 = UnityEngine.Vector3;

public class Player : MonoBehaviour
{
    //main comps
    CharacterController controller;
    [SerializeField] Transform playerCam;
    
    //player status
    public delegate void DeathAction();
    public static event DeathAction OnDeath;
    
    //temp
    public bool isGameStarted = true;
    //--temp
    
    //input
    PlayerInputActions gameplayInputActions;
    
    //animation
    public Animator animator;

    //movement
    public float runSpeed = 7;
    Vector3 velocity;
    Vector3 velocityVertical;
    bool isGrounded;
    [SerializeField] float gravity = 9.8f;
    [SerializeField] float jumpPower = 1.5f;
    bool jump;
    bool roll;
    
    //lanes
    [SerializeField] float laneWidth = 2;
    [SerializeField] int targetLane;
    public int lanesCount = 3;
    public int[] lanesLimits = { -1, 1 };
    [SerializeField] float turnSpeed = 0.04f;

    void OnEnable(){
        Obstacle.OnCollided += ObstCollide;
    }

    void OnDisable(){
        Obstacle.OnCollided -= ObstCollide;
    }

    void Start(){
        controller = GetComponent<CharacterController>();
    }

    void Awake(){
        gameplayInputActions = new PlayerInputActions();
        gameplayInputActions.player_map.Enable();
        gameplayInputActions.player_map.jump.performed += Jump;
        gameplayInputActions.player_map.strafe_right.performed += StrafeRight;
        gameplayInputActions.player_map.strafe_left.performed += StrafeLeft;
        gameplayInputActions.player_map.roll.performed += Roll;
    }
    
    void Update(){
        // temp shit
        if(!isGameStarted) return;
        //end temp shit
        Movement();
        Orientation();
    }

    void Movement(){
        //vert movement section
        isGrounded = IsGroundedCheck(true);
        animator.SetBool("isGrounded", isGrounded);
        if (isGrounded && jump){
            velocityVertical.y = jumpPower;
            jump = false;
        }
        else{
            velocityVertical.y -= Time.deltaTime * gravity;
            if (roll){
                velocityVertical.y = -jumpPower;
                roll = false;
            }
        }
        
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

    void Jump(){
        animator.SetTrigger("jump");
        jump = true;
    }

    void Roll(){
        roll = true;
    }

    bool IsGroundedCheck(bool debug){
        Ray rayGroundChecker = new Ray(new Vector3(
            controller.bounds.center.x, (controller.bounds.center.y - controller.bounds.extents.y) + 0.2f, controller.bounds.center.z), Vector3.down);
        if(debug) Debug.DrawRay(rayGroundChecker.origin, rayGroundChecker.direction, Color.cyan, 1.0f);
        return Physics.Raycast(rayGroundChecker, 0.3f);
    }

    void StrafeLeft(InputAction.CallbackContext context){
        Debug.Log("STRAFE LEFT");
        SwitchLane(-1);
    }
    
    void StrafeRight(InputAction.CallbackContext context){
        Debug.Log("STRAFE RIGHT");
        SwitchLane(1);
    }

    public void Jump(InputAction.CallbackContext context){
        Debug.Log("JUMP");
        Jump();
    }

    public void Roll(InputAction.CallbackContext context){
        Debug.Log("ROLL");
        Roll();
    }

    void SwitchLane(int direction){
        targetLane += direction;
        targetLane = Mathf.Clamp(targetLane, lanesLimits[0], lanesLimits[1]);
    }

    void ObstCollide(){
        Debug.Log("COLLIDED WITH SOMETHING");
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