#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.InputSystem.PlayerInput>
struct Action_1_tD5FA47F50DE964EA177B87ABF2576790239219A3;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>
struct Action_2_t6A27AF0A3585FFCF87D39ADE472BCFD2F2930F19;
// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>
struct Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>
struct Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D;
// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>
struct Action_3_tE646D5EE2107669AE49025C0E3DC04C831ACCAE0;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>
struct Func_3_t42E9F5CDEF4CF174C35D943F427EF585FE829937;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding>
struct IEnumerable_1_tB0371F6D0932F0C778CAEED128603B65772AC357;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction>
struct IEnumerator_1_t5197EB77176C670D4AAF5E0D1B4F1AB9940EFE41;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932;
// System.Action`1<UnityEngine.InputSystem.PlayerInput>[]
struct Action_1U5BU5D_tDDE8F0E5F72CDCC3C9228F7F50484C0B41BAF4E0;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>[]
struct Action_2U5BU5D_tBE18774DE78EE629377991D4C8F3B44D96E3A529;
// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>[]
struct Action_3U5BU5D_t624B9D1D653A8F69756207CB2B95EEF3143387DB;
// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>[]
struct Func_3U5BU5D_t46F58FB7530550D36B775F49E118190032295BE6;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// ChunkData[]
struct ChunkDataU5BU5D_tA76F9BD9BC5B615AB48603578173947803FA6CA4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.InputControlScheme[]
struct InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
// UnityEngine.InputSystem.Users.InputUser[]
struct InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.InputSystem.PlayerInput[]
struct PlayerInputU5BU5D_t68A8570E76E18996F872BEEBA1C81ED2E4671080;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection[]
struct OngoingAccountSelectionU5BU5D_t0CC84AB78BA7B45022C3D6E08B0DADA7A61BCBD8;
// UnityEngine.InputSystem.Users.InputUser/UserData[]
struct UserDataU5BU5D_t5CB4987877C71E61FA131704B58CA6D8E5272C7E;
// UnityEngine.InputSystem.PlayerInput/ActionEvent[]
struct ActionEventU5BU5D_t45BD340B9AA6F3287339EA686E3FE0A47801E88F;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174;
// UnityEngine.AnimationState
struct AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// BasicRigidBodyPush
struct BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// Chunk
struct Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060;
// ChunkData
struct ChunkData_tD70FCCE07C32F0D97ACFAA3EEB1331F0C7FBF9A5;
// ChunkManager
struct ChunkManager_tF9FAD853900B822D5DD7BE8BE38790D4966D71FF;
// Coin
struct Coin_t6EC3724A41D53D737B499E377089217F0190C268;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// IActivable
struct IActivable_tF092C81083D11F7203DBC253C1DAEF0E4F6E76F6;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.InputSystem.UI.InputSystemUIInputModule
struct InputSystemUIInputModule_tB7D5B53F656D196BB5AF712FA16FEE22B2EE0C58;
// UnityEngine.InputSystem.InputValue
struct InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MobileDisableAutoSwitchControls
struct MobileDisableAutoSwitchControls_t0A648011382F1B8F00CD89B26AB30777CCBB9FDA;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObjectMovement
struct ObjectMovement_tCA9B1EB3AE0A2352E5307DB2BA8F9CB76DCD220A;
// OriginReset
struct OriginReset_t3499F564E9735E2AD6754A98D566F336E2F27C5F;
// PathCorner
struct PathCorner_tA208FA7E1C6F83DD2A8B7D127319474FB48B2A0C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.InputSystem.PlayerInput
struct PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F;
// PlayerInputActions
struct PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694;
// PlayerMovement
struct PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// SmoothMover
struct SmoothMover_tDBFFF780F038F6D3A85F60B77056823E31F06A63;
// Spawner
struct Spawner_t387EDFC7BADAEFFD3305FD31D1E8DDE8998FCDD7;
// StarterAssets.StarterAssetsInputs
struct StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657;
// System.String
struct String_t;
// Target
struct Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// StarterAssets.ThirdPersonController
struct ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// TriggerExit
struct TriggerExit_t16AF59B53104B954B55EDDE1FE9AA0B10EC5BCB5;
// TriggerUniversal
struct TriggerUniversal_t7C6795796D3F947A1B35AC235DDB98B5EB2BF82E;
// StarterAssets.UICanvasControllerInput
struct UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F;
// UIVirtualButton
struct UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5;
// UIVirtualJoystick
struct UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16;
// UIVirtualTouchZone
struct UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.InputSystem.PlayerInput/ControlsChangedEvent
struct ControlsChangedEvent_t24A5BA4AB8034B3C662F956A4C85ECC6B8332B48;
// UnityEngine.InputSystem.PlayerInput/DeviceLostEvent
struct DeviceLostEvent_tDD8832F14B7DA15569261EFEBC47E67CF4E1B9D4;
// UnityEngine.InputSystem.PlayerInput/DeviceRegainedEvent
struct DeviceRegainedEvent_t24153E8876417F010AA4C0C1C25D6CB792EC01D1;
// PlayerInputActions/IPlayer_mapActions
struct IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045;
// PlayerMovement/<SwitchTrack>d__4
struct U3CSwitchTrackU3Ed__4_t936D78E0D7D66882160AFE1FC3F858A057DFF9F8;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// SmoothMover/<strafeMovement>d__2
struct U3CstrafeMovementU3Ed__2_tEBBE72A88306BDC17EF016A5C502025480CEC45F;
// TriggerExit/ExitAction
struct ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836;
// UIVirtualButton/BoolEvent
struct BoolEvent_t81DF6CDEF90C1D7B2256C9310BCCE9D2D078480A;
// UIVirtualButton/Event
struct Event_tCD26C285BECBF219F0B786DA841165B26E05F0B8;
// UIVirtualJoystick/Event
struct Event_tE8BCFAF6D3E261F47341C3DE8E539FF5C42E17C3;
// UIVirtualTouchZone/Event
struct Event_t39EC29014C2EF54751D4079DD636172E90DCE53E;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriggerExit_t16AF59B53104B954B55EDDE1FE9AA0B10EC5BCB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSwitchTrackU3Ed__4_t936D78E0D7D66882160AFE1FC3F858A057DFF9F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CstrafeMovementU3Ed__2_tEBBE72A88306BDC17EF016A5C502025480CEC45F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B1BBFA44CAA416A6E13B3ADACB0CDB4EFF4AAB3;
IL2CPP_EXTERN_C String_t* _stringLiteral1DAA1BA950E9E97C5CBA4ABC4856A22F1AB69DC7;
IL2CPP_EXTERN_C String_t* _stringLiteral29F00C03FE4B93D94D5E3EEC5DE6A20983CD559E;
IL2CPP_EXTERN_C String_t* _stringLiteral3B16AB414793C9E7BCBE5457F263230F6327F453;
IL2CPP_EXTERN_C String_t* _stringLiteral4700B5BBCBF829BC28448CAB621CD8AEDB030940;
IL2CPP_EXTERN_C String_t* _stringLiteral4E320281B34C5351DD426E6D028E4C903AD77887;
IL2CPP_EXTERN_C String_t* _stringLiteral548CADC991E2CDF5E95C25B8B78E5D4002D130B4;
IL2CPP_EXTERN_C String_t* _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
IL2CPP_EXTERN_C String_t* _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7A5E7F2E72C1AE0C4F32F5ED934FEC8C1EDC681A;
IL2CPP_EXTERN_C String_t* _stringLiteral9BE1DDC68C8E87C5019BD05CA1538ADF1AA4A618;
IL2CPP_EXTERN_C String_t* _stringLiteralA0C553209DB220AAD5FECFD351FAC1B2F1D3B9D1;
IL2CPP_EXTERN_C String_t* _stringLiteralBCDA67E47C13443A91ACB908325DBA8E8B9249EA;
IL2CPP_EXTERN_C String_t* _stringLiteralE2CFA0DCA9F3732AA69C3B65D12881F7F3CF5FC0;
IL2CPP_EXTERN_C String_t* _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6;
IL2CPP_EXTERN_C String_t* _stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4;
IL2CPP_EXTERN_C String_t* _stringLiteralEE7CAC817C9B4CCD0F8C2758899406E608287759;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisChunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060_mD6C9C746C2686E4AD5C82E179B336F6C6AC1E05A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerMovement_Jump_m2EBDFB53E633E5D9F391795AF14A8A8ADA7C2C83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerMovement_Roll_m5451ABC26EA6422B96C2A51DAF87F8A97AD1AB3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerMovement_StrafeLeft_mA5D794DA0D1BAEDD9C9508A2928ED0A68D872B9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerMovement_StrafeRight_mEEE51D0B57136A0C154A7AEA794EDE2F4AD43FFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSwitchTrackU3Ed__4_System_Collections_IEnumerator_Reset_mFAB1ED6924FB224E17A21E52B12459C409CC552C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CstrafeMovementU3Ed__2_System_Collections_IEnumerator_Reset_mEFF0C3053EC1C461660CC2F1E18AF37FA155383E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_com;
struct UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_pinvoke;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct ChunkDataU5BU5D_tA76F9BD9BC5B615AB48603578173947803FA6CA4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// PlayerInputActions
struct PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694  : public RuntimeObject
{
	// UnityEngine.InputSystem.InputActionAsset PlayerInputActions::<asset>k__BackingField
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___U3CassetU3Ek__BackingField_0;
	// UnityEngine.InputSystem.InputActionMap PlayerInputActions::m_player_map
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_player_map_1;
	// PlayerInputActions/IPlayer_mapActions PlayerInputActions::m_Player_mapActionsCallbackInterface
	RuntimeObject* ___m_Player_mapActionsCallbackInterface_2;
	// UnityEngine.InputSystem.InputAction PlayerInputActions::m_player_map_strafe_left
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_player_map_strafe_left_3;
	// UnityEngine.InputSystem.InputAction PlayerInputActions::m_player_map_strafe_right
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_player_map_strafe_right_4;
	// UnityEngine.InputSystem.InputAction PlayerInputActions::m_player_map_jump
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_player_map_jump_5;
	// UnityEngine.InputSystem.InputAction PlayerInputActions::m_player_map_roll
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_player_map_roll_6;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// Target
struct Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5  : public RuntimeObject
{
	// UnityEngine.GameObject Target::obj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj_0;
	// System.Single Target::delayBeforeTrigger
	float ___delayBeforeTrigger_1;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// PlayerMovement/<SwitchTrack>d__4
struct U3CSwitchTrackU3Ed__4_t936D78E0D7D66882160AFE1FC3F858A057DFF9F8  : public RuntimeObject
{
	// System.Int32 PlayerMovement/<SwitchTrack>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerMovement/<SwitchTrack>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerMovement PlayerMovement/<SwitchTrack>d__4::<>4__this
	PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* ___U3CU3E4__this_2;
};

// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
};

// SmoothMover/<strafeMovement>d__2
struct U3CstrafeMovementU3Ed__2_tEBBE72A88306BDC17EF016A5C502025480CEC45F  : public RuntimeObject
{
	// System.Int32 SmoothMover/<strafeMovement>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SmoothMover/<strafeMovement>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SmoothMover SmoothMover/<strafeMovement>d__2::<>4__this
	SmoothMover_tDBFFF780F038F6D3A85F60B77056823E31F06A63* ___U3CU3E4__this_2;
	// System.Single SmoothMover/<strafeMovement>d__2::<counter>5__2
	float ___U3CcounterU3E5__2_3;
	// System.Single SmoothMover/<strafeMovement>d__2::<duration>5__3
	float ___U3CdurationU3E5__3_4;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>
struct InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tD5FA47F50DE964EA177B87ABF2576790239219A3* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tDDE8F0E5F72CDCC3C9228F7F50484C0B41BAF4E0* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>
struct InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_2_t6A27AF0A3585FFCF87D39ADE472BCFD2F2930F19* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_2U5BU5D_tBE18774DE78EE629377991D4C8F3B44D96E3A529* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>
struct InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_3_tE646D5EE2107669AE49025C0E3DC04C831ACCAE0* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_3U5BU5D_t624B9D1D653A8F69756207CB2B95EEF3143387DB* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>
struct InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Func_3_t42E9F5CDEF4CF174C35D943F427EF585FE829937* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Func_3U5BU5D_t46F58FB7530550D36B775F49E118190032295BE6* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme>
struct ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>
struct ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.AnimatorClipInfo
struct AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 
{
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E 
{
	// System.Boolean UnityEngine.InputSystem.InputActionMap/DeviceArray::m_HaveValue
	bool ___m_HaveValue_0;
	// System.Int32 UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceCount
	int32_t ___m_DeviceCount_1;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceArray
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_pinvoke
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_com
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};

// UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 
{
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection::device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_0;
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection::userId
	uint32_t ___userId_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_marshaled_pinvoke
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_0;
	uint32_t ___userId_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_marshaled_com
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_0;
	uint32_t ___userId_1;
};

// PlayerInputActions/Player_mapActions
struct Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132 
{
	// PlayerInputActions PlayerInputActions/Player_mapActions::m_Wrapper
	PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* ___m_Wrapper_0;
};
// Native definition for P/Invoke marshalling of PlayerInputActions/Player_mapActions
struct Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132_marshaled_pinvoke
{
	PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* ___m_Wrapper_0;
};
// Native definition for COM marshalling of PlayerInputActions/Player_mapActions
struct Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132_marshaled_com
{
	PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* ___m_Wrapper_0;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>
struct CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>
struct CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>
struct CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>
struct CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection>
struct InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	OngoingAccountSelectionU5BU5D_t0CC84AB78BA7B45022C3D6E08B0DADA7A61BCBD8* ___additionalValues_2;
};

// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>
struct Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA ___value_1;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Nullable_1_t69306F42657D3DC9EDCF5E87D81E582BDE7DAC42 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___value_1;
};

// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92  : public RuntimeObject
{
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshaled_pinvoke
{
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshaled_com
{
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UIVirtualButton/BoolEvent
struct BoolEvent_t81DF6CDEF90C1D7B2256C9310BCCE9D2D078480A  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// UIVirtualButton/Event
struct Event_tCD26C285BECBF219F0B786DA841165B26E05F0B8  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UIVirtualJoystick/Event
struct Event_tE8BCFAF6D3E261F47341C3DE8E539FF5C42E17C3  : public UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932
{
};

// UIVirtualTouchZone/Event
struct Event_t39EC29014C2EF54751D4079DD636172E90DCE53E  : public UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932
{
};

// UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174  : public RuntimeObject
{
	// System.Single UnityEngine.AnimationEvent::m_Time
	float ___m_Time_0;
	// System.String UnityEngine.AnimationEvent::m_FunctionName
	String_t* ___m_FunctionName_1;
	// System.String UnityEngine.AnimationEvent::m_StringParameter
	String_t* ___m_StringParameter_2;
	// UnityEngine.Object UnityEngine.AnimationEvent::m_ObjectReferenceParameter
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ObjectReferenceParameter_3;
	// System.Single UnityEngine.AnimationEvent::m_FloatParameter
	float ___m_FloatParameter_4;
	// System.Int32 UnityEngine.AnimationEvent::m_IntParameter
	int32_t ___m_IntParameter_5;
	// System.Int32 UnityEngine.AnimationEvent::m_MessageOptions
	int32_t ___m_MessageOptions_6;
	// UnityEngine.AnimationEventSource UnityEngine.AnimationEvent::m_Source
	int32_t ___m_Source_7;
	// UnityEngine.AnimationState UnityEngine.AnimationEvent::m_StateSender
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* ___m_StateSender_8;
	// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::m_AnimatorStateInfo
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo_9;
	// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::m_AnimatorClipInfo
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_pinvoke
{
	float ___m_Time_0;
	char* ___m_FunctionName_1;
	char* ___m_StringParameter_2;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* ___m_StateSender_8;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo_10;
};
// Native definition for COM marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_com
{
	float ___m_Time_0;
	Il2CppChar* ___m_FunctionName_1;
	Il2CppChar* ___m_StringParameter_2;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* ___m_StateSender_8;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo_10;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputActionMap::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputActionMap::m_Id
	String_t* ___m_Id_1;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionMap::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_2;
	// UnityEngine.InputSystem.InputAction[] UnityEngine.InputSystem.InputActionMap::m_Actions
	InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810* ___m_Actions_3;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_Bindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_Bindings_4;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_BindingsForEachAction
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_BindingsForEachAction_5;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionMap::m_ControlsForEachAction
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ControlsForEachAction_6;
	// System.Boolean UnityEngine.InputSystem.InputActionMap::m_ControlsForEachActionInitialized
	bool ___m_ControlsForEachActionInitialized_7;
	// System.Boolean UnityEngine.InputSystem.InputActionMap::m_BindingsForEachActionInitialized
	bool ___m_BindingsForEachActionInitialized_8;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_EnabledActionsCount
	int32_t ___m_EnabledActionsCount_9;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::m_SingletonAction
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_SingletonAction_10;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_MapIndexInState
	int32_t ___m_MapIndexInState_11;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionMap::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_12;
	// System.Boolean UnityEngine.InputSystem.InputActionMap::m_NeedToResolveBindings
	bool ___m_NeedToResolveBindings_13;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionMap::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_14;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionMap::m_Devices
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputActionMap::m_ActionCallbacks
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_ActionCallbacks_16;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.InputSystem.InputActionMap::m_ActionIndexByNameOrId
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_ActionIndexByNameOrId_17;
};

struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09_StaticFields
{
	// System.Int32 UnityEngine.InputSystem.InputActionMap::s_DeferBindingResolution
	int32_t ___s_DeferBindingResolution_18;
};

// UnityEngine.InputSystem.InputValue
struct InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231  : public RuntimeObject
{
	// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext> UnityEngine.InputSystem.InputValue::m_Context
	Nullable_1_t69306F42657D3DC9EDCF5E87D81E582BDE7DAC42 ___m_Context_0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3 
{
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::pairingStateVersion
	int32_t ___pairingStateVersion_0;
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser/GlobalState::lastUserId
	uint32_t ___lastUserId_1;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allUserCount
	int32_t ___allUserCount_2;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allPairedDeviceCount
	int32_t ___allPairedDeviceCount_3;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allLostDeviceCount
	int32_t ___allLostDeviceCount_4;
	// UnityEngine.InputSystem.Users.InputUser[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allUsers
	InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD* ___allUsers_5;
	// UnityEngine.InputSystem.Users.InputUser/UserData[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allUserData
	UserDataU5BU5D_t5CB4987877C71E61FA131704B58CA6D8E5272C7E* ___allUserData_6;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allPairedDevices
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allPairedDevices_7;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allLostDevices
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allLostDevices_8;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection> UnityEngine.InputSystem.Users.InputUser/GlobalState::ongoingAccountSelections
	InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C ___ongoingAccountSelections_9;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onChange
	CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 ___onChange_10;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onUnpairedDeviceUsed
	CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 ___onUnpairedDeviceUsed_11;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onPreFilterUnpairedDeviceUsed
	CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE ___onPreFilterUnpairedDeviceUsed_12;
	// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange> UnityEngine.InputSystem.Users.InputUser/GlobalState::actionChangeDelegate
	Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D* ___actionChangeDelegate_13;
	// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange> UnityEngine.InputSystem.Users.InputUser/GlobalState::onDeviceChangeDelegate
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___onDeviceChangeDelegate_14;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.Users.InputUser/GlobalState::onEventDelegate
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___onEventDelegate_15;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onActionChangeHooked
	bool ___onActionChangeHooked_16;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onDeviceChangeHooked
	bool ___onDeviceChangeHooked_17;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onEventHooked
	bool ___onEventHooked_18;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::listenForUnpairedDeviceActivity
	int32_t ___listenForUnpairedDeviceActivity_19;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3_marshaled_pinvoke
{
	int32_t ___pairingStateVersion_0;
	uint32_t ___lastUserId_1;
	int32_t ___allUserCount_2;
	int32_t ___allPairedDeviceCount_3;
	int32_t ___allLostDeviceCount_4;
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E* ___allUsers_5;
	UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_pinvoke* ___allUserData_6;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allPairedDevices_7;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allLostDevices_8;
	InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C ___ongoingAccountSelections_9;
	CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 ___onChange_10;
	CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 ___onUnpairedDeviceUsed_11;
	CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE ___onPreFilterUnpairedDeviceUsed_12;
	Il2CppMethodPointer ___actionChangeDelegate_13;
	Il2CppMethodPointer ___onDeviceChangeDelegate_14;
	Il2CppMethodPointer ___onEventDelegate_15;
	int32_t ___onActionChangeHooked_16;
	int32_t ___onDeviceChangeHooked_17;
	int32_t ___onEventHooked_18;
	int32_t ___listenForUnpairedDeviceActivity_19;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3_marshaled_com
{
	int32_t ___pairingStateVersion_0;
	uint32_t ___lastUserId_1;
	int32_t ___allUserCount_2;
	int32_t ___allPairedDeviceCount_3;
	int32_t ___allLostDeviceCount_4;
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E* ___allUsers_5;
	UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_com* ___allUserData_6;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allPairedDevices_7;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allLostDevices_8;
	InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C ___ongoingAccountSelections_9;
	CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 ___onChange_10;
	CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 ___onUnpairedDeviceUsed_11;
	CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE ___onPreFilterUnpairedDeviceUsed_12;
	Il2CppMethodPointer ___actionChangeDelegate_13;
	Il2CppMethodPointer ___onDeviceChangeDelegate_14;
	Il2CppMethodPointer ___onEventDelegate_15;
	int32_t ___onActionChangeHooked_16;
	int32_t ___onDeviceChangeHooked_17;
	int32_t ___onEventHooked_18;
	int32_t ___listenForUnpairedDeviceActivity_19;
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ChunkData
struct ChunkData_tD70FCCE07C32F0D97ACFAA3EEB1331F0C7FBF9A5  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Single ChunkData::length
	float ___length_4;
	// UnityEngine.GameObject ChunkData::chunkPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___chunkPrefab_5;
	// ChunkType ChunkData::chucnkType
	int32_t ___chucnkType_6;
	// ChunkPosition ChunkData::chunkPos
	int32_t ___chunkPos_7;
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionAsset::m_ActionMaps
	InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045* ___m_ActionMaps_5;
	// UnityEngine.InputSystem.InputControlScheme[] UnityEngine.InputSystem.InputActionAsset::m_ControlSchemes
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_ControlSchemes_6;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionAsset::m_SharedStateForAllMaps
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_SharedStateForAllMaps_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionAsset::m_Devices
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices_9;
};

// UnityEngine.InputSystem.Users.InputUser
struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E 
{
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser::m_Id
	uint32_t ___m_Id_1;
};

struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E_StaticFields
{
	// UnityEngine.InputSystem.Users.InputUser/GlobalState UnityEngine.InputSystem.Users.InputUser::s_GlobalState
	GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3 ___s_GlobalState_2;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TriggerExit/ExitAction
struct ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// BasicRigidBodyPush
struct BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.LayerMask BasicRigidBodyPush::pushLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___pushLayers_4;
	// System.Boolean BasicRigidBodyPush::canPush
	bool ___canPush_5;
	// System.Single BasicRigidBodyPush::strength
	float ___strength_6;
};

// Chunk
struct Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Chunk::coinSpawner
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___coinSpawner_4;
	// UnityEngine.GameObject Chunk::coinPref
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___coinPref_5;
};

// ChunkManager
struct ChunkManager_tF9FAD853900B822D5DD7BE8BE38790D4966D71FF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ChunkData[] ChunkManager::chunksData
	ChunkDataU5BU5D_tA76F9BD9BC5B615AB48603578173947803FA6CA4* ___chunksData_4;
	// ChunkData ChunkManager::firstChunk
	ChunkData_tD70FCCE07C32F0D97ACFAA3EEB1331F0C7FBF9A5* ___firstChunk_5;
	// System.Int32 ChunkManager::initialSize
	int32_t ___initialSize_6;
	// UnityEngine.Vector3 ChunkManager::spawnOrig
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnOrig_7;
	// System.Single ChunkManager::currOffset
	float ___currOffset_8;
};

// Coin
struct Coin_t6EC3724A41D53D737B499E377089217F0190C268  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MobileDisableAutoSwitchControls
struct MobileDisableAutoSwitchControls_t0A648011382F1B8F00CD89B26AB30777CCBB9FDA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ObjectMovement
struct ObjectMovement_tCA9B1EB3AE0A2352E5307DB2BA8F9CB76DCD220A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ObjectMovement::speed
	float ___speed_4;
	// UnityEngine.Vector3 ObjectMovement::moveDir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveDir_5;
};

// OriginReset
struct OriginReset_t3499F564E9735E2AD6754A98D566F336E2F27C5F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single OriginReset::threshold
	float ___threshold_4;
};

// PathCorner
struct PathCorner_tA208FA7E1C6F83DD2A8B7D127319474FB48B2A0C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.InputSystem.PlayerInput
struct PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.PlayerInput::m_Actions
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Actions_7;
	// UnityEngine.InputSystem.PlayerNotifications UnityEngine.InputSystem.PlayerInput::m_NotificationBehavior
	int32_t ___m_NotificationBehavior_8;
	// UnityEngine.InputSystem.UI.InputSystemUIInputModule UnityEngine.InputSystem.PlayerInput::m_UIInputModule
	InputSystemUIInputModule_tB7D5B53F656D196BB5AF712FA16FEE22B2EE0C58* ___m_UIInputModule_9;
	// UnityEngine.InputSystem.PlayerInput/DeviceLostEvent UnityEngine.InputSystem.PlayerInput::m_DeviceLostEvent
	DeviceLostEvent_tDD8832F14B7DA15569261EFEBC47E67CF4E1B9D4* ___m_DeviceLostEvent_10;
	// UnityEngine.InputSystem.PlayerInput/DeviceRegainedEvent UnityEngine.InputSystem.PlayerInput::m_DeviceRegainedEvent
	DeviceRegainedEvent_t24153E8876417F010AA4C0C1C25D6CB792EC01D1* ___m_DeviceRegainedEvent_11;
	// UnityEngine.InputSystem.PlayerInput/ControlsChangedEvent UnityEngine.InputSystem.PlayerInput::m_ControlsChangedEvent
	ControlsChangedEvent_t24A5BA4AB8034B3C662F956A4C85ECC6B8332B48* ___m_ControlsChangedEvent_12;
	// UnityEngine.InputSystem.PlayerInput/ActionEvent[] UnityEngine.InputSystem.PlayerInput::m_ActionEvents
	ActionEventU5BU5D_t45BD340B9AA6F3287339EA686E3FE0A47801E88F* ___m_ActionEvents_13;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_NeverAutoSwitchControlSchemes
	bool ___m_NeverAutoSwitchControlSchemes_14;
	// System.String UnityEngine.InputSystem.PlayerInput::m_DefaultControlScheme
	String_t* ___m_DefaultControlScheme_15;
	// System.String UnityEngine.InputSystem.PlayerInput::m_DefaultActionMap
	String_t* ___m_DefaultActionMap_16;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::m_SplitScreenIndex
	int32_t ___m_SplitScreenIndex_17;
	// UnityEngine.Camera UnityEngine.InputSystem.PlayerInput::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_18;
	// UnityEngine.InputSystem.InputValue UnityEngine.InputSystem.PlayerInput::m_InputValueObject
	InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___m_InputValueObject_19;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.PlayerInput::m_CurrentActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_CurrentActionMap_20;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::m_PlayerIndex
	int32_t ___m_PlayerIndex_21;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_InputActive
	bool ___m_InputActive_22;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_Enabled
	bool ___m_Enabled_23;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_ActionsInitialized
	bool ___m_ActionsInitialized_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.InputSystem.PlayerInput::m_ActionMessageNames
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___m_ActionMessageNames_25;
	// UnityEngine.InputSystem.Users.InputUser UnityEngine.InputSystem.PlayerInput::m_InputUser
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E ___m_InputUser_26;
	// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext> UnityEngine.InputSystem.PlayerInput::m_ActionTriggeredDelegate
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___m_ActionTriggeredDelegate_27;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_DeviceLostCallbacks
	CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F ___m_DeviceLostCallbacks_28;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_DeviceRegainedCallbacks
	CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F ___m_DeviceRegainedCallbacks_29;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_ControlsChangedCallbacks
	CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F ___m_ControlsChangedCallbacks_30;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.PlayerInput::m_ActionTriggeredCallbacks
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_ActionTriggeredCallbacks_31;
	// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr> UnityEngine.InputSystem.PlayerInput::m_UnpairedDeviceUsedDelegate
	Action_2_t6A27AF0A3585FFCF87D39ADE472BCFD2F2930F19* ___m_UnpairedDeviceUsedDelegate_32;
	// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean> UnityEngine.InputSystem.PlayerInput::m_PreFilterUnpairedDeviceUsedDelegate
	Func_3_t42E9F5CDEF4CF174C35D943F427EF585FE829937* ___m_PreFilterUnpairedDeviceUsedDelegate_33;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_OnUnpairedDeviceUsedHooked
	bool ___m_OnUnpairedDeviceUsedHooked_34;
	// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange> UnityEngine.InputSystem.PlayerInput::m_DeviceChangeDelegate
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___m_DeviceChangeDelegate_35;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_OnDeviceChangeHooked
	bool ___m_OnDeviceChangeHooked_36;
};

struct PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_StaticFields
{
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_AllActivePlayersCount
	int32_t ___s_AllActivePlayersCount_37;
	// UnityEngine.InputSystem.PlayerInput[] UnityEngine.InputSystem.PlayerInput::s_AllActivePlayers
	PlayerInputU5BU5D_t68A8570E76E18996F872BEEBA1C81ED2E4671080* ___s_AllActivePlayers_38;
	// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.PlayerInput::s_UserChangeDelegate
	Action_3_tE646D5EE2107669AE49025C0E3DC04C831ACCAE0* ___s_UserChangeDelegate_39;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitPairWithDevicesCount
	int32_t ___s_InitPairWithDevicesCount_40;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.PlayerInput::s_InitPairWithDevices
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___s_InitPairWithDevices_41;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitPlayerIndex
	int32_t ___s_InitPlayerIndex_42;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitSplitScreenIndex
	int32_t ___s_InitSplitScreenIndex_43;
	// System.String UnityEngine.InputSystem.PlayerInput::s_InitControlScheme
	String_t* ___s_InitControlScheme_44;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::s_DestroyIfDeviceSetupUnsuccessful
	bool ___s_DestroyIfDeviceSetupUnsuccessful_45;
};

// PlayerMovement
struct PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody PlayerMovement::playerRigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___playerRigidbody_4;
	// System.Single PlayerMovement::trackDist
	float ___trackDist_5;
	// System.Single PlayerMovement::movementSpeed
	float ___movementSpeed_6;
};

// SmoothMover
struct SmoothMover_tDBFFF780F038F6D3A85F60B77056823E31F06A63  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform SmoothMover::destination
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___destination_4;
};

// Spawner
struct Spawner_t387EDFC7BADAEFFD3305FD31D1E8DDE8998FCDD7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// StarterAssets.StarterAssetsInputs
struct StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 StarterAssets.StarterAssetsInputs::move
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___move_4;
	// UnityEngine.Vector2 StarterAssets.StarterAssetsInputs::look
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___look_5;
	// System.Boolean StarterAssets.StarterAssetsInputs::jump
	bool ___jump_6;
	// System.Boolean StarterAssets.StarterAssetsInputs::sprint
	bool ___sprint_7;
	// System.Boolean StarterAssets.StarterAssetsInputs::analogMovement
	bool ___analogMovement_8;
	// System.Boolean StarterAssets.StarterAssetsInputs::cursorLocked
	bool ___cursorLocked_9;
	// System.Boolean StarterAssets.StarterAssetsInputs::cursorInputForLook
	bool ___cursorInputForLook_10;
};

// StarterAssets.ThirdPersonController
struct ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single StarterAssets.ThirdPersonController::MoveSpeed
	float ___MoveSpeed_4;
	// System.Single StarterAssets.ThirdPersonController::SprintSpeed
	float ___SprintSpeed_5;
	// System.Single StarterAssets.ThirdPersonController::RotationSmoothTime
	float ___RotationSmoothTime_6;
	// System.Single StarterAssets.ThirdPersonController::SpeedChangeRate
	float ___SpeedChangeRate_7;
	// UnityEngine.AudioClip StarterAssets.ThirdPersonController::LandingAudioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___LandingAudioClip_8;
	// UnityEngine.AudioClip[] StarterAssets.ThirdPersonController::FootstepAudioClips
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___FootstepAudioClips_9;
	// System.Single StarterAssets.ThirdPersonController::FootstepAudioVolume
	float ___FootstepAudioVolume_10;
	// System.Single StarterAssets.ThirdPersonController::JumpHeight
	float ___JumpHeight_11;
	// System.Single StarterAssets.ThirdPersonController::Gravity
	float ___Gravity_12;
	// System.Single StarterAssets.ThirdPersonController::JumpTimeout
	float ___JumpTimeout_13;
	// System.Single StarterAssets.ThirdPersonController::FallTimeout
	float ___FallTimeout_14;
	// System.Boolean StarterAssets.ThirdPersonController::Grounded
	bool ___Grounded_15;
	// System.Single StarterAssets.ThirdPersonController::GroundedOffset
	float ___GroundedOffset_16;
	// System.Single StarterAssets.ThirdPersonController::GroundedRadius
	float ___GroundedRadius_17;
	// UnityEngine.LayerMask StarterAssets.ThirdPersonController::GroundLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___GroundLayers_18;
	// UnityEngine.GameObject StarterAssets.ThirdPersonController::CinemachineCameraTarget
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CinemachineCameraTarget_19;
	// System.Single StarterAssets.ThirdPersonController::TopClamp
	float ___TopClamp_20;
	// System.Single StarterAssets.ThirdPersonController::BottomClamp
	float ___BottomClamp_21;
	// System.Single StarterAssets.ThirdPersonController::CameraAngleOverride
	float ___CameraAngleOverride_22;
	// System.Boolean StarterAssets.ThirdPersonController::LockCameraPosition
	bool ___LockCameraPosition_23;
	// System.Single StarterAssets.ThirdPersonController::_cinemachineTargetYaw
	float ____cinemachineTargetYaw_24;
	// System.Single StarterAssets.ThirdPersonController::_cinemachineTargetPitch
	float ____cinemachineTargetPitch_25;
	// System.Single StarterAssets.ThirdPersonController::_speed
	float ____speed_26;
	// System.Single StarterAssets.ThirdPersonController::_animationBlend
	float ____animationBlend_27;
	// System.Single StarterAssets.ThirdPersonController::_targetRotation
	float ____targetRotation_28;
	// System.Single StarterAssets.ThirdPersonController::_rotationVelocity
	float ____rotationVelocity_29;
	// System.Single StarterAssets.ThirdPersonController::_verticalVelocity
	float ____verticalVelocity_30;
	// System.Single StarterAssets.ThirdPersonController::_terminalVelocity
	float ____terminalVelocity_31;
	// System.Single StarterAssets.ThirdPersonController::_jumpTimeoutDelta
	float ____jumpTimeoutDelta_32;
	// System.Single StarterAssets.ThirdPersonController::_fallTimeoutDelta
	float ____fallTimeoutDelta_33;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDSpeed
	int32_t ____animIDSpeed_34;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDGrounded
	int32_t ____animIDGrounded_35;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDJump
	int32_t ____animIDJump_36;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDFreeFall
	int32_t ____animIDFreeFall_37;
	// System.Int32 StarterAssets.ThirdPersonController::_animIDMotionSpeed
	int32_t ____animIDMotionSpeed_38;
	// UnityEngine.InputSystem.PlayerInput StarterAssets.ThirdPersonController::_playerInput
	PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* ____playerInput_39;
	// UnityEngine.Animator StarterAssets.ThirdPersonController::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_40;
	// UnityEngine.CharacterController StarterAssets.ThirdPersonController::_controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ____controller_41;
	// StarterAssets.StarterAssetsInputs StarterAssets.ThirdPersonController::_input
	StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* ____input_42;
	// UnityEngine.GameObject StarterAssets.ThirdPersonController::_mainCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____mainCamera_43;
	// System.Boolean StarterAssets.ThirdPersonController::_hasAnimator
	bool ____hasAnimator_45;
};

// TriggerExit
struct TriggerExit_t16AF59B53104B954B55EDDE1FE9AA0B10EC5BCB5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TriggerExit::delBefDelete
	float ___delBefDelete_4;
	// System.Boolean TriggerExit::isExited
	bool ___isExited_6;
};

struct TriggerExit_t16AF59B53104B954B55EDDE1FE9AA0B10EC5BCB5_StaticFields
{
	// TriggerExit/ExitAction TriggerExit::OnChunkExited
	ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* ___OnChunkExited_5;
};

// TriggerUniversal
struct TriggerUniversal_t7C6795796D3F947A1B35AC235DDB98B5EB2BF82E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// StarterAssets.UICanvasControllerInput
struct UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// StarterAssets.StarterAssetsInputs StarterAssets.UICanvasControllerInput::starterAssetsInputs
	StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* ___starterAssetsInputs_4;
};

// UIVirtualButton
struct UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UIVirtualButton/BoolEvent UIVirtualButton::buttonStateOutputEvent
	BoolEvent_t81DF6CDEF90C1D7B2256C9310BCCE9D2D078480A* ___buttonStateOutputEvent_4;
	// UIVirtualButton/Event UIVirtualButton::buttonClickOutputEvent
	Event_tCD26C285BECBF219F0B786DA841165B26E05F0B8* ___buttonClickOutputEvent_5;
};

// UIVirtualJoystick
struct UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform UIVirtualJoystick::containerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___containerRect_4;
	// UnityEngine.RectTransform UIVirtualJoystick::handleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___handleRect_5;
	// System.Single UIVirtualJoystick::joystickRange
	float ___joystickRange_6;
	// System.Single UIVirtualJoystick::magnitudeMultiplier
	float ___magnitudeMultiplier_7;
	// System.Boolean UIVirtualJoystick::invertXOutputValue
	bool ___invertXOutputValue_8;
	// System.Boolean UIVirtualJoystick::invertYOutputValue
	bool ___invertYOutputValue_9;
	// UIVirtualJoystick/Event UIVirtualJoystick::joystickOutputEvent
	Event_tE8BCFAF6D3E261F47341C3DE8E539FF5C42E17C3* ___joystickOutputEvent_10;
};

// UIVirtualTouchZone
struct UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform UIVirtualTouchZone::containerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___containerRect_4;
	// UnityEngine.RectTransform UIVirtualTouchZone::handleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___handleRect_5;
	// System.Boolean UIVirtualTouchZone::clampToMagnitude
	bool ___clampToMagnitude_6;
	// System.Single UIVirtualTouchZone::magnitudeMultiplier
	float ___magnitudeMultiplier_7;
	// System.Boolean UIVirtualTouchZone::invertXOutputValue
	bool ___invertXOutputValue_8;
	// System.Boolean UIVirtualTouchZone::invertYOutputValue
	bool ___invertYOutputValue_9;
	// UnityEngine.Vector2 UIVirtualTouchZone::pointerDownPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pointerDownPosition_10;
	// UnityEngine.Vector2 UIVirtualTouchZone::currentPointerPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___currentPointerPosition_11;
	// UIVirtualTouchZone/Event UIVirtualTouchZone::touchZoneOutputEvent
	Event_t39EC29014C2EF54751D4079DD636172E90DCE53E* ___touchZoneOutputEvent_12;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// ChunkData[]
struct ChunkDataU5BU5D_tA76F9BD9BC5B615AB48603578173947803FA6CA4  : public RuntimeArray
{
	ALIGN_FIELD (8) ChunkData_tD70FCCE07C32F0D97ACFAA3EEB1331F0C7FBF9A5* m_Items[1];

	inline ChunkData_tD70FCCE07C32F0D97ACFAA3EEB1331F0C7FBF9A5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ChunkData_tD70FCCE07C32F0D97ACFAA3EEB1331F0C7FBF9A5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ChunkData_tD70FCCE07C32F0D97ACFAA3EEB1331F0C7FBF9A5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ChunkData_tD70FCCE07C32F0D97ACFAA3EEB1331F0C7FBF9A5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ChunkData_tD70FCCE07C32F0D97ACFAA3EEB1331F0C7FBF9A5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ChunkData_tD70FCCE07C32F0D97ACFAA3EEB1331F0C7FBF9A5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_gshared (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_gshared (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputValue::Get<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_gshared (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___component0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionAsset::FromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* InputActionAsset_FromJson_mA8AF88895F49DB0F0BAB47B60744E927E6234347 (String_t* ___json0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionAsset PlayerInputActions::get_asset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionAsset::FindActionMap(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___nameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::get_bindingMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_bindingMask_mD621370B859495F593CBE28019D84F44922C94A5 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___value0, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.InputActionAsset::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D InputActionAsset_get_devices_m8FF856B2C61E23B7360A9279C10F8A6498C72B9C (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_devices_m5A513BB841DB76966CD2B39E0E6FA8AFB3EBE38D (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D ___value0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> UnityEngine.InputSystem.InputActionAsset::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputActionAsset::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionAsset_Contains_mB3B9FBCE562FB5229F9387F14AEC22083FC6CDDE (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___action0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.InputActionAsset::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionAsset_GetEnumerator_m39998F5B21D08AAE328E63B3FDCC0F414620A8A9 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> PlayerInputActions::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerInputActions_GetEnumerator_m01CFD2F20E928973D9E48AA9F6A026E776792482 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::get_bindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionAsset_get_bindings_mB045318575B5D7B13A92B973CABB40E0FEC70FB9 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionAsset::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionAsset_FindAction_m50D07EAFAA8628B9793E7BBEEB2E89C2A9C45C00 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.InputActionAsset::FindBinding(UnityEngine.InputSystem.InputBinding,UnityEngine.InputSystem.InputAction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputActionAsset_FindBinding_mB5B36B9DDFAABFD4B528B891653B1B5B895DBDC5 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___mask0, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** ___action1, const RuntimeMethod* method) ;
// System.Void PlayerInputActions/Player_mapActions::.ctor(PlayerInputActions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_mapActions__ctor_mB26A9EC7AE3FFC2202170FC60AE9B433A9E2322C_inline (Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* __this, PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* ___wrapper0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction PlayerInputActions/Player_mapActions::get_strafe_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* Player_mapActions_get_strafe_left_m88C14FD359401CE735E20FFCBB221F63DEE28F6C (Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction PlayerInputActions/Player_mapActions::get_strafe_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* Player_mapActions_get_strafe_right_mA5A446A75B0EDF80021B527184EF08225D68FF90 (Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction PlayerInputActions/Player_mapActions::get_jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* Player_mapActions_get_jump_m9FD9F2BC41995097114B036E055282905628E401 (Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction PlayerInputActions/Player_mapActions::get_roll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* Player_mapActions_get_roll_m4738EC49E50E19EB374204D3084EFF26E7BD7BDF (Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap PlayerInputActions/Player_mapActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* Player_mapActions_Get_m55CF5855C1CA0EAD3C826C94A255CE12ED33A268 (Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionMap::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Void PlayerInputActions/Player_mapActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_mapActions_Enable_m04C241CCC20BE36CC1A17649911939C46BD4513E (Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionMap::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Void PlayerInputActions/Player_mapActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_mapActions_Disable_m2D134EEFEE9503B6C61A74916950329E653C58D3 (Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputActionMap::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Boolean PlayerInputActions/Player_mapActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Player_mapActions_get_enabled_mD94A2585E9CB9734560E3AC97176AC957C45D834 (Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::remove_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void PlayerInputActions/Player_mapActions::SetCallbacks(PlayerInputActions/IPlayer_mapActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_mapActions_SetCallbacks_m42079C0CAA6B14C4FA778B95F9B383F90044A518 (Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Chunk>()
inline Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* GameObject_GetComponent_TisChunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060_mD6C9C746C2686E4AD5C82E179B336F6C6AC1E05A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Chunk::GenerateItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk_GenerateItems_mE3E3E793B2B827382A6424223611EBDBD35BFE8E (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, const RuntimeMethod* method) ;
// System.Void ChunkManager::GenerateInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkManager_GenerateInit_m12F0358C58A79A5490FAC0588493F3FD867473AA (ChunkManager_tF9FAD853900B822D5DD7BE8BE38790D4966D71FF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void PlayerInputActions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputActions__ctor_m3007C78241520148B12C773C76D25024D9B20E3A (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) ;
// PlayerInputActions/Player_mapActions PlayerInputActions::get_player_map()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132 PlayerInputActions_get_player_map_mAA6368E818A1467EDE5C555F8D8BC4754C39973C (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) ;
// System.Void PlayerMovement/<SwitchTrack>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchTrackU3Ed__4__ctor_mB43ED9AFA49A332B117DBB4BE80B5D8700B7F19D (U3CSwitchTrackU3Ed__4_t936D78E0D7D66882160AFE1FC3F858A057DFF9F8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SmoothMover::strafeMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SmoothMover_strafeMovement_m9D495424414AF22B1E967338D083C66C2BAD9AF3 (SmoothMover_tDBFFF780F038F6D3A85F60B77056823E31F06A63* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void SmoothMover/<strafeMovement>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CstrafeMovementU3Ed__2__ctor_m42AC8FF1A32CC35F7A697092DFF482FF00EBFB50 (U3CstrafeMovementU3Ed__2_tEBBE72A88306BDC17EF016A5C502025480CEC45F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void UIVirtualButton::OutputButtonStateValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonStateValue_m9052A6A66D9BD3C47C6C5498AD55EB44BBF6BB9F (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, bool ___buttonState0, const RuntimeMethod* method) ;
// System.Void UIVirtualButton::OutputButtonClickEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonClickEvent_m7DEA4C619F5DCCE273371E9D7B7760FC05D2DF32 (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
inline void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, bool, const RuntimeMethod*))UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
inline void UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, const RuntimeMethod*))UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UIVirtualJoystick::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_SetupHandle_m31819BE784870B9E54B3A50CA1956106F7BDB0C6 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Void UIVirtualJoystick::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newPosition0, const RuntimeMethod* method) ;
// System.Void UIVirtualJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnDrag_mB0E6B186E3567D9B4C37860E70DCA0B8DDB746C0 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___localPoint3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualJoystick::ApplySizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ApplySizeDelta_mE401CB7F9B4D1E53DD878FE6D3B34DD98A8BBEDB (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualJoystick::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ClampValuesToMagnitude_m136E1691A4EA6C3D59C18AF78CB3C790CCB8346E (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualJoystick::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ApplyInversionFilter_m92C48D8832AAFB5BCFA8C5E0E279E44E76EAC03E (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UIVirtualJoystick::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OutputPointerEventValue_mB0CA7705B486C5BC44C8AB8D3135B37A19800DB6 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pointerPosition0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
inline void UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0 (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::ClampMagnitude(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_ClampMagnitude_m9F4DC26ED98E682A187F4B2AFEAB49CD376DF7CA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, float ___maxLength1, const RuntimeMethod* method) ;
// System.Single UIVirtualJoystick::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualJoystick_InvertValue_mDEBA6DFF3676133434C5152A72CB2BC125D3D507 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
inline void UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932*, const RuntimeMethod*))UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_gshared)(__this, method);
}
// System.Void UIVirtualTouchZone::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetupHandle_m01D23F4128356836F9A12EAE5445227B24E8A894 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UIVirtualTouchZone::SetObjectActiveState(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, bool ___newState1, const RuntimeMethod* method) ;
// System.Void UIVirtualTouchZone::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_UpdateHandleRectPosition_m859E4E9C7C76AA057603B2CAA49168BD0D5ACC9E (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newPosition0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualTouchZone::GetDeltaBetweenPositions(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_GetDeltaBetweenPositions_mD54442DDF2D8B643801BDA01791C97D3658E0B5B (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___firstPosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___secondPosition1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualTouchZone::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_ClampValuesToMagnitude_mA1619A6CBC35D212940A5D0AC1823AAFDA8FCC95 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualTouchZone::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_ApplyInversionFilter_mFE8FF2CCBE01FDAB1BB9FDEC163809B630173823 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// System.Void UIVirtualTouchZone::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OutputPointerEventValue_m53065FA2AD015F665E03E7CAE24703CFE1C4E2AF (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pointerPosition0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UIVirtualTouchZone::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualTouchZone_InvertValue_m81A82AFD20813D467E3F71703E9A5EE11CAE99BA (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void BasicRigidBodyPush::PushRigidBodies(UnityEngine.ControllerColliderHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicRigidBodyPush_PushRigidBodies_m21C4CA75FFF7646BCD91E9A673B18E6182377D13 (BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0* __this, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* ___hit0, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.ControllerColliderHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ControllerColliderHit_get_collider_mA2CF90334AD1231C04452B2D99715A9E289691D6 (ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* __this, const RuntimeMethod* method) ;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody_get_isKinematic_mC20906CA5A89983DE06EAC6E3AFC5BC012F90CA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::get_moveDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerColliderHit_get_moveDirection_mC4C6384C18B4DAE3D301D079AE2A30FCC2E78A93 (ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputValue::Get<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293 (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231*, const RuntimeMethod*))InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_gshared)(__this, method);
}
// System.Void StarterAssets.StarterAssetsInputs::MoveInput(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newMoveDirection0, const RuntimeMethod* method) ;
// System.Void StarterAssets.StarterAssetsInputs::LookInput(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newLookDirection0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputValue::get_isPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputValue_get_isPressed_m83E305196A51E4FDB9277B726ADBE9673D9F7A3F (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.StarterAssetsInputs::JumpInput(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newJumpState0, const RuntimeMethod* method) ;
// System.Void StarterAssets.StarterAssetsInputs::SprintInput(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newSprintState0, const RuntimeMethod* method) ;
// System.Void StarterAssets.StarterAssetsInputs::SetCursorState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_SetCursorState_m7D2F57E935DE40673700B1994EFA6C4BF9573D0E (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newState0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D (int32_t ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.PlayerInput::get_currentControlScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerInput_get_currentControlScheme_mA70B5C50BA1A61D2E232F17730BAECD3F690204C (PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9 (String_t* ___tag0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.Animator>(T&)
inline bool Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___component0, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<StarterAssets.StarterAssetsInputs>()
inline StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.InputSystem.PlayerInput>()
inline PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void StarterAssets.ThirdPersonController::AssignAnimationIDs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_AssignAnimationIDs_m3F78712E347AAEB24671FD485878AD4EFB45FA6A (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.ThirdPersonController::JumpAndGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_JumpAndGravity_m871B3C01ED71022CF151700F569540EAC058997F (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.ThirdPersonController::GroundedCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_GroundedCheck_mEC00FD7C667109275F153C9A1E7BDA401D514AEE (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.ThirdPersonController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Move_m6FB6A9AEA1B2354BAE790DE45C79292579802C76 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.ThirdPersonController::CameraRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_CameraRotation_m24BBAE5DB2B55B6DDC5218DD0DB7C53F1EF30751 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CheckSphere_m8642264AC443B505CE92D5DC9E41F75DA0ADAFBF (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___radius1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, bool ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Boolean StarterAssets.ThirdPersonController::get_IsCurrentDeviceMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThirdPersonController_get_IsCurrentDeviceMouse_m5EBE0107CBD975A6178FCE2840C3D159A13C6D9C (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) ;
// System.Single StarterAssets.ThirdPersonController::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ThirdPersonController_ClampAngle_m7569DBBF5E50A690C57959DE6CCE6A18C32E19A2 (float ___lfAngle0, float ___lfMin1, float ___lfMax2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CharacterController::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_m1176F6353029E4F715A36DBC62B176050A21EBDC_inline (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___motion0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, float ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawSphere_m80D4373C59949363664E571DCE7E9C54337B4942 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, float ___radius1, const RuntimeMethod* method) ;
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 AnimationEvent_get_animatorClipInfo_m0D763FA1A2E3CD81AC08F1F24977859AE25938F3 (AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimatorClipInfo::get_weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorClipInfo_get_weight_m1CC29E2C37B30993EFFD12161059E4AD86EE287D (AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CharacterController::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CharacterController_get_center_mDF0F4D399A63BF5A2F5366CB71CCF4148DB08591 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_mEEF6FE993B8F7A61829F0E9538858711D06945F7 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, float ___volume2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_m4B6A71D10BBD87D55EE8AE2A8C708CE115C60973_inline (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::DeltaAngle(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_m4B87B84265A48389AC3F5E3E8164570C6AECE5C3_inline (float ___current0, float ___target1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m00E482452BCED3FE0F16B4033B2B5323C7E30829 (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.InputSystem.InputActionAsset PlayerInputActions::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___U3CassetU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void PlayerInputActions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputActions__ctor_m3007C78241520148B12C773C76D25024D9B20E3A (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DAA1BA950E9E97C5CBA4ABC4856A22F1AB69DC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B16AB414793C9E7BCBE5457F263230F6327F453);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E320281B34C5351DD426E6D028E4C903AD77887);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A5E7F2E72C1AE0C4F32F5ED934FEC8C1EDC681A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0C553209DB220AAD5FECFD351FAC1B2F1D3B9D1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public @PlayerInputActions()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//         asset = InputActionAsset.FromJson(@"{
		//     ""name"": ""PlayerInputActions"",
		//     ""maps"": [
		//         {
		//             ""name"": ""player_map"",
		//             ""id"": ""839bce09-e609-47f6-b0b4-a78730edf2d6"",
		//             ""actions"": [
		//                 {
		//                     ""name"": ""strafe_left"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""27061040-9874-4391-8f5e-1c55d6e97e75"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""strafe_right"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""effa6cec-41db-4352-b86a-88142d7d0820"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""jump"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""6942fcd9-b6aa-45f0-bd1d-b348e1861bad"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""roll"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""332da448-c66f-4e66-8ac6-35f28287e5db"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 }
		//             ],
		//             ""bindings"": [
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""84315649-965b-4747-a934-b887a7b968c0"",
		//                     ""path"": ""<Keyboard>/a"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""strafe_left"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""f561108b-eac9-417d-8cdc-12876a7998b4"",
		//                     ""path"": ""<Keyboard>/d"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""strafe_right"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""0b30be31-5d3f-4e53-874d-1002b428f51a"",
		//                     ""path"": ""<Keyboard>/w"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""jump"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""524aab7c-ae1c-4ec8-ad8c-1136e37c7855"",
		//                     ""path"": ""<Keyboard>/space"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""jump"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""580251ce-2417-4976-b19b-e39bb4f7dd36"",
		//                     ""path"": ""<Keyboard>/s"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""roll"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 }
		//             ]
		//         }
		//     ],
		//     ""controlSchemes"": []
		// }");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = InputActionAsset_FromJson_mA8AF88895F49DB0F0BAB47B60744E927E6234347(_stringLiteral3B16AB414793C9E7BCBE5457F263230F6327F453, NULL);
		__this->___U3CassetU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CassetU3Ek__BackingField_0), (void*)L_0);
		// m_player_map = asset.FindActionMap("player_map", throwIfNotFound: true);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_1;
		L_1 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_2;
		L_2 = InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75(L_1, _stringLiteral1DAA1BA950E9E97C5CBA4ABC4856A22F1AB69DC7, (bool)1, NULL);
		__this->___m_player_map_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_player_map_1), (void*)L_2);
		// m_player_map_strafe_left = m_player_map.FindAction("strafe_left", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_3 = __this->___m_player_map_1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_3, _stringLiteral7A5E7F2E72C1AE0C4F32F5ED934FEC8C1EDC681A, (bool)1, NULL);
		__this->___m_player_map_strafe_left_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_player_map_strafe_left_3), (void*)L_4);
		// m_player_map_strafe_right = m_player_map.FindAction("strafe_right", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_5 = __this->___m_player_map_1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_5, _stringLiteralA0C553209DB220AAD5FECFD351FAC1B2F1D3B9D1, (bool)1, NULL);
		__this->___m_player_map_strafe_right_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_player_map_strafe_right_4), (void*)L_6);
		// m_player_map_jump = m_player_map.FindAction("jump", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_7 = __this->___m_player_map_1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8;
		L_8 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_7, _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7, (bool)1, NULL);
		__this->___m_player_map_jump_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_player_map_jump_5), (void*)L_8);
		// m_player_map_roll = m_player_map.FindAction("roll", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_9 = __this->___m_player_map_1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_10;
		L_10 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_9, _stringLiteral4E320281B34C5351DD426E6D028E4C903AD77887, (bool)1, NULL);
		__this->___m_player_map_roll_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_player_map_roll_6), (void*)L_10);
		// }
		return;
	}
}
// System.Void PlayerInputActions::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputActions_Dispose_m2AC2D95301CC2FB85875111A7A90697EED5886F4 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Object.Destroy(asset);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_0, NULL);
		// }
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> PlayerInputActions::get_bindingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 PlayerInputActions_get_bindingMask_mEC8BFDD6F9C15D41561E3C0AA6A69F5518E5C836 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	{
		// get => asset.bindingMask;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_1;
		L_1 = InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void PlayerInputActions::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputActions_set_bindingMask_mABC40B6D8CC89A69331923140496D1FAF9FCA096 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___value0, const RuntimeMethod* method) 
{
	{
		// set => asset.bindingMask = value;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_1 = ___value0;
		InputActionAsset_set_bindingMask_mD621370B859495F593CBE28019D84F44922C94A5(L_0, L_1, NULL);
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> PlayerInputActions::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D PlayerInputActions_get_devices_m43CB41FAC8ADF00480C1D4F3069BC0B7071F44DE (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	{
		// get => asset.devices;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D L_1;
		L_1 = InputActionAsset_get_devices_m8FF856B2C61E23B7360A9279C10F8A6498C72B9C(L_0, NULL);
		return L_1;
	}
}
// System.Void PlayerInputActions::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputActions_set_devices_m2E43AB069A166171650682F7586134E37B5A142D (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D ___value0, const RuntimeMethod* method) 
{
	{
		// set => asset.devices = value;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D L_1 = ___value0;
		InputActionAsset_set_devices_m5A513BB841DB76966CD2B39E0E6FA8AFB3EBE38D(L_0, L_1, NULL);
		return;
	}
}
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> PlayerInputActions::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 PlayerInputActions_get_controlSchemes_m92B4B28B637AD08CCA98C2455D3B6E13663126E5 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	{
		// public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 L_1;
		L_1 = InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099(L_0, NULL);
		return L_1;
	}
}
// System.Boolean PlayerInputActions::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerInputActions_Contains_mA2B9FC677F0ABE5286A8090B596070943BE968DA (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___action0, const RuntimeMethod* method) 
{
	{
		// return asset.Contains(action);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = ___action0;
		bool L_2;
		L_2 = InputActionAsset_Contains_mB3B9FBCE562FB5229F9387F14AEC22083FC6CDDE(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> PlayerInputActions::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerInputActions_GetEnumerator_m01CFD2F20E928973D9E48AA9F6A026E776792482 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	{
		// return asset.GetEnumerator();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		RuntimeObject* L_1;
		L_1 = InputActionAsset_GetEnumerator_m39998F5B21D08AAE328E63B3FDCC0F414620A8A9(L_0, NULL);
		return L_1;
	}
}
// System.Collections.IEnumerator PlayerInputActions::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerInputActions_System_Collections_IEnumerable_GetEnumerator_mA50CF9408948A4E82BF707B6FA8F5C5D30A10DD8 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = PlayerInputActions_GetEnumerator_m01CFD2F20E928973D9E48AA9F6A026E776792482(__this, NULL);
		return L_0;
	}
}
// System.Void PlayerInputActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputActions_Enable_mD47BCD016CA00174C935EC76B83C4944775EAB71 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	{
		// asset.Enable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayerInputActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputActions_Disable_mCB48734F566DF7736773346C95774E2AF14A3465 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	{
		// asset.Disable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C(L_0, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding> PlayerInputActions::get_bindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerInputActions_get_bindings_m3125AE7CE781F4EAA8B0B66F145CF9F44AC98835 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	{
		// public IEnumerable<InputBinding> bindings => asset.bindings;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		RuntimeObject* L_1;
		L_1 = InputActionAsset_get_bindings_mB045318575B5D7B13A92B973CABB40E0FEC70FB9(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.InputSystem.InputAction PlayerInputActions::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerInputActions_FindAction_mB6309494AC8B242FF00D1EC4E0324EA1A6CC0F70 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) 
{
	{
		// return asset.FindAction(actionNameOrId, throwIfNotFound);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		String_t* L_1 = ___actionNameOrId0;
		bool L_2 = ___throwIfNotFound1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionAsset_FindAction_m50D07EAFAA8628B9793E7BBEEB2E89C2A9C45C00(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 PlayerInputActions::FindBinding(UnityEngine.InputSystem.InputBinding,UnityEngine.InputSystem.InputAction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerInputActions_FindBinding_mAEB99F49171964FD5743ED406CC6BE76A227046C (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___bindingMask0, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** ___action1, const RuntimeMethod* method) 
{
	{
		// return asset.FindBinding(bindingMask, out action);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 L_1 = ___bindingMask0;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** L_2 = ___action1;
		int32_t L_3;
		L_3 = InputActionAsset_FindBinding_mB5B36B9DDFAABFD4B528B891653B1B5B895DBDC5(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// PlayerInputActions/Player_mapActions PlayerInputActions::get_player_map()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132 PlayerInputActions_get_player_map_mAA6368E818A1467EDE5C555F8D8BC4754C39973C (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	{
		// public Player_mapActions @player_map => new Player_mapActions(this);
		Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Player_mapActions__ctor_mB26A9EC7AE3FFC2202170FC60AE9B433A9E2322C_inline((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: PlayerInputActions/Player_mapActions
IL2CPP_EXTERN_C void Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132_marshal_pinvoke(const Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132& unmarshaled, Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'Player_mapActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132_marshal_pinvoke_back(const Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132_marshaled_pinvoke& marshaled, Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'Player_mapActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: PlayerInputActions/Player_mapActions
IL2CPP_EXTERN_C void Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132_marshal_pinvoke_cleanup(Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: PlayerInputActions/Player_mapActions
IL2CPP_EXTERN_C void Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132_marshal_com(const Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132& unmarshaled, Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132_marshaled_com& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'Player_mapActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132_marshal_com_back(const Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132_marshaled_com& marshaled, Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'Player_mapActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: PlayerInputActions/Player_mapActions
IL2CPP_EXTERN_C void Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132_marshal_com_cleanup(Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132_marshaled_com& marshaled)
{
}
// System.Void PlayerInputActions/Player_mapActions::.ctor(PlayerInputActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_mapActions__ctor_mB26A9EC7AE3FFC2202170FC60AE9B433A9E2322C (Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* __this, PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* ___wrapper0, const RuntimeMethod* method) 
{
	{
		// public Player_mapActions(@PlayerInputActions wrapper) { m_Wrapper = wrapper; }
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_0 = ___wrapper0;
		__this->___m_Wrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Wrapper_0), (void*)L_0);
		// public Player_mapActions(@PlayerInputActions wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_EXTERN_C  void Player_mapActions__ctor_mB26A9EC7AE3FFC2202170FC60AE9B433A9E2322C_AdjustorThunk (RuntimeObject* __this, PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* ___wrapper0, const RuntimeMethod* method)
{
	Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132*>(__this + _offset);
	Player_mapActions__ctor_mB26A9EC7AE3FFC2202170FC60AE9B433A9E2322C_inline(_thisAdjusted, ___wrapper0, method);
}
// UnityEngine.InputSystem.InputAction PlayerInputActions/Player_mapActions::get_strafe_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* Player_mapActions_get_strafe_left_m88C14FD359401CE735E20FFCBB221F63DEE28F6C (Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @strafe_left => m_Wrapper.m_player_map_strafe_left;
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_0 = __this->___m_Wrapper_0;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_player_map_strafe_left_3;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* Player_mapActions_get_strafe_left_m88C14FD359401CE735E20FFCBB221F63DEE28F6C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = Player_mapActions_get_strafe_left_m88C14FD359401CE735E20FFCBB221F63DEE28F6C(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction PlayerInputActions/Player_mapActions::get_strafe_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* Player_mapActions_get_strafe_right_mA5A446A75B0EDF80021B527184EF08225D68FF90 (Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @strafe_right => m_Wrapper.m_player_map_strafe_right;
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_0 = __this->___m_Wrapper_0;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_player_map_strafe_right_4;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* Player_mapActions_get_strafe_right_mA5A446A75B0EDF80021B527184EF08225D68FF90_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = Player_mapActions_get_strafe_right_mA5A446A75B0EDF80021B527184EF08225D68FF90(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction PlayerInputActions/Player_mapActions::get_jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* Player_mapActions_get_jump_m9FD9F2BC41995097114B036E055282905628E401 (Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @jump => m_Wrapper.m_player_map_jump;
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_0 = __this->___m_Wrapper_0;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_player_map_jump_5;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* Player_mapActions_get_jump_m9FD9F2BC41995097114B036E055282905628E401_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = Player_mapActions_get_jump_m9FD9F2BC41995097114B036E055282905628E401(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction PlayerInputActions/Player_mapActions::get_roll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* Player_mapActions_get_roll_m4738EC49E50E19EB374204D3084EFF26E7BD7BDF (Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @roll => m_Wrapper.m_player_map_roll;
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_0 = __this->___m_Wrapper_0;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_player_map_roll_6;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* Player_mapActions_get_roll_m4738EC49E50E19EB374204D3084EFF26E7BD7BDF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = Player_mapActions_get_roll_m4738EC49E50E19EB374204D3084EFF26E7BD7BDF(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap PlayerInputActions/Player_mapActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* Player_mapActions_Get_m55CF5855C1CA0EAD3C826C94A255CE12ED33A268 (Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionMap Get() { return m_Wrapper.m_player_map; }
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_0 = __this->___m_Wrapper_0;
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_1 = L_0->___m_player_map_1;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* Player_mapActions_Get_m55CF5855C1CA0EAD3C826C94A255CE12ED33A268_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132*>(__this + _offset);
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* _returnValue;
	_returnValue = Player_mapActions_Get_m55CF5855C1CA0EAD3C826C94A255CE12ED33A268(_thisAdjusted, method);
	return _returnValue;
}
// System.Void PlayerInputActions/Player_mapActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_mapActions_Enable_m04C241CCC20BE36CC1A17649911939C46BD4513E (Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* __this, const RuntimeMethod* method) 
{
	{
		// public void Enable() { Get().Enable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = Player_mapActions_Get_m55CF5855C1CA0EAD3C826C94A255CE12ED33A268(__this, NULL);
		InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6(L_0, NULL);
		// public void Enable() { Get().Enable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void Player_mapActions_Enable_m04C241CCC20BE36CC1A17649911939C46BD4513E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132*>(__this + _offset);
	Player_mapActions_Enable_m04C241CCC20BE36CC1A17649911939C46BD4513E(_thisAdjusted, method);
}
// System.Void PlayerInputActions/Player_mapActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_mapActions_Disable_m2D134EEFEE9503B6C61A74916950329E653C58D3 (Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* __this, const RuntimeMethod* method) 
{
	{
		// public void Disable() { Get().Disable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = Player_mapActions_Get_m55CF5855C1CA0EAD3C826C94A255CE12ED33A268(__this, NULL);
		InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C(L_0, NULL);
		// public void Disable() { Get().Disable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void Player_mapActions_Disable_m2D134EEFEE9503B6C61A74916950329E653C58D3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132*>(__this + _offset);
	Player_mapActions_Disable_m2D134EEFEE9503B6C61A74916950329E653C58D3(_thisAdjusted, method);
}
// System.Boolean PlayerInputActions/Player_mapActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Player_mapActions_get_enabled_mD94A2585E9CB9734560E3AC97176AC957C45D834 (Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* __this, const RuntimeMethod* method) 
{
	{
		// public bool enabled => Get().enabled;
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = Player_mapActions_Get_m55CF5855C1CA0EAD3C826C94A255CE12ED33A268(__this, NULL);
		bool L_1;
		L_1 = InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool Player_mapActions_get_enabled_mD94A2585E9CB9734560E3AC97176AC957C45D834_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132*>(__this + _offset);
	bool _returnValue;
	_returnValue = Player_mapActions_get_enabled_mD94A2585E9CB9734560E3AC97176AC957C45D834(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap PlayerInputActions/Player_mapActions::op_Implicit(PlayerInputActions/Player_mapActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* Player_mapActions_op_Implicit_m5E84282B5AE31E8C7956264BBA136263B9B4042D (Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132 ___set0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator InputActionMap(Player_mapActions set) { return set.Get(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = Player_mapActions_Get_m55CF5855C1CA0EAD3C826C94A255CE12ED33A268((&___set0), NULL);
		return L_0;
	}
}
// System.Void PlayerInputActions/Player_mapActions::SetCallbacks(PlayerInputActions/IPlayer_mapActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_mapActions_SetCallbacks_m42079C0CAA6B14C4FA778B95F9B383F90044A518 (Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Wrapper.m_Player_mapActionsCallbackInterface != null)
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_0 = __this->___m_Wrapper_0;
		RuntimeObject* L_1 = L_0->___m_Player_mapActionsCallbackInterface_2;
		if (!L_1)
		{
			goto IL_01a8;
		}
	}
	{
		// @strafe_left.started -= m_Wrapper.m_Player_mapActionsCallbackInterface.OnStrafe_left;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = Player_mapActions_get_strafe_left_m88C14FD359401CE735E20FFCBB221F63DEE28F6C(__this, NULL);
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_3 = __this->___m_Wrapper_0;
		RuntimeObject* L_4 = L_3->___m_Player_mapActionsCallbackInterface_2;
		RuntimeObject* L_5 = L_4;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_6 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_6, L_5, (intptr_t)((void*)GetInterfaceMethodInfo(L_5, 0, IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var)), NULL);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_2, L_6, NULL);
		// @strafe_left.performed -= m_Wrapper.m_Player_mapActionsCallbackInterface.OnStrafe_left;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7;
		L_7 = Player_mapActions_get_strafe_left_m88C14FD359401CE735E20FFCBB221F63DEE28F6C(__this, NULL);
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_8 = __this->___m_Wrapper_0;
		RuntimeObject* L_9 = L_8->___m_Player_mapActionsCallbackInterface_2;
		RuntimeObject* L_10 = L_9;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_11 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_11, L_10, (intptr_t)((void*)GetInterfaceMethodInfo(L_10, 0, IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var)), NULL);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_7, L_11, NULL);
		// @strafe_left.canceled -= m_Wrapper.m_Player_mapActionsCallbackInterface.OnStrafe_left;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = Player_mapActions_get_strafe_left_m88C14FD359401CE735E20FFCBB221F63DEE28F6C(__this, NULL);
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_13 = __this->___m_Wrapper_0;
		RuntimeObject* L_14 = L_13->___m_Player_mapActionsCallbackInterface_2;
		RuntimeObject* L_15 = L_14;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_16 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_16, L_15, (intptr_t)((void*)GetInterfaceMethodInfo(L_15, 0, IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var)), NULL);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_12, L_16, NULL);
		// @strafe_right.started -= m_Wrapper.m_Player_mapActionsCallbackInterface.OnStrafe_right;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_17;
		L_17 = Player_mapActions_get_strafe_right_mA5A446A75B0EDF80021B527184EF08225D68FF90(__this, NULL);
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_18 = __this->___m_Wrapper_0;
		RuntimeObject* L_19 = L_18->___m_Player_mapActionsCallbackInterface_2;
		RuntimeObject* L_20 = L_19;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_21 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_21, L_20, (intptr_t)((void*)GetInterfaceMethodInfo(L_20, 1, IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var)), NULL);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_17, L_21, NULL);
		// @strafe_right.performed -= m_Wrapper.m_Player_mapActionsCallbackInterface.OnStrafe_right;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_22;
		L_22 = Player_mapActions_get_strafe_right_mA5A446A75B0EDF80021B527184EF08225D68FF90(__this, NULL);
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_23 = __this->___m_Wrapper_0;
		RuntimeObject* L_24 = L_23->___m_Player_mapActionsCallbackInterface_2;
		RuntimeObject* L_25 = L_24;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_26 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_26, L_25, (intptr_t)((void*)GetInterfaceMethodInfo(L_25, 1, IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var)), NULL);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_22, L_26, NULL);
		// @strafe_right.canceled -= m_Wrapper.m_Player_mapActionsCallbackInterface.OnStrafe_right;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_27;
		L_27 = Player_mapActions_get_strafe_right_mA5A446A75B0EDF80021B527184EF08225D68FF90(__this, NULL);
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_28 = __this->___m_Wrapper_0;
		RuntimeObject* L_29 = L_28->___m_Player_mapActionsCallbackInterface_2;
		RuntimeObject* L_30 = L_29;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_31 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_31, L_30, (intptr_t)((void*)GetInterfaceMethodInfo(L_30, 1, IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var)), NULL);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_27, L_31, NULL);
		// @jump.started -= m_Wrapper.m_Player_mapActionsCallbackInterface.OnJump;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_32;
		L_32 = Player_mapActions_get_jump_m9FD9F2BC41995097114B036E055282905628E401(__this, NULL);
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_33 = __this->___m_Wrapper_0;
		RuntimeObject* L_34 = L_33->___m_Player_mapActionsCallbackInterface_2;
		RuntimeObject* L_35 = L_34;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_36 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_36, L_35, (intptr_t)((void*)GetInterfaceMethodInfo(L_35, 2, IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var)), NULL);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_32, L_36, NULL);
		// @jump.performed -= m_Wrapper.m_Player_mapActionsCallbackInterface.OnJump;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_37;
		L_37 = Player_mapActions_get_jump_m9FD9F2BC41995097114B036E055282905628E401(__this, NULL);
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_38 = __this->___m_Wrapper_0;
		RuntimeObject* L_39 = L_38->___m_Player_mapActionsCallbackInterface_2;
		RuntimeObject* L_40 = L_39;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_41 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_41, L_40, (intptr_t)((void*)GetInterfaceMethodInfo(L_40, 2, IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var)), NULL);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_37, L_41, NULL);
		// @jump.canceled -= m_Wrapper.m_Player_mapActionsCallbackInterface.OnJump;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_42;
		L_42 = Player_mapActions_get_jump_m9FD9F2BC41995097114B036E055282905628E401(__this, NULL);
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_43 = __this->___m_Wrapper_0;
		RuntimeObject* L_44 = L_43->___m_Player_mapActionsCallbackInterface_2;
		RuntimeObject* L_45 = L_44;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_46 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_46, L_45, (intptr_t)((void*)GetInterfaceMethodInfo(L_45, 2, IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var)), NULL);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_42, L_46, NULL);
		// @roll.started -= m_Wrapper.m_Player_mapActionsCallbackInterface.OnRoll;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_47;
		L_47 = Player_mapActions_get_roll_m4738EC49E50E19EB374204D3084EFF26E7BD7BDF(__this, NULL);
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_48 = __this->___m_Wrapper_0;
		RuntimeObject* L_49 = L_48->___m_Player_mapActionsCallbackInterface_2;
		RuntimeObject* L_50 = L_49;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_51 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_51, L_50, (intptr_t)((void*)GetInterfaceMethodInfo(L_50, 3, IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var)), NULL);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_47, L_51, NULL);
		// @roll.performed -= m_Wrapper.m_Player_mapActionsCallbackInterface.OnRoll;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_52;
		L_52 = Player_mapActions_get_roll_m4738EC49E50E19EB374204D3084EFF26E7BD7BDF(__this, NULL);
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_53 = __this->___m_Wrapper_0;
		RuntimeObject* L_54 = L_53->___m_Player_mapActionsCallbackInterface_2;
		RuntimeObject* L_55 = L_54;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_56 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_56, L_55, (intptr_t)((void*)GetInterfaceMethodInfo(L_55, 3, IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var)), NULL);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_52, L_56, NULL);
		// @roll.canceled -= m_Wrapper.m_Player_mapActionsCallbackInterface.OnRoll;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_57;
		L_57 = Player_mapActions_get_roll_m4738EC49E50E19EB374204D3084EFF26E7BD7BDF(__this, NULL);
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_58 = __this->___m_Wrapper_0;
		RuntimeObject* L_59 = L_58->___m_Player_mapActionsCallbackInterface_2;
		RuntimeObject* L_60 = L_59;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_61 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_61, L_60, (intptr_t)((void*)GetInterfaceMethodInfo(L_60, 3, IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var)), NULL);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_57, L_61, NULL);
	}

IL_01a8:
	{
		// m_Wrapper.m_Player_mapActionsCallbackInterface = instance;
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_62 = __this->___m_Wrapper_0;
		RuntimeObject* L_63 = ___instance0;
		L_62->___m_Player_mapActionsCallbackInterface_2 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&L_62->___m_Player_mapActionsCallbackInterface_2), (void*)L_63);
		// if (instance != null)
		RuntimeObject* L_64 = ___instance0;
		if (!L_64)
		{
			goto IL_02da;
		}
	}
	{
		// @strafe_left.started += instance.OnStrafe_left;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_65;
		L_65 = Player_mapActions_get_strafe_left_m88C14FD359401CE735E20FFCBB221F63DEE28F6C(__this, NULL);
		RuntimeObject* L_66 = ___instance0;
		RuntimeObject* L_67 = L_66;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_68 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_68, L_67, (intptr_t)((void*)GetInterfaceMethodInfo(L_67, 0, IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var)), NULL);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_65, L_68, NULL);
		// @strafe_left.performed += instance.OnStrafe_left;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_69;
		L_69 = Player_mapActions_get_strafe_left_m88C14FD359401CE735E20FFCBB221F63DEE28F6C(__this, NULL);
		RuntimeObject* L_70 = ___instance0;
		RuntimeObject* L_71 = L_70;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_72 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_72, L_71, (intptr_t)((void*)GetInterfaceMethodInfo(L_71, 0, IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var)), NULL);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_69, L_72, NULL);
		// @strafe_left.canceled += instance.OnStrafe_left;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_73;
		L_73 = Player_mapActions_get_strafe_left_m88C14FD359401CE735E20FFCBB221F63DEE28F6C(__this, NULL);
		RuntimeObject* L_74 = ___instance0;
		RuntimeObject* L_75 = L_74;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_76 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_76, L_75, (intptr_t)((void*)GetInterfaceMethodInfo(L_75, 0, IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var)), NULL);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_73, L_76, NULL);
		// @strafe_right.started += instance.OnStrafe_right;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_77;
		L_77 = Player_mapActions_get_strafe_right_mA5A446A75B0EDF80021B527184EF08225D68FF90(__this, NULL);
		RuntimeObject* L_78 = ___instance0;
		RuntimeObject* L_79 = L_78;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_80 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_80, L_79, (intptr_t)((void*)GetInterfaceMethodInfo(L_79, 1, IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var)), NULL);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_77, L_80, NULL);
		// @strafe_right.performed += instance.OnStrafe_right;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_81;
		L_81 = Player_mapActions_get_strafe_right_mA5A446A75B0EDF80021B527184EF08225D68FF90(__this, NULL);
		RuntimeObject* L_82 = ___instance0;
		RuntimeObject* L_83 = L_82;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_84 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_84, L_83, (intptr_t)((void*)GetInterfaceMethodInfo(L_83, 1, IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var)), NULL);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_81, L_84, NULL);
		// @strafe_right.canceled += instance.OnStrafe_right;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_85;
		L_85 = Player_mapActions_get_strafe_right_mA5A446A75B0EDF80021B527184EF08225D68FF90(__this, NULL);
		RuntimeObject* L_86 = ___instance0;
		RuntimeObject* L_87 = L_86;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_88 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_88, L_87, (intptr_t)((void*)GetInterfaceMethodInfo(L_87, 1, IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var)), NULL);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_85, L_88, NULL);
		// @jump.started += instance.OnJump;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_89;
		L_89 = Player_mapActions_get_jump_m9FD9F2BC41995097114B036E055282905628E401(__this, NULL);
		RuntimeObject* L_90 = ___instance0;
		RuntimeObject* L_91 = L_90;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_92 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_92, L_91, (intptr_t)((void*)GetInterfaceMethodInfo(L_91, 2, IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var)), NULL);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_89, L_92, NULL);
		// @jump.performed += instance.OnJump;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_93;
		L_93 = Player_mapActions_get_jump_m9FD9F2BC41995097114B036E055282905628E401(__this, NULL);
		RuntimeObject* L_94 = ___instance0;
		RuntimeObject* L_95 = L_94;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_96 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_96, L_95, (intptr_t)((void*)GetInterfaceMethodInfo(L_95, 2, IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var)), NULL);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_93, L_96, NULL);
		// @jump.canceled += instance.OnJump;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_97;
		L_97 = Player_mapActions_get_jump_m9FD9F2BC41995097114B036E055282905628E401(__this, NULL);
		RuntimeObject* L_98 = ___instance0;
		RuntimeObject* L_99 = L_98;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_100 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_100, L_99, (intptr_t)((void*)GetInterfaceMethodInfo(L_99, 2, IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var)), NULL);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_97, L_100, NULL);
		// @roll.started += instance.OnRoll;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_101;
		L_101 = Player_mapActions_get_roll_m4738EC49E50E19EB374204D3084EFF26E7BD7BDF(__this, NULL);
		RuntimeObject* L_102 = ___instance0;
		RuntimeObject* L_103 = L_102;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_104 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_104, L_103, (intptr_t)((void*)GetInterfaceMethodInfo(L_103, 3, IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var)), NULL);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_101, L_104, NULL);
		// @roll.performed += instance.OnRoll;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_105;
		L_105 = Player_mapActions_get_roll_m4738EC49E50E19EB374204D3084EFF26E7BD7BDF(__this, NULL);
		RuntimeObject* L_106 = ___instance0;
		RuntimeObject* L_107 = L_106;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_108 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_108, L_107, (intptr_t)((void*)GetInterfaceMethodInfo(L_107, 3, IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var)), NULL);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_105, L_108, NULL);
		// @roll.canceled += instance.OnRoll;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_109;
		L_109 = Player_mapActions_get_roll_m4738EC49E50E19EB374204D3084EFF26E7BD7BDF(__this, NULL);
		RuntimeObject* L_110 = ___instance0;
		RuntimeObject* L_111 = L_110;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_112 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_112, L_111, (intptr_t)((void*)GetInterfaceMethodInfo(L_111, 3, IPlayer_mapActions_tD0F491F48A9353BFAF8F3AB0C997B6B38999E045_il2cpp_TypeInfo_var)), NULL);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_109, L_112, NULL);
	}

IL_02da:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Player_mapActions_SetCallbacks_m42079C0CAA6B14C4FA778B95F9B383F90044A518_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132*>(__this + _offset);
	Player_mapActions_SetCallbacks_m42079C0CAA6B14C4FA778B95F9B383F90044A518(_thisAdjusted, ___instance0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Chunk::GenerateItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk_GenerateItems_mE3E3E793B2B827382A6424223611EBDBD35BFE8E (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(coinSpawner != null && coinPref != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___coinSpawner_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___coinPref_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// Instantiate(coinPref, coinSpawner.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___coinPref_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___coinSpawner_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_4, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Chunk::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chunk__ctor_m15FE9E61CAE19C4DE60C2D86C3FF39F4FE22205D (Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChunkData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkData__ctor_m4558E14E6DB611F6F16024040C8B649FA3BC708E (ChunkData_tD70FCCE07C32F0D97ACFAA3EEB1331F0C7FBF9A5* __this, const RuntimeMethod* method) 
{
	{
		// public float length = 16;
		__this->___length_4 = (16.0f);
		// public ChunkType chucnkType = ChunkType.Road;
		__this->___chucnkType_6 = 1;
		// public ChunkPosition chunkPos = ChunkPosition.InBetween;
		__this->___chunkPos_7 = 1;
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChunkManager::Recycle(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkManager_Recycle_m869E4663556966DA33ABD8A1A26A86DA9D810A9D (ChunkManager_tF9FAD853900B822D5DD7BE8BE38790D4966D71FF* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___chunk0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ChunkManager::GenerateInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkManager_GenerateInit_m12F0358C58A79A5490FAC0588493F3FD867473AA (ChunkManager_tF9FAD853900B822D5DD7BE8BE38790D4966D71FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisChunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060_mD6C9C746C2686E4AD5C82E179B336F6C6AC1E05A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* V_1 = NULL;
	{
		// for (int i = 0; i < initialSize; i++){
		V_0 = 0;
		goto IL_0064;
	}

IL_0004:
	{
		// GameObject newChunk = Instantiate(chunksData[Random.Range(0, chunksData.Length)].chunkPrefab, new Vector3(0, 0, i * 16),
		//     Quaternion.Euler(0, 180, 0));
		ChunkDataU5BU5D_tA76F9BD9BC5B615AB48603578173947803FA6CA4* L_0 = __this->___chunksData_4;
		ChunkDataU5BU5D_tA76F9BD9BC5B615AB48603578173947803FA6CA4* L_1 = __this->___chunksData_4;
		int32_t L_2;
		L_2 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		int32_t L_3 = L_2;
		ChunkData_tD70FCCE07C32F0D97ACFAA3EEB1331F0C7FBF9A5* L_4 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___chunkPrefab_5;
		int32_t L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (0.0f), (0.0f), ((float)((int32_t)il2cpp_codegen_multiply(L_6, ((int32_t)16)))), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (180.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_5, L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Chunk chcom = newChunk.GetComponent<Chunk>();
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_10;
		L_10 = GameObject_GetComponent_TisChunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060_mD6C9C746C2686E4AD5C82E179B336F6C6AC1E05A(L_9, GameObject_GetComponent_TisChunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060_mD6C9C746C2686E4AD5C82E179B336F6C6AC1E05A_RuntimeMethod_var);
		V_1 = L_10;
		// if (chcom != null){
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_11 = V_1;
		bool L_12;
		L_12 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0060;
		}
	}
	{
		// chcom.GenerateItems();
		Chunk_t8FF8505EFEA0A2C6168F345435D61B26CFCE0060* L_13 = V_1;
		Chunk_GenerateItems_mE3E3E793B2B827382A6424223611EBDBD35BFE8E(L_13, NULL);
	}

IL_0060:
	{
		// for (int i = 0; i < initialSize; i++){
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0064:
	{
		// for (int i = 0; i < initialSize; i++){
		int32_t L_15 = V_0;
		int32_t L_16 = __this->___initialSize_6;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ChunkManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkManager_Start_mD83AC580CB013640D2F7D8495A819C0A0EC211AD (ChunkManager_tF9FAD853900B822D5DD7BE8BE38790D4966D71FF* __this, const RuntimeMethod* method) 
{
	{
		// GenerateInit();
		ChunkManager_GenerateInit_m12F0358C58A79A5490FAC0588493F3FD867473AA(__this, NULL);
		// }
		return;
	}
}
// System.Void ChunkManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkManager_Update_m64873090934E7F099423CAB3463AC35B37B0E114 (ChunkManager_tF9FAD853900B822D5DD7BE8BE38790D4966D71FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BE1DDC68C8E87C5019BD05CA1538ADF1AA4A618);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.T)){
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)116), NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.Log("T PRESSED");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral9BE1DDC68C8E87C5019BD05CA1538ADF1AA4A618, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void ChunkManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkManager__ctor_mC07B77497E7A1F9803B5F1514D0D87E0557BDF6A (ChunkManager_tF9FAD853900B822D5DD7BE8BE38790D4966D71FF* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] int initialSize = 10;
		__this->___initialSize_6 = ((int32_t)10);
		// [SerializeField] Vector3 spawnOrig = new Vector3(0, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___spawnOrig_7 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Coin::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Coin_Spawn_mBAB1AAFFF297D67563201470F5CAD21B8303E08A (Coin_t6EC3724A41D53D737B499E377089217F0190C268* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Coin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Coin__ctor_mFEAAC42C1DAABB5CCCF4B39FCDBC5D0B0B8A183D (Coin_t6EC3724A41D53D737B499E377089217F0190C268* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void IActivable::Activation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IActivable_Activation_mB2074C0D324183006F6E864773A6FD326C27173E (RuntimeObject* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCDA67E47C13443A91ACB908325DBA8E8B9249EA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("IActivable: IActivable Activation has ran");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralBCDA67E47C13443A91ACB908325DBA8E8B9249EA, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ObjectMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectMovement_Update_m4BE5EEE750307FFF18AAFF8FE56BE8E2DD3C3560 (ObjectMovement_tCA9B1EB3AE0A2352E5307DB2BA8F9CB76DCD220A* __this, const RuntimeMethod* method) 
{
	{
		// transform.Translate(moveDir * speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___moveDir_5;
		float L_2 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, L_4, NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void ObjectMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectMovement__ctor_m935A1F16EBBB7326A25631454FEFE9558C38FD29 (ObjectMovement_tCA9B1EB3AE0A2352E5307DB2BA8F9CB76DCD220A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OriginReset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OriginReset__ctor_mB8D4B18A84F270777867DEBE58B90F3E60786240 (OriginReset_t3499F564E9735E2AD6754A98D566F336E2F27C5F* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float threshold = 100;
		__this->___threshold_4 = (100.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PathCorner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathCorner_Start_mED115EBB603F4581D9D6A058FB2B836085DC02AC (PathCorner_tA208FA7E1C6F83DD2A8B7D127319474FB48B2A0C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PathCorner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathCorner_Update_m6B5251E9E8EB39265E05339FE617DBB8966E4C53 (PathCorner_tA208FA7E1C6F83DD2A8B7D127319474FB48B2A0C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PathCorner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathCorner__ctor_m1DE7C72EC0E1F980E7B2B387A7B5186C43F7EBAC (PathCorner_tA208FA7E1C6F83DD2A8B7D127319474FB48B2A0C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Awake_m7E8376225AEB5B44C88D56C73B36BD3E3F09CC1F (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_Jump_m2EBDFB53E633E5D9F391795AF14A8A8ADA7C2C83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_Roll_m5451ABC26EA6422B96C2A51DAF87F8A97AD1AB3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_StrafeLeft_mA5D794DA0D1BAEDD9C9508A2928ED0A68D872B9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_StrafeRight_mEEE51D0B57136A0C154A7AEA794EDE2F4AD43FFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// playerRigidbody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___playerRigidbody_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerRigidbody_4), (void*)L_0);
		// PlayerInputActions playerInputActions = new PlayerInputActions();
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_1 = (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694*)il2cpp_codegen_object_new(PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694_il2cpp_TypeInfo_var);
		PlayerInputActions__ctor_m3007C78241520148B12C773C76D25024D9B20E3A(L_1, NULL);
		// playerInputActions.player_map.Enable();
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_2 = L_1;
		Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132 L_3;
		L_3 = PlayerInputActions_get_player_map_mAA6368E818A1467EDE5C555F8D8BC4754C39973C(L_2, NULL);
		V_0 = L_3;
		Player_mapActions_Enable_m04C241CCC20BE36CC1A17649911939C46BD4513E((&V_0), NULL);
		// playerInputActions.player_map.jump.performed += Jump;
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_4 = L_2;
		Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132 L_5;
		L_5 = PlayerInputActions_get_player_map_mAA6368E818A1467EDE5C555F8D8BC4754C39973C(L_4, NULL);
		V_0 = L_5;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = Player_mapActions_get_jump_m9FD9F2BC41995097114B036E055282905628E401((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_7 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_7, __this, (intptr_t)((void*)PlayerMovement_Jump_m2EBDFB53E633E5D9F391795AF14A8A8ADA7C2C83_RuntimeMethod_var), NULL);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_6, L_7, NULL);
		// playerInputActions.player_map.strafe_right.performed += StrafeRight;
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_8 = L_4;
		Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132 L_9;
		L_9 = PlayerInputActions_get_player_map_mAA6368E818A1467EDE5C555F8D8BC4754C39973C(L_8, NULL);
		V_0 = L_9;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_10;
		L_10 = Player_mapActions_get_strafe_right_mA5A446A75B0EDF80021B527184EF08225D68FF90((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_11 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_11, __this, (intptr_t)((void*)PlayerMovement_StrafeRight_mEEE51D0B57136A0C154A7AEA794EDE2F4AD43FFA_RuntimeMethod_var), NULL);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_10, L_11, NULL);
		// playerInputActions.player_map.strafe_left.performed += StrafeLeft;
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_12 = L_8;
		Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132 L_13;
		L_13 = PlayerInputActions_get_player_map_mAA6368E818A1467EDE5C555F8D8BC4754C39973C(L_12, NULL);
		V_0 = L_13;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_14;
		L_14 = Player_mapActions_get_strafe_left_m88C14FD359401CE735E20FFCBB221F63DEE28F6C((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_15 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_15, __this, (intptr_t)((void*)PlayerMovement_StrafeLeft_mA5D794DA0D1BAEDD9C9508A2928ED0A68D872B9F_RuntimeMethod_var), NULL);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_14, L_15, NULL);
		// playerInputActions.player_map.roll.performed += Roll;
		Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132 L_16;
		L_16 = PlayerInputActions_get_player_map_mAA6368E818A1467EDE5C555F8D8BC4754C39973C(L_12, NULL);
		V_0 = L_16;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_17;
		L_17 = Player_mapActions_get_roll_m4738EC49E50E19EB374204D3084EFF26E7BD7BDF((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_18 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_18, __this, (intptr_t)((void*)PlayerMovement_Roll_m5451ABC26EA6422B96C2A51DAF87F8A97AD1AB3E_RuntimeMethod_var), NULL);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_17, L_18, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerMovement::SwitchTrack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerMovement_SwitchTrack_m0FDCCAF15F0F4273C8FED04E8F8DF82AA34A4AF4 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSwitchTrackU3Ed__4_t936D78E0D7D66882160AFE1FC3F858A057DFF9F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSwitchTrackU3Ed__4_t936D78E0D7D66882160AFE1FC3F858A057DFF9F8* L_0 = (U3CSwitchTrackU3Ed__4_t936D78E0D7D66882160AFE1FC3F858A057DFF9F8*)il2cpp_codegen_object_new(U3CSwitchTrackU3Ed__4_t936D78E0D7D66882160AFE1FC3F858A057DFF9F8_il2cpp_TypeInfo_var);
		U3CSwitchTrackU3Ed__4__ctor_mB43ED9AFA49A332B117DBB4BE80B5D8700B7F19D(L_0, 0, NULL);
		U3CSwitchTrackU3Ed__4_t936D78E0D7D66882160AFE1FC3F858A057DFF9F8* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PlayerMovement::StrafeLeft(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_StrafeLeft_mA5D794DA0D1BAEDD9C9508A2928ED0A68D872B9F (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE7CAC817C9B4CCD0F8C2758899406E608287759);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("STRAFE LEFT");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralEE7CAC817C9B4CCD0F8C2758899406E608287759, NULL);
		// transform.position -= new Vector3(trackDist, 0f, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = __this->___trackDist_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_2, L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_5, NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::StrafeRight(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_StrafeRight_mEEE51D0B57136A0C154A7AEA794EDE2F4AD43FFA (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29F00C03FE4B93D94D5E3EEC5DE6A20983CD559E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("STRAFE RIGHT");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral29F00C03FE4B93D94D5E3EEC5DE6A20983CD559E, NULL);
		// transform.position += new Vector3(trackDist, 0f, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = __this->___trackDist_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_2, L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_5, NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::Jump(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Jump_m2EBDFB53E633E5D9F391795AF14A8A8ADA7C2C83 (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// playerRigidbody.AddForce(Vector3.up * 5f, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___playerRigidbody_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (5.0f), NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_0, L_2, 1, NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::Roll(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Roll_m5451ABC26EA6422B96C2A51DAF87F8A97AD1AB3E (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral548CADC991E2CDF5E95C25B8B78E5D4002D130B4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("ROLL");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral548CADC991E2CDF5E95C25B8B78E5D4002D130B4, NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mB37559C5B0638161878D20E00B7C672FC38BBBAA (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float trackDist = 2f;
		__this->___trackDist_5 = (2.0f);
		// [SerializeField] float movementSpeed = 1f;
		__this->___movementSpeed_6 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerMovement/<SwitchTrack>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchTrackU3Ed__4__ctor_mB43ED9AFA49A332B117DBB4BE80B5D8700B7F19D (U3CSwitchTrackU3Ed__4_t936D78E0D7D66882160AFE1FC3F858A057DFF9F8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerMovement/<SwitchTrack>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchTrackU3Ed__4_System_IDisposable_Dispose_mEA0F64B10CE2195D750C3785DCAA362F86CB6CB0 (U3CSwitchTrackU3Ed__4_t936D78E0D7D66882160AFE1FC3F858A057DFF9F8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerMovement/<SwitchTrack>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSwitchTrackU3Ed__4_MoveNext_m30C621F1D312759C4B5145C039C2E6017CBE4384 (U3CSwitchTrackU3Ed__4_t936D78E0D7D66882160AFE1FC3F858A057DFF9F8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0061;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Vector3 startPos = transform.position;
		PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* L_4 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		// Vector3 endPos = new Vector3(transform.position.x + trackDist, 0f, 0f);
		PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* L_7 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___x_2;
		PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* L_11 = V_1;
		float L_12 = L_11->___trackDist_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), ((float)il2cpp_codegen_add(L_10, L_12)), (0.0f), (0.0f), /*hidden argument*/NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0061:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object PlayerMovement/<SwitchTrack>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSwitchTrackU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD4473678A16CDC3597EAA0BB54DE46DBBBB4FA4A (U3CSwitchTrackU3Ed__4_t936D78E0D7D66882160AFE1FC3F858A057DFF9F8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerMovement/<SwitchTrack>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchTrackU3Ed__4_System_Collections_IEnumerator_Reset_mFAB1ED6924FB224E17A21E52B12459C409CC552C (U3CSwitchTrackU3Ed__4_t936D78E0D7D66882160AFE1FC3F858A057DFF9F8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSwitchTrackU3Ed__4_System_Collections_IEnumerator_Reset_mFAB1ED6924FB224E17A21E52B12459C409CC552C_RuntimeMethod_var)));
	}
}
// System.Object PlayerMovement/<SwitchTrack>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSwitchTrackU3Ed__4_System_Collections_IEnumerator_get_Current_mB1DB762AD74B89994BC579E7B25C8DB3B96FF47E (U3CSwitchTrackU3Ed__4_t936D78E0D7D66882160AFE1FC3F858A057DFF9F8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SmoothMover::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothMover_Start_m8C66FD3D870E53891605A30D923B53ABA946F4FC (SmoothMover_tDBFFF780F038F6D3A85F60B77056823E31F06A63* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(strafeMovement());
		RuntimeObject* L_0;
		L_0 = SmoothMover_strafeMovement_m9D495424414AF22B1E967338D083C66C2BAD9AF3(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SmoothMover::strafeMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SmoothMover_strafeMovement_m9D495424414AF22B1E967338D083C66C2BAD9AF3 (SmoothMover_tDBFFF780F038F6D3A85F60B77056823E31F06A63* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CstrafeMovementU3Ed__2_tEBBE72A88306BDC17EF016A5C502025480CEC45F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CstrafeMovementU3Ed__2_tEBBE72A88306BDC17EF016A5C502025480CEC45F* L_0 = (U3CstrafeMovementU3Ed__2_tEBBE72A88306BDC17EF016A5C502025480CEC45F*)il2cpp_codegen_object_new(U3CstrafeMovementU3Ed__2_tEBBE72A88306BDC17EF016A5C502025480CEC45F_il2cpp_TypeInfo_var);
		U3CstrafeMovementU3Ed__2__ctor_m42AC8FF1A32CC35F7A697092DFF482FF00EBFB50(L_0, 0, NULL);
		U3CstrafeMovementU3Ed__2_tEBBE72A88306BDC17EF016A5C502025480CEC45F* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SmoothMover::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmoothMover__ctor_m176338B5951E3C280CBABDA5F44403F79416EF2E (SmoothMover_tDBFFF780F038F6D3A85F60B77056823E31F06A63* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SmoothMover/<strafeMovement>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CstrafeMovementU3Ed__2__ctor_m42AC8FF1A32CC35F7A697092DFF482FF00EBFB50 (U3CstrafeMovementU3Ed__2_tEBBE72A88306BDC17EF016A5C502025480CEC45F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SmoothMover/<strafeMovement>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CstrafeMovementU3Ed__2_System_IDisposable_Dispose_mC8E8760B6C1C02649B88960DFDA308E033FEB3BF (U3CstrafeMovementU3Ed__2_tEBBE72A88306BDC17EF016A5C502025480CEC45F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SmoothMover/<strafeMovement>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CstrafeMovementU3Ed__2_MoveNext_m1A80CE02147E2C4E497E8BB1B5F40CD79D1266F5 (U3CstrafeMovementU3Ed__2_tEBBE72A88306BDC17EF016A5C502025480CEC45F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SmoothMover_tDBFFF780F038F6D3A85F60B77056823E31F06A63* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SmoothMover_tDBFFF780F038F6D3A85F60B77056823E31F06A63* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_008e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float counter = 0f;
		__this->___U3CcounterU3E5__2_3 = (0.0f);
		// float duration = 5f;
		__this->___U3CdurationU3E5__3_4 = (5.0f);
		goto IL_0095;
	}

IL_0036:
	{
		// Debug.Log(counter);
		float L_4 = __this->___U3CcounterU3E5__2_3;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_5);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_6, NULL);
		// counter += Time.deltaTime;
		float L_7 = __this->___U3CcounterU3E5__2_3;
		float L_8;
		L_8 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___U3CcounterU3E5__2_3 = ((float)il2cpp_codegen_add(L_7, L_8));
		// Vector3.MoveTowards(transform.position, destination.position, duration);
		SmoothMover_tDBFFF780F038F6D3A85F60B77056823E31F06A63* L_9 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		SmoothMover_tDBFFF780F038F6D3A85F60B77056823E31F06A63* L_12 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = L_12->___destination_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = __this->___U3CdurationU3E5__3_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline(L_11, L_14, L_15, NULL);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_17 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_17, NULL);
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_008e:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0095:
	{
		// while (counter < duration)
		float L_18 = __this->___U3CcounterU3E5__2_3;
		float L_19 = __this->___U3CdurationU3E5__3_4;
		if ((((float)L_18) < ((float)L_19)))
		{
			goto IL_0036;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object SmoothMover/<strafeMovement>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CstrafeMovementU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m54CD1701F128D33AF3C1119207075DB83C425D72 (U3CstrafeMovementU3Ed__2_tEBBE72A88306BDC17EF016A5C502025480CEC45F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SmoothMover/<strafeMovement>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CstrafeMovementU3Ed__2_System_Collections_IEnumerator_Reset_mEFF0C3053EC1C461660CC2F1E18AF37FA155383E (U3CstrafeMovementU3Ed__2_tEBBE72A88306BDC17EF016A5C502025480CEC45F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CstrafeMovementU3Ed__2_System_Collections_IEnumerator_Reset_mEFF0C3053EC1C461660CC2F1E18AF37FA155383E_RuntimeMethod_var)));
	}
}
// System.Object SmoothMover/<strafeMovement>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CstrafeMovementU3Ed__2_System_Collections_IEnumerator_get_Current_m2530D0592285E5118D62AAD88C77F240155B4208 (U3CstrafeMovementU3Ed__2_tEBBE72A88306BDC17EF016A5C502025480CEC45F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner__ctor_mBF592E8E9B5682687D8C28E73A64BF29B6BF2088 (Spawner_t387EDFC7BADAEFFD3305FD31D1E8DDE8998FCDD7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Target::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Target__ctor_m5524C5EEF36FA6DB1E6B5BFA323B37E68635C216 (Target_t5E0C0864CEA07701AF639C0AFAC19928DB873FC5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TriggerExit::add_OnChunkExited(TriggerExit/ExitAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerExit_add_OnChunkExited_mA1768C0D2835D6DFEF9028B2707F5D715BDA2DF7 (ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerExit_t16AF59B53104B954B55EDDE1FE9AA0B10EC5BCB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* V_0 = NULL;
	ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* V_1 = NULL;
	ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* V_2 = NULL;
	{
		ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* L_0 = ((TriggerExit_t16AF59B53104B954B55EDDE1FE9AA0B10EC5BCB5_StaticFields*)il2cpp_codegen_static_fields_for(TriggerExit_t16AF59B53104B954B55EDDE1FE9AA0B10EC5BCB5_il2cpp_TypeInfo_var))->___OnChunkExited_5;
		V_0 = L_0;
	}

IL_0006:
	{
		ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* L_1 = V_0;
		V_1 = L_1;
		ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* L_2 = V_1;
		ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836*)CastclassSealed((RuntimeObject*)L_4, ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836_il2cpp_TypeInfo_var));
		ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* L_5 = V_2;
		ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* L_6 = V_1;
		ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* L_7;
		L_7 = InterlockedCompareExchangeImpl<ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836*>((&((TriggerExit_t16AF59B53104B954B55EDDE1FE9AA0B10EC5BCB5_StaticFields*)il2cpp_codegen_static_fields_for(TriggerExit_t16AF59B53104B954B55EDDE1FE9AA0B10EC5BCB5_il2cpp_TypeInfo_var))->___OnChunkExited_5), L_5, L_6);
		V_0 = L_7;
		ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* L_8 = V_0;
		ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* L_9 = V_1;
		if ((!(((RuntimeObject*)(ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836*)L_8) == ((RuntimeObject*)(ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void TriggerExit::remove_OnChunkExited(TriggerExit/ExitAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerExit_remove_OnChunkExited_m82D6FC10F94E9AECB831903D3F8A1DCB3247F153 (ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerExit_t16AF59B53104B954B55EDDE1FE9AA0B10EC5BCB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* V_0 = NULL;
	ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* V_1 = NULL;
	ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* V_2 = NULL;
	{
		ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* L_0 = ((TriggerExit_t16AF59B53104B954B55EDDE1FE9AA0B10EC5BCB5_StaticFields*)il2cpp_codegen_static_fields_for(TriggerExit_t16AF59B53104B954B55EDDE1FE9AA0B10EC5BCB5_il2cpp_TypeInfo_var))->___OnChunkExited_5;
		V_0 = L_0;
	}

IL_0006:
	{
		ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* L_1 = V_0;
		V_1 = L_1;
		ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* L_2 = V_1;
		ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836*)CastclassSealed((RuntimeObject*)L_4, ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836_il2cpp_TypeInfo_var));
		ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* L_5 = V_2;
		ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* L_6 = V_1;
		ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* L_7;
		L_7 = InterlockedCompareExchangeImpl<ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836*>((&((TriggerExit_t16AF59B53104B954B55EDDE1FE9AA0B10EC5BCB5_StaticFields*)il2cpp_codegen_static_fields_for(TriggerExit_t16AF59B53104B954B55EDDE1FE9AA0B10EC5BCB5_il2cpp_TypeInfo_var))->___OnChunkExited_5), L_5, L_6);
		V_0 = L_7;
		ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* L_8 = V_0;
		ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* L_9 = V_1;
		if ((!(((RuntimeObject*)(ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836*)L_8) == ((RuntimeObject*)(ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void TriggerExit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerExit__ctor_mD4D152E82EC93576EDC90A4F03BB54E54182D623 (TriggerExit_t16AF59B53104B954B55EDDE1FE9AA0B10EC5BCB5* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float delBefDelete = 5f;
		__this->___delBefDelete_4 = (5.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ExitAction_Invoke_mCD279DBB17A3B9DB970ACCCBB5F5220B69F9365D_Multicast(ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* currentDelegate = reinterpret_cast<ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExitAction_Invoke_mCD279DBB17A3B9DB970ACCCBB5F5220B69F9365D_OpenInst(ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ExitAction_Invoke_mCD279DBB17A3B9DB970ACCCBB5F5220B69F9365D_OpenStatic(ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ExitAction_Invoke_mCD279DBB17A3B9DB970ACCCBB5F5220B69F9365D_OpenStaticInvoker(ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void ExitAction_Invoke_mCD279DBB17A3B9DB970ACCCBB5F5220B69F9365D_ClosedStaticInvoker(ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836 (ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void TriggerExit/ExitAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitAction__ctor_m331BFD1468FEC2CC403157AAA1DBDFBFDD552D29 (ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExitAction_Invoke_mCD279DBB17A3B9DB970ACCCBB5F5220B69F9365D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExitAction_Invoke_mCD279DBB17A3B9DB970ACCCBB5F5220B69F9365D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExitAction_Invoke_mCD279DBB17A3B9DB970ACCCBB5F5220B69F9365D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ExitAction_Invoke_mCD279DBB17A3B9DB970ACCCBB5F5220B69F9365D_Multicast;
}
// System.Void TriggerExit/ExitAction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitAction_Invoke_mCD279DBB17A3B9DB970ACCCBB5F5220B69F9365D (ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TriggerExit/ExitAction::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExitAction_BeginInvoke_m18D3DA73924709FD1EB108DBA95221E21087BADD (ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void TriggerExit/ExitAction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitAction_EndInvoke_m56A593345F27A1EF578BB83ADDA931D5A0C10BEF (ExitAction_t1BA194C87D42D3354C689455C24A1F23EB55C836* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TriggerUniversal::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerUniversal_Start_mA06BEDF1B4514391AA9A6FA62EF8A88EB5D1470F (TriggerUniversal_t7C6795796D3F947A1B35AC235DDB98B5EB2BF82E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TriggerUniversal::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerUniversal_Update_mB37998367E771EC10A8FD6D61EDC32115DD5E814 (TriggerUniversal_t7C6795796D3F947A1B35AC235DDB98B5EB2BF82E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TriggerUniversal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerUniversal__ctor_mADAC2A5AC3042B6AABFB33B8062F8E2D5451FC99 (TriggerUniversal_t7C6795796D3F947A1B35AC235DDB98B5EB2BF82E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MobileDisableAutoSwitchControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileDisableAutoSwitchControls__ctor_mF934985411953E473C075F0C8680F75C118E8FCC (MobileDisableAutoSwitchControls_t0A648011382F1B8F00CD89B26AB30777CCBB9FDA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIVirtualButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OnPointerDown_m1B73262454FA610913DA71F1C0792FD780787D56 (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OutputButtonStateValue(true);
		UIVirtualButton_OutputButtonStateValue_m9052A6A66D9BD3C47C6C5498AD55EB44BBF6BB9F(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OnPointerUp_mD67F7DFB29033E7C84A2F41C31FA3CFDA1174C8B (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OutputButtonStateValue(false);
		UIVirtualButton_OutputButtonStateValue_m9052A6A66D9BD3C47C6C5498AD55EB44BBF6BB9F(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OnPointerClick_m3FEAAD559F8262DC2C8A8E91C85765E327CDB8FC (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OutputButtonClickEvent();
		UIVirtualButton_OutputButtonClickEvent_m7DEA4C619F5DCCE273371E9D7B7760FC05D2DF32(__this, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OutputButtonStateValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonStateValue_m9052A6A66D9BD3C47C6C5498AD55EB44BBF6BB9F (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, bool ___buttonState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonStateOutputEvent.Invoke(buttonState);
		BoolEvent_t81DF6CDEF90C1D7B2256C9310BCCE9D2D078480A* L_0 = __this->___buttonStateOutputEvent_4;
		bool L_1 = ___buttonState0;
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_0, L_1, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OutputButtonClickEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonClickEvent_m7DEA4C619F5DCCE273371E9D7B7760FC05D2DF32 (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, const RuntimeMethod* method) 
{
	{
		// buttonClickOutputEvent.Invoke();
		Event_tCD26C285BECBF219F0B786DA841165B26E05F0B8* L_0 = __this->___buttonClickOutputEvent_5;
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton__ctor_m2CF3E3351F342BF028B0B89C015137EDF0D1B8D7 (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIVirtualButton/BoolEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolEvent__ctor_m42AA0406D1CB826FFD96A45AE4FFD71224A581D7 (BoolEvent_t81DF6CDEF90C1D7B2256C9310BCCE9D2D078480A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934(__this, UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIVirtualButton/Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_mF10E167E7BE71239919769A3884196FF8581BC95 (Event_tCD26C285BECBF219F0B786DA841165B26E05F0B8* __this, const RuntimeMethod* method) 
{
	{
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIVirtualJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_Start_mD2D5C68628D62647018960CBF87655E0D13D845C (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, const RuntimeMethod* method) 
{
	{
		// SetupHandle();
		UIVirtualJoystick_SetupHandle_m31819BE784870B9E54B3A50CA1956106F7BDB0C6(__this, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_SetupHandle_m31819BE784870B9E54B3A50CA1956106F7BDB0C6 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// UpdateHandleRectPosition(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894(__this, L_2, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnPointerDown_m2CADC0629A70249CC581C3DEF77A2D70558DF2B5 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OnDrag(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		UIVirtualJoystick_OnDrag_mB0E6B186E3567D9B4C37860E70DCA0B8DDB746C0(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnDrag_mB0E6B186E3567D9B4C37860E70DCA0B8DDB746C0 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(containerRect, eventData.position, eventData.pressEventCamera, out Vector2 position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___containerRect_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0(L_0, L_2, L_4, (&V_0), NULL);
		// position = ApplySizeDelta(position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = UIVirtualJoystick_ApplySizeDelta_mE401CB7F9B4D1E53DD878FE6D3B34DD98A8BBEDB(__this, L_6, NULL);
		V_0 = L_7;
		// Vector2 clampedPosition = ClampValuesToMagnitude(position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = UIVirtualJoystick_ClampValuesToMagnitude_m136E1691A4EA6C3D59C18AF78CB3C790CCB8346E(__this, L_8, NULL);
		V_1 = L_9;
		// Vector2 outputPosition = ApplyInversionFilter(position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = UIVirtualJoystick_ApplyInversionFilter_m92C48D8832AAFB5BCFA8C5E0E279E44E76EAC03E(__this, L_10, NULL);
		V_2 = L_11;
		// OutputPointerEventValue(outputPosition * magnitudeMultiplier);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_2;
		float L_13 = __this->___magnitudeMultiplier_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_12, L_13, NULL);
		UIVirtualJoystick_OutputPointerEventValue_mB0CA7705B486C5BC44C8AB8D3135B37A19800DB6(__this, L_14, NULL);
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_15, NULL);
		if (!L_16)
		{
			goto IL_0063;
		}
	}
	{
		// UpdateHandleRectPosition(clampedPosition * joystickRange);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_1;
		float L_18 = __this->___joystickRange_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_17, L_18, NULL);
		UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894(__this, L_19, NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnPointerUp_m32B1B96876A1AD9636D7119CF428E8A9441379EA (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OutputPointerEventValue(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		UIVirtualJoystick_OutputPointerEventValue_mB0CA7705B486C5BC44C8AB8D3135B37A19800DB6(__this, L_0, NULL);
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// UpdateHandleRectPosition(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894(__this, L_3, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OutputPointerEventValue_mB0CA7705B486C5BC44C8AB8D3135B37A19800DB6 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pointerPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// joystickOutputEvent.Invoke(pointerPosition);
		Event_tE8BCFAF6D3E261F47341C3DE8E539FF5C42E17C3* L_0 = __this->___joystickOutputEvent_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___pointerPosition0;
		UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0(L_0, L_1, UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newPosition0, const RuntimeMethod* method) 
{
	{
		// handleRect.anchoredPosition = newPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___handleRect_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___newPosition0;
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 UIVirtualJoystick::ApplySizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ApplySizeDelta_mE401CB7F9B4D1E53DD878FE6D3B34DD98A8BBEDB (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float x = (position.x/containerRect.sizeDelta.x) * 2.5f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___position0;
		float L_1 = L_0.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___containerRect_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_2, NULL);
		float L_4 = L_3.___x_0;
		// float y = (position.y/containerRect.sizeDelta.y) * 2.5f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___position0;
		float L_6 = L_5.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___containerRect_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_7, NULL);
		float L_9 = L_8.___y_1;
		V_0 = ((float)il2cpp_codegen_multiply(((float)(L_6/L_9)), (2.5f)));
		// return new Vector2(x, y);
		float L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), ((float)il2cpp_codegen_multiply(((float)(L_1/L_4)), (2.5f))), L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Vector2 UIVirtualJoystick::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ClampValuesToMagnitude_m136E1691A4EA6C3D59C18AF78CB3C790CCB8346E (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	{
		// return Vector2.ClampMagnitude(position, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___position0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_ClampMagnitude_m9F4DC26ED98E682A187F4B2AFEAB49CD376DF7CA_inline(L_0, (1.0f), NULL);
		return L_1;
	}
}
// UnityEngine.Vector2 UIVirtualJoystick::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ApplyInversionFilter_m92C48D8832AAFB5BCFA8C5E0E279E44E76EAC03E (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	{
		// if(invertXOutputValue)
		bool L_0 = __this->___invertXOutputValue_8;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// position.x = InvertValue(position.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___position0;
		float L_2 = L_1.___x_0;
		float L_3;
		L_3 = UIVirtualJoystick_InvertValue_mDEBA6DFF3676133434C5152A72CB2BC125D3D507(__this, L_2, NULL);
		(&___position0)->___x_0 = L_3;
	}

IL_001b:
	{
		// if(invertYOutputValue)
		bool L_4 = __this->___invertYOutputValue_9;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// position.y = InvertValue(position.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___position0;
		float L_6 = L_5.___y_1;
		float L_7;
		L_7 = UIVirtualJoystick_InvertValue_mDEBA6DFF3676133434C5152A72CB2BC125D3D507(__this, L_6, NULL);
		(&___position0)->___y_1 = L_7;
	}

IL_0036:
	{
		// return position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___position0;
		return L_8;
	}
}
// System.Single UIVirtualJoystick::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualJoystick_InvertValue_mDEBA6DFF3676133434C5152A72CB2BC125D3D507 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// return -value;
		float L_0 = ___value0;
		return ((-L_0));
	}
}
// System.Void UIVirtualJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick__ctor_m8526A96A470D77A141CAD1D824FF8DC137B63415 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, const RuntimeMethod* method) 
{
	{
		// public float joystickRange = 50f;
		__this->___joystickRange_6 = (50.0f);
		// public float magnitudeMultiplier = 1f;
		__this->___magnitudeMultiplier_7 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIVirtualJoystick/Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_m89D370961FB9424418084FD7CC1FFF237A4606C5 (Event_tE8BCFAF6D3E261F47341C3DE8E539FF5C42E17C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D(__this, UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIVirtualTouchZone::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_Start_m5178EDEC0B12F59242283DD29F480CFA00D77676 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, const RuntimeMethod* method) 
{
	{
		// SetupHandle();
		UIVirtualTouchZone_SetupHandle_m01D23F4128356836F9A12EAE5445227B24E8A894(__this, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetupHandle_m01D23F4128356836F9A12EAE5445227B24E8A894 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// SetObjectActiveState(handleRect.gameObject, false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___handleRect_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5(__this, L_3, (bool)0, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OnPointerDown_m8FD8081376FC0AEEDDF7F4ADF1B9C6624D358DEE (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(containerRect, eventData.position, eventData.pressEventCamera, out pointerDownPosition);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___containerRect_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___pointerDownPosition_10);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0(L_0, L_2, L_4, L_5, NULL);
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_7, NULL);
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		// SetObjectActiveState(handleRect.gameObject, true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___handleRect_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5(__this, L_10, (bool)1, NULL);
		// UpdateHandleRectPosition(pointerDownPosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___pointerDownPosition_10;
		UIVirtualTouchZone_UpdateHandleRectPosition_m859E4E9C7C76AA057603B2CAA49168BD0D5ACC9E(__this, L_11, NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OnDrag_m018815333D4A45EC9288289C3230B446F86F522F (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(containerRect, eventData.position, eventData.pressEventCamera, out currentPointerPosition);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___containerRect_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___currentPointerPosition_11);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0(L_0, L_2, L_4, L_5, NULL);
		// Vector2 positionDelta = GetDeltaBetweenPositions(pointerDownPosition, currentPointerPosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___pointerDownPosition_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = __this->___currentPointerPosition_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = UIVirtualTouchZone_GetDeltaBetweenPositions_mD54442DDF2D8B643801BDA01791C97D3658E0B5B(__this, L_7, L_8, NULL);
		V_0 = L_9;
		// Vector2 clampedPosition = ClampValuesToMagnitude(positionDelta);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = UIVirtualTouchZone_ClampValuesToMagnitude_mA1619A6CBC35D212940A5D0AC1823AAFDA8FCC95(__this, L_10, NULL);
		V_1 = L_11;
		// Vector2 outputPosition = ApplyInversionFilter(clampedPosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = UIVirtualTouchZone_ApplyInversionFilter_mFE8FF2CCBE01FDAB1BB9FDEC163809B630173823(__this, L_12, NULL);
		V_2 = L_13;
		// OutputPointerEventValue(outputPosition * magnitudeMultiplier);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_2;
		float L_15 = __this->___magnitudeMultiplier_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_14, L_15, NULL);
		UIVirtualTouchZone_OutputPointerEventValue_m53065FA2AD015F665E03E7CAE24703CFE1C4E2AF(__this, L_16, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OnPointerUp_m6572F60C16F6D09A07FDE778F69FD710E06315A5 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pointerDownPosition = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___pointerDownPosition_10 = L_0;
		// currentPointerPosition = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___currentPointerPosition_11 = L_1;
		// OutputPointerEventValue(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		UIVirtualTouchZone_OutputPointerEventValue_m53065FA2AD015F665E03E7CAE24703CFE1C4E2AF(__this, L_2, NULL);
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// SetObjectActiveState(handleRect.gameObject, false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___handleRect_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5(__this, L_6, (bool)0, NULL);
		// UpdateHandleRectPosition(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		UIVirtualTouchZone_UpdateHandleRectPosition_m859E4E9C7C76AA057603B2CAA49168BD0D5ACC9E(__this, L_7, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OutputPointerEventValue_m53065FA2AD015F665E03E7CAE24703CFE1C4E2AF (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pointerPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// touchZoneOutputEvent.Invoke(pointerPosition);
		Event_t39EC29014C2EF54751D4079DD636172E90DCE53E* L_0 = __this->___touchZoneOutputEvent_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___pointerPosition0;
		UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0(L_0, L_1, UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_UpdateHandleRectPosition_m859E4E9C7C76AA057603B2CAA49168BD0D5ACC9E (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newPosition0, const RuntimeMethod* method) 
{
	{
		// handleRect.anchoredPosition = newPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___handleRect_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___newPosition0;
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::SetObjectActiveState(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, bool ___newState1, const RuntimeMethod* method) 
{
	{
		// targetObject.SetActive(newState);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		bool L_1 = ___newState1;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 UIVirtualTouchZone::GetDeltaBetweenPositions(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_GetDeltaBetweenPositions_mD54442DDF2D8B643801BDA01791C97D3658E0B5B (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___firstPosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___secondPosition1, const RuntimeMethod* method) 
{
	{
		// return secondPosition - firstPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___secondPosition1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___firstPosition0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 UIVirtualTouchZone::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_ClampValuesToMagnitude_mA1619A6CBC35D212940A5D0AC1823AAFDA8FCC95 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	{
		// return Vector2.ClampMagnitude(position, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___position0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_ClampMagnitude_m9F4DC26ED98E682A187F4B2AFEAB49CD376DF7CA_inline(L_0, (1.0f), NULL);
		return L_1;
	}
}
// UnityEngine.Vector2 UIVirtualTouchZone::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_ApplyInversionFilter_mFE8FF2CCBE01FDAB1BB9FDEC163809B630173823 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	{
		// if(invertXOutputValue)
		bool L_0 = __this->___invertXOutputValue_8;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// position.x = InvertValue(position.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___position0;
		float L_2 = L_1.___x_0;
		float L_3;
		L_3 = UIVirtualTouchZone_InvertValue_m81A82AFD20813D467E3F71703E9A5EE11CAE99BA(__this, L_2, NULL);
		(&___position0)->___x_0 = L_3;
	}

IL_001b:
	{
		// if(invertYOutputValue)
		bool L_4 = __this->___invertYOutputValue_9;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// position.y = InvertValue(position.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___position0;
		float L_6 = L_5.___y_1;
		float L_7;
		L_7 = UIVirtualTouchZone_InvertValue_m81A82AFD20813D467E3F71703E9A5EE11CAE99BA(__this, L_6, NULL);
		(&___position0)->___y_1 = L_7;
	}

IL_0036:
	{
		// return position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___position0;
		return L_8;
	}
}
// System.Single UIVirtualTouchZone::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualTouchZone_InvertValue_m81A82AFD20813D467E3F71703E9A5EE11CAE99BA (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// return -value;
		float L_0 = ___value0;
		return ((-L_0));
	}
}
// System.Void UIVirtualTouchZone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone__ctor_m3FA22B25B88E7ECBBB54AF2464EFB9A978D76CC6 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, const RuntimeMethod* method) 
{
	{
		// public float magnitudeMultiplier = 1f;
		__this->___magnitudeMultiplier_7 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIVirtualTouchZone/Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_m5EC032D776C29C6281EF446F93420F4DB87B6728 (Event_t39EC29014C2EF54751D4079DD636172E90DCE53E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D(__this, UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BasicRigidBodyPush::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicRigidBodyPush_OnControllerColliderHit_mAB4A1B5340D41961D9592034FE626BC8A8FC379E (BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0* __this, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* ___hit0, const RuntimeMethod* method) 
{
	{
		// if (canPush) PushRigidBodies(hit);
		bool L_0 = __this->___canPush_5;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// if (canPush) PushRigidBodies(hit);
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_1 = ___hit0;
		BasicRigidBodyPush_PushRigidBodies_m21C4CA75FFF7646BCD91E9A673B18E6182377D13(__this, L_1, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void BasicRigidBodyPush::PushRigidBodies(UnityEngine.ControllerColliderHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicRigidBodyPush_PushRigidBodies_m21C4CA75FFF7646BCD91E9A673B18E6182377D13 (BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0* __this, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* ___hit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Rigidbody body = hit.collider.attachedRigidbody;
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_0 = ___hit0;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1;
		L_1 = ControllerColliderHit_get_collider_mA2CF90334AD1231C04452B2D99715A9E289691D6(L_0, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD(L_1, NULL);
		V_0 = L_2;
		// if (body == null || body.isKinematic) return;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = V_0;
		bool L_6;
		L_6 = Rigidbody_get_isKinematic_mC20906CA5A89983DE06EAC6E3AFC5BC012F90CA1(L_5, NULL);
		if (!L_6)
		{
			goto IL_001e;
		}
	}

IL_001d:
	{
		// if (body == null || body.isKinematic) return;
		return;
	}

IL_001e:
	{
		// var bodyLayerMask = 1 << body.gameObject.layer;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		int32_t L_9;
		L_9 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_8, NULL);
		// if ((bodyLayerMask & pushLayers.value) == 0) return;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_10 = (&__this->___pushLayers_4);
		int32_t L_11;
		L_11 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974(L_10, NULL);
		if (((int32_t)(((int32_t)(1<<((int32_t)(L_9&((int32_t)31)))))&L_11)))
		{
			goto IL_003d;
		}
	}
	{
		// if ((bodyLayerMask & pushLayers.value) == 0) return;
		return;
	}

IL_003d:
	{
		// if (hit.moveDirection.y < -0.3f) return;
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_12 = ___hit0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = ControllerColliderHit_get_moveDirection_mC4C6384C18B4DAE3D301D079AE2A30FCC2E78A93(L_12, NULL);
		float L_14 = L_13.___y_3;
		if ((!(((float)L_14) < ((float)(-0.300000012f)))))
		{
			goto IL_0050;
		}
	}
	{
		// if (hit.moveDirection.y < -0.3f) return;
		return;
	}

IL_0050:
	{
		// Vector3 pushDir = new Vector3(hit.moveDirection.x, 0.0f, hit.moveDirection.z);
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_15 = ___hit0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = ControllerColliderHit_get_moveDirection_mC4C6384C18B4DAE3D301D079AE2A30FCC2E78A93(L_15, NULL);
		float L_17 = L_16.___x_2;
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_18 = ___hit0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = ControllerColliderHit_get_moveDirection_mC4C6384C18B4DAE3D301D079AE2A30FCC2E78A93(L_18, NULL);
		float L_20 = L_19.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), L_17, (0.0f), L_20, NULL);
		// body.AddForce(pushDir * strength, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		float L_23 = __this->___strength_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_22, L_23, NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_21, L_24, 1, NULL);
		// }
		return;
	}
}
// System.Void BasicRigidBodyPush::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicRigidBodyPush__ctor_mCD0033473AC08BFF32309E49AE95271C711099A9 (BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0* __this, const RuntimeMethod* method) 
{
	{
		// [Range(0.5f, 5f)] public float strength = 1.1f;
		__this->___strength_6 = (1.10000002f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StarterAssets.StarterAssetsInputs::OnMove(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnMove_m1037EAE12A06BEF9F73CAF4A3127C6A9CF4D6532 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MoveInput(value.Get<Vector2>());
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_0 = ___value0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293(L_0, InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::OnLook(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnLook_m457792363F0A68571BD7A917C44B1A0B1C5D7EC4 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(cursorInputForLook)
		bool L_0 = __this->___cursorInputForLook_10;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// LookInput(value.Get<Vector2>());
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_1 = ___value0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293(L_1, InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE_inline(__this, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::OnJump(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnJump_m077D720656D5B78D423A5D7E0194BA2D9DE089E4 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___value0, const RuntimeMethod* method) 
{
	{
		// JumpInput(value.isPressed);
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_0 = ___value0;
		bool L_1;
		L_1 = InputValue_get_isPressed_m83E305196A51E4FDB9277B726ADBE9673D9F7A3F(L_0, NULL);
		StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::OnSprint(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnSprint_m8FF0D36964527B10A1A14E55A9EE4025C1AFF0EF (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___value0, const RuntimeMethod* method) 
{
	{
		// SprintInput(value.isPressed);
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_0 = ___value0;
		bool L_1;
		L_1 = InputValue_get_isPressed_m83E305196A51E4FDB9277B726ADBE9673D9F7A3F(L_0, NULL);
		StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::MoveInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newMoveDirection0, const RuntimeMethod* method) 
{
	{
		// move = newMoveDirection;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___newMoveDirection0;
		__this->___move_4 = L_0;
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::LookInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newLookDirection0, const RuntimeMethod* method) 
{
	{
		// look = newLookDirection;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___newLookDirection0;
		__this->___look_5 = L_0;
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::JumpInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newJumpState0, const RuntimeMethod* method) 
{
	{
		// jump = newJumpState;
		bool L_0 = ___newJumpState0;
		__this->___jump_6 = L_0;
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::SprintInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newSprintState0, const RuntimeMethod* method) 
{
	{
		// sprint = newSprintState;
		bool L_0 = ___newSprintState0;
		__this->___sprint_7 = L_0;
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnApplicationFocus_m461C49F2AC387B76D98B87A98BA38A0289C34EA9 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___hasFocus0, const RuntimeMethod* method) 
{
	{
		// SetCursorState(cursorLocked);
		bool L_0 = __this->___cursorLocked_9;
		StarterAssetsInputs_SetCursorState_m7D2F57E935DE40673700B1994EFA6C4BF9573D0E(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::SetCursorState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_SetCursorState_m7D2F57E935DE40673700B1994EFA6C4BF9573D0E (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newState0, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// Cursor.lockState = newState ? CursorLockMode.Locked : CursorLockMode.None;
		bool L_0 = ___newState0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 1;
	}

IL_0007:
	{
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs__ctor_m1A0CAEE3381A63077E196B7C815859617C9BCDBA (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, const RuntimeMethod* method) 
{
	{
		// public bool cursorLocked = true;
		__this->___cursorLocked_9 = (bool)1;
		// public bool cursorInputForLook = true;
		__this->___cursorInputForLook_10 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StarterAssets.UICanvasControllerInput::VirtualMoveInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualMoveInput_m56E41472A26B3A6B517D63844304F7196FFF449C (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___virtualMoveDirection0, const RuntimeMethod* method) 
{
	{
		// starterAssetsInputs.MoveInput(virtualMoveDirection);
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->___starterAssetsInputs_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___virtualMoveDirection0;
		StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::VirtualLookInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualLookInput_m88A9B7AC7F338CFBEC98FBBBD2EC8793C1C8288E (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___virtualLookDirection0, const RuntimeMethod* method) 
{
	{
		// starterAssetsInputs.LookInput(virtualLookDirection);
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->___starterAssetsInputs_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___virtualLookDirection0;
		StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::VirtualJumpInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualJumpInput_m45600335B430348707B730FFA2FCB334E8D807FE (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, bool ___virtualJumpState0, const RuntimeMethod* method) 
{
	{
		// starterAssetsInputs.JumpInput(virtualJumpState);
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->___starterAssetsInputs_4;
		bool L_1 = ___virtualJumpState0;
		StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::VirtualSprintInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualSprintInput_m80CBF3433D8C053AB55A0D3F01B26070F1799759 (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, bool ___virtualSprintState0, const RuntimeMethod* method) 
{
	{
		// starterAssetsInputs.SprintInput(virtualSprintState);
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->___starterAssetsInputs_4;
		bool L_1 = ___virtualSprintState0;
		StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput__ctor_m3B7626E7C92128BC984ABE40C9C250720F352017 (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean StarterAssets.ThirdPersonController::get_IsCurrentDeviceMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThirdPersonController_get_IsCurrentDeviceMouse_m5EBE0107CBD975A6178FCE2840C3D159A13C6D9C (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4700B5BBCBF829BC28448CAB621CD8AEDB030940);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _playerInput.currentControlScheme == "KeyboardMouse";
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_0 = __this->____playerInput_39;
		String_t* L_1;
		L_1 = PlayerInput_get_currentControlScheme_mA70B5C50BA1A61D2E232F17730BAECD3F690204C(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral4700B5BBCBF829BC28448CAB621CD8AEDB030940, NULL);
		return L_2;
	}
}
// System.Void StarterAssets.ThirdPersonController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Awake_mE08F39AEA7E4CE2E15C7828E9C24AC4CE9C487C3 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_mainCamera == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____mainCamera_43;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// _mainCamera = GameObject.FindGameObjectWithTag("MainCamera");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, NULL);
		__this->____mainCamera_43 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mainCamera_43), (void*)L_2);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Start_m99AC2EAB6D2136A754B1B9B2E001732ED198D7E7 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _cinemachineTargetYaw = CinemachineCameraTarget.transform.rotation.eulerAngles.y;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___CinemachineCameraTarget_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_1, NULL);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		float L_4 = L_3.___y_3;
		__this->____cinemachineTargetYaw_24 = L_4;
		// _hasAnimator = TryGetComponent(out _animator);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883** L_5 = (&__this->____animator_40);
		bool L_6;
		L_6 = Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7(__this, L_5, Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var);
		__this->____hasAnimator_45 = L_6;
		// _controller = GetComponent<CharacterController>();
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_7;
		L_7 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(__this, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->____controller_41 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____controller_41), (void*)L_7);
		// _input = GetComponent<StarterAssetsInputs>();
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_8;
		L_8 = Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC(__this, Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC_RuntimeMethod_var);
		__this->____input_42 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____input_42), (void*)L_8);
		// _playerInput = GetComponent<PlayerInput>();
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_9;
		L_9 = Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89(__this, Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89_RuntimeMethod_var);
		__this->____playerInput_39 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playerInput_39), (void*)L_9);
		// AssignAnimationIDs();
		ThirdPersonController_AssignAnimationIDs_m3F78712E347AAEB24671FD485878AD4EFB45FA6A(__this, NULL);
		// _jumpTimeoutDelta = JumpTimeout;
		float L_10 = __this->___JumpTimeout_13;
		__this->____jumpTimeoutDelta_32 = L_10;
		// _fallTimeoutDelta = FallTimeout;
		float L_11 = __this->___FallTimeout_14;
		__this->____fallTimeoutDelta_33 = L_11;
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Update_mAFF4B3A14DCC2D6F6C5D318C41DFC61F3EDE43C5 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _hasAnimator = TryGetComponent(out _animator);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883** L_0 = (&__this->____animator_40);
		bool L_1;
		L_1 = Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7(__this, L_0, Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var);
		__this->____hasAnimator_45 = L_1;
		// JumpAndGravity();
		ThirdPersonController_JumpAndGravity_m871B3C01ED71022CF151700F569540EAC058997F(__this, NULL);
		// GroundedCheck();
		ThirdPersonController_GroundedCheck_mEC00FD7C667109275F153C9A1E7BDA401D514AEE(__this, NULL);
		// Move();
		ThirdPersonController_Move_m6FB6A9AEA1B2354BAE790DE45C79292579802C76(__this, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_LateUpdate_m02FBD3801F369821F2FEF5ADD8890B3FB9759BC0 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	{
		// CameraRotation();
		ThirdPersonController_CameraRotation_m24BBAE5DB2B55B6DDC5218DD0DB7C53F1EF30751(__this, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::AssignAnimationIDs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_AssignAnimationIDs_m3F78712E347AAEB24671FD485878AD4EFB45FA6A (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B1BBFA44CAA416A6E13B3ADACB0CDB4EFF4AAB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2CFA0DCA9F3732AA69C3B65D12881F7F3CF5FC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animIDSpeed = Animator.StringToHash("Speed");
		int32_t L_0;
		L_0 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, NULL);
		__this->____animIDSpeed_34 = L_0;
		// _animIDGrounded = Animator.StringToHash("Grounded");
		int32_t L_1;
		L_1 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(_stringLiteralEB1018EBBD330B231ADCF3E0D809C0C4A7F770D4, NULL);
		__this->____animIDGrounded_35 = L_1;
		// _animIDJump = Animator.StringToHash("Jump");
		int32_t L_2;
		L_2 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		__this->____animIDJump_36 = L_2;
		// _animIDFreeFall = Animator.StringToHash("FreeFall");
		int32_t L_3;
		L_3 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(_stringLiteral0B1BBFA44CAA416A6E13B3ADACB0CDB4EFF4AAB3, NULL);
		__this->____animIDFreeFall_37 = L_3;
		// _animIDMotionSpeed = Animator.StringToHash("MotionSpeed");
		int32_t L_4;
		L_4 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(_stringLiteralE2CFA0DCA9F3732AA69C3B65D12881F7F3CF5FC0, NULL);
		__this->____animIDMotionSpeed_38 = L_4;
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::GroundedCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_GroundedCheck_mEC00FD7C667109275F153C9A1E7BDA401D514AEE (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 spherePosition = new Vector3(transform.position.x, transform.position.y - GroundedOffset,
		//     transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___y_3;
		float L_6 = __this->___GroundedOffset_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_2, ((float)il2cpp_codegen_subtract(L_5, L_6)), L_9, NULL);
		// Grounded = Physics.CheckSphere(spherePosition, GroundedRadius, GroundLayers,
		//     QueryTriggerInteraction.Ignore);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = __this->___GroundedRadius_17;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_12 = __this->___GroundLayers_18;
		int32_t L_13;
		L_13 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_12, NULL);
		bool L_14;
		L_14 = Physics_CheckSphere_m8642264AC443B505CE92D5DC9E41F75DA0ADAFBF(L_10, L_11, L_13, 1, NULL);
		__this->___Grounded_15 = L_14;
		// if (_hasAnimator)
		bool L_15 = __this->____hasAnimator_45;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		// _animator.SetBool(_animIDGrounded, Grounded);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_16 = __this->____animator_40;
		int32_t L_17 = __this->____animIDGrounded_35;
		bool L_18 = __this->___Grounded_15;
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_16, L_17, L_18, NULL);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::CameraRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_CameraRotation_m24BBAE5DB2B55B6DDC5218DD0DB7C53F1EF30751 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B5_0 = 0.0f;
	{
		// if (_input.look.sqrMagnitude >= _threshold && !LockCameraPosition)
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->____input_42;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&L_0->___look_5);
		float L_2;
		L_2 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline(L_1, NULL);
		if ((!(((float)L_2) >= ((float)(0.00999999978f)))))
		{
			goto IL_0072;
		}
	}
	{
		bool L_3 = __this->___LockCameraPosition_23;
		if (L_3)
		{
			goto IL_0072;
		}
	}
	{
		// float deltaTimeMultiplier = IsCurrentDeviceMouse ? 1.0f : Time.deltaTime;
		bool L_4;
		L_4 = ThirdPersonController_get_IsCurrentDeviceMouse_m5EBE0107CBD975A6178FCE2840C3D159A13C6D9C(__this, NULL);
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		G_B5_0 = L_5;
		goto IL_0033;
	}

IL_002e:
	{
		G_B5_0 = (1.0f);
	}

IL_0033:
	{
		V_0 = G_B5_0;
		// _cinemachineTargetYaw += _input.look.x * deltaTimeMultiplier;
		float L_6 = __this->____cinemachineTargetYaw_24;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_7 = __this->____input_42;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&L_7->___look_5);
		float L_9 = L_8->___x_0;
		float L_10 = V_0;
		__this->____cinemachineTargetYaw_24 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		// _cinemachineTargetPitch += _input.look.y * deltaTimeMultiplier;
		float L_11 = __this->____cinemachineTargetPitch_25;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_12 = __this->____input_42;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&L_12->___look_5);
		float L_14 = L_13->___y_1;
		float L_15 = V_0;
		__this->____cinemachineTargetPitch_25 = ((float)il2cpp_codegen_add(L_11, ((float)il2cpp_codegen_multiply(L_14, L_15))));
	}

IL_0072:
	{
		// _cinemachineTargetYaw = ClampAngle(_cinemachineTargetYaw, float.MinValue, float.MaxValue);
		float L_16 = __this->____cinemachineTargetYaw_24;
		float L_17;
		L_17 = ThirdPersonController_ClampAngle_m7569DBBF5E50A690C57959DE6CCE6A18C32E19A2(L_16, (-(std::numeric_limits<float>::max)()), ((std::numeric_limits<float>::max)()), NULL);
		__this->____cinemachineTargetYaw_24 = L_17;
		// _cinemachineTargetPitch = ClampAngle(_cinemachineTargetPitch, BottomClamp, TopClamp);
		float L_18 = __this->____cinemachineTargetPitch_25;
		float L_19 = __this->___BottomClamp_21;
		float L_20 = __this->___TopClamp_20;
		float L_21;
		L_21 = ThirdPersonController_ClampAngle_m7569DBBF5E50A690C57959DE6CCE6A18C32E19A2(L_18, L_19, L_20, NULL);
		__this->____cinemachineTargetPitch_25 = L_21;
		// CinemachineCameraTarget.transform.rotation = Quaternion.Euler(_cinemachineTargetPitch + CameraAngleOverride,
		//     _cinemachineTargetYaw, 0.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___CinemachineCameraTarget_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		float L_24 = __this->____cinemachineTargetPitch_25;
		float L_25 = __this->___CameraAngleOverride_22;
		float L_26 = __this->____cinemachineTargetYaw_24;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(((float)il2cpp_codegen_add(L_24, L_25)), L_26, (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_23, L_27, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Move_m6FB6A9AEA1B2354BAE790DE45C79292579802C76 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B8_0 = 0.0f;
	{
		// float targetSpeed = _input.sprint ? SprintSpeed : MoveSpeed;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->____input_42;
		bool L_1 = L_0->___sprint_7;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		float L_2 = __this->___MoveSpeed_4;
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0015:
	{
		float L_3 = __this->___SprintSpeed_5;
		G_B3_0 = L_3;
	}

IL_001b:
	{
		V_0 = G_B3_0;
		// if (_input.move == Vector2.zero) targetSpeed = 0.0f;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_4 = __this->____input_42;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = L_4->___move_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		bool L_7;
		L_7 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		// if (_input.move == Vector2.zero) targetSpeed = 0.0f;
		V_0 = (0.0f);
	}

IL_0039:
	{
		// float currentHorizontalSpeed = new Vector3(_controller.velocity.x, 0.0f, _controller.velocity.z).magnitude;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_8 = __this->____controller_41;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_8, NULL);
		float L_10 = L_9.___x_2;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_11 = __this->____controller_41;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_11, NULL);
		float L_13 = L_12.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_10, (0.0f), L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		float L_15;
		L_15 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_6), NULL);
		V_1 = L_15;
		// float speedOffset = 0.1f;
		V_2 = (0.100000001f);
		// float inputMagnitude = _input.analogMovement ? _input.move.magnitude : 1f;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_16 = __this->____input_42;
		bool L_17 = L_16->___analogMovement_8;
		if (L_17)
		{
			goto IL_0087;
		}
	}
	{
		G_B8_0 = (1.0f);
		goto IL_0097;
	}

IL_0087:
	{
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_18 = __this->____input_42;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (&L_18->___move_4);
		float L_20;
		L_20 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_19, NULL);
		G_B8_0 = L_20;
	}

IL_0097:
	{
		V_3 = G_B8_0;
		// if (currentHorizontalSpeed < targetSpeed - speedOffset ||
		//     currentHorizontalSpeed > targetSpeed + speedOffset)
		float L_21 = V_1;
		float L_22 = V_0;
		float L_23 = V_2;
		if ((((float)L_21) < ((float)((float)il2cpp_codegen_subtract(L_22, L_23)))))
		{
			goto IL_00a4;
		}
	}
	{
		float L_24 = V_1;
		float L_25 = V_0;
		float L_26 = V_2;
		if ((!(((float)L_24) > ((float)((float)il2cpp_codegen_add(L_25, L_26))))))
		{
			goto IL_00de;
		}
	}

IL_00a4:
	{
		// _speed = Mathf.Lerp(currentHorizontalSpeed, targetSpeed * inputMagnitude,
		//     Time.deltaTime * SpeedChangeRate);
		float L_27 = V_1;
		float L_28 = V_0;
		float L_29 = V_3;
		float L_30;
		L_30 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_31 = __this->___SpeedChangeRate_7;
		float L_32;
		L_32 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_27, ((float)il2cpp_codegen_multiply(L_28, L_29)), ((float)il2cpp_codegen_multiply(L_30, L_31)), NULL);
		__this->____speed_26 = L_32;
		// _speed = Mathf.Round(_speed * 1000f) / 1000f;
		float L_33 = __this->____speed_26;
		float L_34;
		L_34 = bankers_roundf(((float)il2cpp_codegen_multiply(L_33, (1000.0f))));
		__this->____speed_26 = ((float)(L_34/(1000.0f)));
		goto IL_00e5;
	}

IL_00de:
	{
		// _speed = targetSpeed;
		float L_35 = V_0;
		__this->____speed_26 = L_35;
	}

IL_00e5:
	{
		// _animationBlend = Mathf.Lerp(_animationBlend, targetSpeed, Time.deltaTime * SpeedChangeRate);
		float L_36 = __this->____animationBlend_27;
		float L_37 = V_0;
		float L_38;
		L_38 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_39 = __this->___SpeedChangeRate_7;
		float L_40;
		L_40 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_36, L_37, ((float)il2cpp_codegen_multiply(L_38, L_39)), NULL);
		__this->____animationBlend_27 = L_40;
		// if (_animationBlend < 0.01f) _animationBlend = 0f;
		float L_41 = __this->____animationBlend_27;
		if ((!(((float)L_41) < ((float)(0.00999999978f)))))
		{
			goto IL_011b;
		}
	}
	{
		// if (_animationBlend < 0.01f) _animationBlend = 0f;
		__this->____animationBlend_27 = (0.0f);
	}

IL_011b:
	{
		// Vector3 inputDirection = new Vector3(_input.move.x, 0.0f, _input.move.y).normalized;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_42 = __this->____input_42;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_43 = (&L_42->___move_4);
		float L_44 = L_43->___x_0;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_45 = __this->____input_42;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_46 = (&L_45->___move_4);
		float L_47 = L_46->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_48), L_44, (0.0f), L_47, /*hidden argument*/NULL);
		V_6 = L_48;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_6), NULL);
		V_4 = L_49;
		// if (_input.move != Vector2.zero)
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_50 = __this->____input_42;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = L_50->___move_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		L_52 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		bool L_53;
		L_53 = Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline(L_51, L_52, NULL);
		if (!L_53)
		{
			goto IL_01e1;
		}
	}
	{
		// _targetRotation = Mathf.Atan2(inputDirection.x, inputDirection.z) * Mathf.Rad2Deg +
		//                   _mainCamera.transform.eulerAngles.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_4;
		float L_55 = L_54.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = V_4;
		float L_57 = L_56.___z_4;
		float L_58;
		L_58 = atan2f(L_55, L_57);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = __this->____mainCamera_43;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60;
		L_60 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_59, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_60, NULL);
		float L_62 = L_61.___y_3;
		__this->____targetRotation_28 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_58, (57.2957802f))), L_62));
		// float rotation = Mathf.SmoothDampAngle(transform.eulerAngles.y, _targetRotation, ref _rotationVelocity,
		//     RotationSmoothTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_63, NULL);
		float L_65 = L_64.___y_3;
		float L_66 = __this->____targetRotation_28;
		float* L_67 = (&__this->____rotationVelocity_29);
		float L_68 = __this->___RotationSmoothTime_6;
		float L_69;
		L_69 = Mathf_SmoothDampAngle_m1176F6353029E4F715A36DBC62B176050A21EBDC_inline(L_65, L_66, L_67, L_68, NULL);
		V_7 = L_69;
		// transform.rotation = Quaternion.Euler(0.0f, rotation, 0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_71 = V_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_72;
		L_72 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), L_71, (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_70, L_72, NULL);
	}

IL_01e1:
	{
		// Vector3 targetDirection = Quaternion.Euler(0.0f, _targetRotation, 0.0f) * Vector3.forward;
		float L_73 = __this->____targetRotation_28;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_74;
		L_74 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), L_73, (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_74, L_75, NULL);
		V_5 = L_76;
		// _controller.Move(targetDirection.normalized * (_speed * Time.deltaTime) +
		//                  new Vector3(0.0f, _verticalVelocity, 0.0f) * Time.deltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_77 = __this->____controller_41;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		float L_79 = __this->____speed_26;
		float L_80;
		L_80 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_78, ((float)il2cpp_codegen_multiply(L_79, L_80)), NULL);
		float L_82 = __this->____verticalVelocity_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_83), (0.0f), L_82, (0.0f), /*hidden argument*/NULL);
		float L_84;
		L_84 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_83, L_84, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_81, L_85, NULL);
		int32_t L_87;
		L_87 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_77, L_86, NULL);
		// if (_hasAnimator)
		bool L_88 = __this->____hasAnimator_45;
		if (!L_88)
		{
			goto IL_027b;
		}
	}
	{
		// _animator.SetFloat(_animIDSpeed, _animationBlend);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_89 = __this->____animator_40;
		int32_t L_90 = __this->____animIDSpeed_34;
		float L_91 = __this->____animationBlend_27;
		Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5(L_89, L_90, L_91, NULL);
		// _animator.SetFloat(_animIDMotionSpeed, inputMagnitude);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_92 = __this->____animator_40;
		int32_t L_93 = __this->____animIDMotionSpeed_38;
		float L_94 = V_3;
		Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5(L_92, L_93, L_94, NULL);
	}

IL_027b:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::JumpAndGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_JumpAndGravity_m871B3C01ED71022CF151700F569540EAC058997F (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	{
		// if (Grounded)
		bool L_0 = __this->___Grounded_15;
		if (!L_0)
		{
			goto IL_00ce;
		}
	}
	{
		// _fallTimeoutDelta = FallTimeout;
		float L_1 = __this->___FallTimeout_14;
		__this->____fallTimeoutDelta_33 = L_1;
		// if (_hasAnimator)
		bool L_2 = __this->____hasAnimator_45;
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		// _animator.SetBool(_animIDJump, false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->____animator_40;
		int32_t L_4 = __this->____animIDJump_36;
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_3, L_4, (bool)0, NULL);
		// _animator.SetBool(_animIDFreeFall, false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->____animator_40;
		int32_t L_6 = __this->____animIDFreeFall_37;
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_5, L_6, (bool)0, NULL);
	}

IL_0043:
	{
		// if (_verticalVelocity < 0.0f)
		float L_7 = __this->____verticalVelocity_30;
		if ((!(((float)L_7) < ((float)(0.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		// _verticalVelocity = -2f;
		__this->____verticalVelocity_30 = (-2.0f);
	}

IL_005b:
	{
		// if (_input.jump && _jumpTimeoutDelta <= 0.0f)
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_8 = __this->____input_42;
		bool L_9 = L_8->___jump_6;
		if (!L_9)
		{
			goto IL_00ad;
		}
	}
	{
		float L_10 = __this->____jumpTimeoutDelta_32;
		if ((!(((float)L_10) <= ((float)(0.0f)))))
		{
			goto IL_00ad;
		}
	}
	{
		// _verticalVelocity = Mathf.Sqrt(JumpHeight * -2f * Gravity);
		float L_11 = __this->___JumpHeight_11;
		float L_12 = __this->___Gravity_12;
		float L_13;
		L_13 = sqrtf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_11, (-2.0f))), L_12)));
		__this->____verticalVelocity_30 = L_13;
		// if (_hasAnimator)
		bool L_14 = __this->____hasAnimator_45;
		if (!L_14)
		{
			goto IL_00ad;
		}
	}
	{
		// _animator.SetBool(_animIDJump, true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = __this->____animator_40;
		int32_t L_16 = __this->____animIDJump_36;
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_15, L_16, (bool)1, NULL);
	}

IL_00ad:
	{
		// if (_jumpTimeoutDelta >= 0.0f)
		float L_17 = __this->____jumpTimeoutDelta_32;
		if ((!(((float)L_17) >= ((float)(0.0f)))))
		{
			goto IL_0121;
		}
	}
	{
		// _jumpTimeoutDelta -= Time.deltaTime;
		float L_18 = __this->____jumpTimeoutDelta_32;
		float L_19;
		L_19 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____jumpTimeoutDelta_32 = ((float)il2cpp_codegen_subtract(L_18, L_19));
		goto IL_0121;
	}

IL_00ce:
	{
		// _jumpTimeoutDelta = JumpTimeout;
		float L_20 = __this->___JumpTimeout_13;
		__this->____jumpTimeoutDelta_32 = L_20;
		// if (_fallTimeoutDelta >= 0.0f)
		float L_21 = __this->____fallTimeoutDelta_33;
		if ((!(((float)L_21) >= ((float)(0.0f)))))
		{
			goto IL_00fb;
		}
	}
	{
		// _fallTimeoutDelta -= Time.deltaTime;
		float L_22 = __this->____fallTimeoutDelta_33;
		float L_23;
		L_23 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____fallTimeoutDelta_33 = ((float)il2cpp_codegen_subtract(L_22, L_23));
		goto IL_0115;
	}

IL_00fb:
	{
		// if (_hasAnimator)
		bool L_24 = __this->____hasAnimator_45;
		if (!L_24)
		{
			goto IL_0115;
		}
	}
	{
		// _animator.SetBool(_animIDFreeFall, true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_25 = __this->____animator_40;
		int32_t L_26 = __this->____animIDFreeFall_37;
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_25, L_26, (bool)1, NULL);
	}

IL_0115:
	{
		// _input.jump = false;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_27 = __this->____input_42;
		L_27->___jump_6 = (bool)0;
	}

IL_0121:
	{
		// if (_verticalVelocity < _terminalVelocity)
		float L_28 = __this->____verticalVelocity_30;
		float L_29 = __this->____terminalVelocity_31;
		if ((!(((float)L_28) < ((float)L_29))))
		{
			goto IL_0148;
		}
	}
	{
		// _verticalVelocity += Gravity * Time.deltaTime;
		float L_30 = __this->____verticalVelocity_30;
		float L_31 = __this->___Gravity_12;
		float L_32;
		L_32 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->____verticalVelocity_30 = ((float)il2cpp_codegen_add(L_30, ((float)il2cpp_codegen_multiply(L_31, L_32))));
	}

IL_0148:
	{
		// }
		return;
	}
}
// System.Single StarterAssets.ThirdPersonController::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ThirdPersonController_ClampAngle_m7569DBBF5E50A690C57959DE6CCE6A18C32E19A2 (float ___lfAngle0, float ___lfMin1, float ___lfMax2, const RuntimeMethod* method) 
{
	{
		// if (lfAngle < -360f) lfAngle += 360f;
		float L_0 = ___lfAngle0;
		if ((!(((float)L_0) < ((float)(-360.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// if (lfAngle < -360f) lfAngle += 360f;
		float L_1 = ___lfAngle0;
		___lfAngle0 = ((float)il2cpp_codegen_add(L_1, (360.0f)));
	}

IL_0011:
	{
		// if (lfAngle > 360f) lfAngle -= 360f;
		float L_2 = ___lfAngle0;
		if ((!(((float)L_2) > ((float)(360.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// if (lfAngle > 360f) lfAngle -= 360f;
		float L_3 = ___lfAngle0;
		___lfAngle0 = ((float)il2cpp_codegen_subtract(L_3, (360.0f)));
	}

IL_0022:
	{
		// return Mathf.Clamp(lfAngle, lfMin, lfMax);
		float L_4 = ___lfAngle0;
		float L_5 = ___lfMin1;
		float L_6 = ___lfMax2;
		float L_7;
		L_7 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void StarterAssets.ThirdPersonController::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_OnDrawGizmosSelected_mCD3D7F711815BC95C166CB8E67F3C5D085C38BA5 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Color transparentGreen = new Color(0.0f, 1.0f, 0.0f, 0.35f);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_0), (0.0f), (1.0f), (0.0f), (0.349999994f), NULL);
		// Color transparentRed = new Color(1.0f, 0.0f, 0.0f, 0.35f);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_1), (1.0f), (0.0f), (0.0f), (0.349999994f), NULL);
		// if (Grounded) Gizmos.color = transparentGreen;
		bool L_0 = __this->___Grounded_15;
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		// if (Grounded) Gizmos.color = transparentGreen;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2(L_1, NULL);
		goto IL_004c;
	}

IL_0046:
	{
		// else Gizmos.color = transparentRed;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = V_1;
		Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2(L_2, NULL);
	}

IL_004c:
	{
		// Gizmos.DrawSphere(
		//     new Vector3(transform.position.x, transform.position.y - GroundedOffset, transform.position.z),
		//     GroundedRadius);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___y_3;
		float L_9 = __this->___GroundedOffset_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_5, ((float)il2cpp_codegen_subtract(L_8, L_9)), L_12, /*hidden argument*/NULL);
		float L_14 = __this->___GroundedRadius_17;
		Gizmos_DrawSphere_m80D4373C59949363664E571DCE7E9C54337B4942(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::OnFootstep(UnityEngine.AnimationEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_OnFootstep_mFE54F581AB0F72FC34208BCB6ABF77311BCC3D02 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* ___animationEvent0, const RuntimeMethod* method) 
{
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// if (animationEvent.animatorClipInfo.weight > 0.5f)
		AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* L_0 = ___animationEvent0;
		AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 L_1;
		L_1 = AnimationEvent_get_animatorClipInfo_m0D763FA1A2E3CD81AC08F1F24977859AE25938F3(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = AnimatorClipInfo_get_weight_m1CC29E2C37B30993EFFD12161059E4AD86EE287D((&V_0), NULL);
		if ((!(((float)L_2) > ((float)(0.5f)))))
		{
			goto IL_0056;
		}
	}
	{
		// if (FootstepAudioClips.Length > 0)
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_3 = __this->___FootstepAudioClips_9;
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0056;
		}
	}
	{
		// var index = Random.Range(0, FootstepAudioClips.Length);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_4 = __this->___FootstepAudioClips_9;
		int32_t L_5;
		L_5 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		V_1 = L_5;
		// AudioSource.PlayClipAtPoint(FootstepAudioClips[index], transform.TransformPoint(_controller.center), FootstepAudioVolume);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_6 = __this->___FootstepAudioClips_9;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_11 = __this->____controller_41;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = CharacterController_get_center_mDF0F4D399A63BF5A2F5366CB71CCF4148DB08591(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_10, L_12, NULL);
		float L_14 = __this->___FootstepAudioVolume_10;
		AudioSource_PlayClipAtPoint_mEEF6FE993B8F7A61829F0E9538858711D06945F7(L_9, L_13, L_14, NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::OnLand(UnityEngine.AnimationEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_OnLand_mAF1A04288C4B0ED39ACA52599F18D059F78D41C8 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* ___animationEvent0, const RuntimeMethod* method) 
{
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (animationEvent.animatorClipInfo.weight > 0.5f)
		AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* L_0 = ___animationEvent0;
		AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 L_1;
		L_1 = AnimationEvent_get_animatorClipInfo_m0D763FA1A2E3CD81AC08F1F24977859AE25938F3(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = AnimatorClipInfo_get_weight_m1CC29E2C37B30993EFFD12161059E4AD86EE287D((&V_0), NULL);
		if ((!(((float)L_2) > ((float)(0.5f)))))
		{
			goto IL_003c;
		}
	}
	{
		// AudioSource.PlayClipAtPoint(LandingAudioClip, transform.TransformPoint(_controller.center), FootstepAudioVolume);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = __this->___LandingAudioClip_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_5 = __this->____controller_41;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = CharacterController_get_center_mDF0F4D399A63BF5A2F5366CB71CCF4148DB08591(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_4, L_6, NULL);
		float L_8 = __this->___FootstepAudioVolume_10;
		AudioSource_PlayClipAtPoint_mEEF6FE993B8F7A61829F0E9538858711D06945F7(L_3, L_7, L_8, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.ThirdPersonController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController__ctor_mA2ECE265C51A281DA13F2344E30363399DD64321 (ThirdPersonController_t893DAD6404051D289F667ABE7A3B1C17C031BBF3* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveSpeed = 2.0f;
		__this->___MoveSpeed_4 = (2.0f);
		// public float SprintSpeed = 5.335f;
		__this->___SprintSpeed_5 = (5.33500004f);
		// public float RotationSmoothTime = 0.12f;
		__this->___RotationSmoothTime_6 = (0.119999997f);
		// public float SpeedChangeRate = 10.0f;
		__this->___SpeedChangeRate_7 = (10.0f);
		// [Range(0, 1)] public float FootstepAudioVolume = 0.5f;
		__this->___FootstepAudioVolume_10 = (0.5f);
		// public float JumpHeight = 1.2f;
		__this->___JumpHeight_11 = (1.20000005f);
		// public float Gravity = -15.0f;
		__this->___Gravity_12 = (-15.0f);
		// public float JumpTimeout = 0.50f;
		__this->___JumpTimeout_13 = (0.5f);
		// public float FallTimeout = 0.15f;
		__this->___FallTimeout_14 = (0.150000006f);
		// public bool Grounded = true;
		__this->___Grounded_15 = (bool)1;
		// public float GroundedOffset = -0.14f;
		__this->___GroundedOffset_16 = (-0.140000001f);
		// public float GroundedRadius = 0.28f;
		__this->___GroundedRadius_17 = (0.280000001f);
		// public float TopClamp = 70.0f;
		__this->___TopClamp_20 = (70.0f);
		// public float BottomClamp = -30.0f;
		__this->___BottomClamp_21 = (-30.0f);
		// private float _terminalVelocity = 53.0f;
		__this->____terminalVelocity_31 = (53.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___U3CassetU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) 
{
	{
		// get => m_BindingMask;
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_0 = __this->___m_BindingMask_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_mapActions__ctor_mB26A9EC7AE3FFC2202170FC60AE9B433A9E2322C_inline (Player_mapActions_tE73F1858FB3BBF84C0A417EF221B668E86305132* __this, PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* ___wrapper0, const RuntimeMethod* method) 
{
	{
		// public Player_mapActions(@PlayerInputActions wrapper) { m_Wrapper = wrapper; }
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_0 = ___wrapper0;
		__this->___m_Wrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Wrapper_0), (void*)L_0);
		// public Player_mapActions(@PlayerInputActions wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___target1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___current0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___target1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___target1;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___current0;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___current0;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___current0;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___current0;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_ClampMagnitude_m9F4DC26ED98E682A187F4B2AFEAB49CD376DF7CA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, float ___maxLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___vector0), NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ___maxLength1;
		float L_3 = ___maxLength1;
		V_1 = (bool)((((float)L_1) > ((float)((float)il2cpp_codegen_multiply(L_2, L_3))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		float L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)L_5));
		V_2 = ((float)L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___vector0;
		float L_8 = L_7.___x_0;
		float L_9 = V_2;
		V_3 = ((float)(L_8/L_9));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___vector0;
		float L_11 = L_10.___y_1;
		float L_12 = V_2;
		V_4 = ((float)(L_11/L_12));
		float L_13 = V_3;
		float L_14 = ___maxLength1;
		float L_15 = V_4;
		float L_16 = ___maxLength1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), ((float)il2cpp_codegen_multiply(L_13, L_14)), ((float)il2cpp_codegen_multiply(L_15, L_16)), /*hidden argument*/NULL);
		V_5 = L_17;
		goto IL_0045;
	}

IL_0040:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___vector0;
		V_5 = L_18;
		goto IL_0045;
	}

IL_0045:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_5;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newMoveDirection0, const RuntimeMethod* method) 
{
	{
		// move = newMoveDirection;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___newMoveDirection0;
		__this->___move_4 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newLookDirection0, const RuntimeMethod* method) 
{
	{
		// look = newLookDirection;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___newLookDirection0;
		__this->___look_5 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newJumpState0, const RuntimeMethod* method) 
{
	{
		// jump = newJumpState;
		bool L_0 = ___newJumpState0;
		__this->___jump_6 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newSprintState0, const RuntimeMethod* method) 
{
	{
		// sprint = newSprintState;
		bool L_0 = ___newSprintState0;
		__this->___sprint_7 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_m1176F6353029E4F715A36DBC62B176050A21EBDC_inline (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0;
		L_0 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		float L_1 = ___current0;
		float L_2 = ___target1;
		float* L_3 = ___currentVelocity2;
		float L_4 = ___smoothTime3;
		float L_5 = V_1;
		float L_6 = V_0;
		float L_7;
		L_7 = Mathf_SmoothDampAngle_m4B6A71D10BBD87D55EE8AE2A8C708CE115C60973_inline(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		float L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_m4B6A71D10BBD87D55EE8AE2A8C708CE115C60973_inline (float ___current0, float ___target1, float* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___current0;
		float L_1 = ___current0;
		float L_2 = ___target1;
		float L_3;
		L_3 = Mathf_DeltaAngle_m4B87B84265A48389AC3F5E3E8164570C6AECE5C3_inline(L_1, L_2, NULL);
		___target1 = ((float)il2cpp_codegen_add(L_0, L_3));
		float L_4 = ___current0;
		float L_5 = ___target1;
		float* L_6 = ___currentVelocity2;
		float L_7 = ___smoothTime3;
		float L_8 = ___maxSpeed4;
		float L_9 = ___deltaTime5;
		float L_10;
		L_10 = Mathf_SmoothDamp_m00E482452BCED3FE0F16B4033B2B5323C7E30829(L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		V_0 = L_10;
		goto IL_001c;
	}

IL_001c:
	{
		float L_11 = V_0;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_m4B87B84265A48389AC3F5E3E8164570C6AECE5C3_inline (float ___current0, float ___target1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___target1;
		float L_1 = ___current0;
		float L_2;
		L_2 = Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline(((float)il2cpp_codegen_subtract(L_0, L_1)), (360.0f), NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) > ((float)(180.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_5, (360.0f)));
	}

IL_0023:
	{
		float L_6 = V_0;
		V_2 = L_6;
		goto IL_0027;
	}

IL_0027:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___length1;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___length1;
		float L_5 = ___length1;
		float L_6;
		L_6 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
