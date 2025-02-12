﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Int32>[]
struct EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>
struct EqualityComparer_1_t7E3233D219BAD9A94FD502F672DC198E60C604CA;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_tDDB69E91697CCB64C7993B651487CEEC287DB7E8;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5;
// System.Collections.Generic.List`1<UnityEngine.UIElements.FocusController/FocusedElement>
struct List_1_tCE807AC7A0FCBE436F146AE2428BAEE81761D3BD;
// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler>
struct List_1_tC6DEF7083E8206203302B1B25E23947E49BBD537;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Int32>>
struct Stack_1_tD844FBAA7E7F6C2AE4AB607F96FC1DB969C7B071;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Object>>
struct Stack_1_t7C250D04E2182CB96C1A0EDEF94ACC7B268BAEC6;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct Stack_1_tD3686B49BE87370A979ADAFA6DEAAE30B3FB6452;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct Stack_1_tDDB642ED18C289FF860C44FD24B801BAC507139A;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct Stack_1_t6CD8A23D0684D010CD60BE0EC39253502CB8D20D;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct Stack_1_tB88789DF6FEC373BE3216AC28D17A22FDB65D489;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct Stack_1_tCFA2A645438950A02F8F2217C68D78686F8FDABB;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Comparison`1<System.Object>
struct Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Event
struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Object>>
struct UnityAction_1_tDEF40749C3309C99C0622A39D22422E683051C67;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Rendering.VolumeParameter
struct VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978;
// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>
struct VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431;
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C;
// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback
struct ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0;
// UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback
struct FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502;
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>
struct U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>
struct U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>
struct ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338;
// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90;
// UnityEngine.UIElements.CommandEventBase`1<System.Object>
struct CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2;
// UnityEngine.UIElements.DragAndDropEventBase`1<System.Object>
struct DragAndDropEventBase_1_t51BA6B73A83CFDD23CEE8C4C4F5F832642AF0844;
// UnityEngine.UIElements.ElementUnderPointer
struct ElementUnderPointer_t95B57508EE9F6700FE873A796AAF66C0EE2A0035;
// UnityEngine.UIElements.EventBase
struct EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD;
// UnityEngine.UIElements.EventBase`1<System.Object>
struct EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_t0E675C9EC7F38446B7A42C43115CEDB7BE67776D;
// UnityEngine.UIElements.FocusChangeDirection
struct FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2;
// UnityEngine.UIElements.FocusController
struct FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231;
// UnityEngine.UIElements.FocusEventBase`1<System.Object>
struct FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24;
// UnityEngine.UIElements.Focusable
struct Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B;
// UnityEngine.UIElements.IEventHandler
struct IEventHandler_t404CEA309DA7B5B5EB5536186E3F34645F0372B2;
// UnityEngine.UIElements.IFocusRing
struct IFocusRing_t88B357CA83A82B8A4E788D16D5AC8D13F7575A10;
// UnityEngine.UIElements.IMouseEvent
struct IMouseEvent_t46F36E91C0689C43AEEE5C7C1354C8112D64113D;
// UnityEngine.UIElements.IPanel
struct IPanel_t3AAE62317DEE1C12E547C78C27556B659DE4F20A;
// UnityEngine.UIElements.IPointerEvent
struct IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA;
// UnityEngine.UIElements.KeyboardEventBase`1<System.Object>
struct KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D;
// UnityEngine.UIElements.MouseCaptureEventBase`1<System.Object>
struct MouseCaptureEventBase_1_t97B90265ADE987386D82B12AC9199D69B473E90B;
// UnityEngine.UIElements.MouseEventBase`1<System.Object>
struct MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B;
// UnityEngine.UIElements.ObjectPool`1<System.Object>
struct ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.PropagationPaths>
struct ObjectPool_1_t693D29CF21941A04E78A1458107B6C3941601A8A;
// UnityEngine.UIElements.PointerCaptureEventBase`1<System.Object>
struct PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE;
// UnityEngine.UIElements.PointerEventBase`1<System.Object>
struct PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634;
// UnityEngine.UIElements.PropagationPaths
struct PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D;
// UnityEngine.UIElements.RepaintData
struct RepaintData_tE3656A64C3BE5ABCD95A72370251036B6E75F74F;
// UnityEngine.UIElements.StyleSheets.InheritedStylesData
struct InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E;
// UnityEngine.UIElements.StyleSheets.VisualElementStylesData
struct VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867;
// UnityEngine.UIElements.VisualElement
struct VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;
// UnityEngine.Yoga.YogaNode
struct YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C;

IL2CPP_EXTERN_C RuntimeClass* BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventType_t3D3937E705A4506226002DAB22071B7B181DA57B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMouseEvent_t46F36E91C0689C43AEEE5C7C1354C8112D64113D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointerEventInternal_tA7CFA0A98B5E87A72EC8D777BB1ACEC1F98F8405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerDeviceState_tBADA581B3E49FE39A2230120F84FCBD94BB8ADA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04231B44477132B3DBEFE7768A921AE5A13A00FC;
IL2CPP_EXTERN_C String_t* _stringLiteral4AEC5D0A8B19CED88792A4A0C1E652F4023683E8;
IL2CPP_EXTERN_C String_t* _stringLiteral4E73D0FB4BEE99484EF3F5331A156AE1760807C2;
IL2CPP_EXTERN_C String_t* _stringLiteralA413973124713A2B7B3570CE8D97C7151C8628A9;
IL2CPP_EXTERN_C String_t* _stringLiteralD21048C5C5B019FA0A181ABA5C8DC41BEE59E376;
IL2CPP_EXTERN_C String_t* _stringLiteralDFADDFA065E9D92CFE8B8F06444DD5652DFC1D58;
IL2CPP_EXTERN_C String_t* _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A;
IL2CPP_EXTERN_C String_t* _stringLiteralF950D9CCC7081471921E58DAA686F27E792540D3;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedSet_1_GetEnumerator_mC16C0BE13B73DB47882CA51DB581747C19C7128B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedSet_1_Insert_mB43CB3AA6D461E94217E51DE6DD4ED3F5E1607CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m4AE666FAF40BAF18CA8D1BCAFDB0D428DEA5DFF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m605D45F96449D5CF6DDFACF60880651C85F29195_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t EventBase_1_Init_mE11F413B0B7AC707C9945CB95C7046B1EB3DBE53_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EventBase_1__cctor_mB936C2021EEEDB142183DEA0757DA68CAC2868D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EventBase_1__ctor_mEA6B57DEA212E685AF6A9751E25B844523693764_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FocusChangeDirection_get_unspecified_m72CA7BA378E9E8EF915B6997E7F0601DACE6E2A8Generics23_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FocusEventBase_1_LocalInit_mA55F0B1FC448FD0E1FB76315A1106748462AFB48_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IndexedSet_1_GetEnumerator_mC16C0BE13B73DB47882CA51DB581747C19C7128B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IndexedSet_1_Insert_mB43CB3AA6D461E94217E51DE6DD4ED3F5E1607CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseEventBase_1_GetPooled_m29CA64EDCA0FFC341A3C573F41A2B17A6D3D2939_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseEventBase_1_GetPooled_m43C244589B6072E2C06216F336E06154899E142C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseEventBase_1_GetPooled_m5377CC1E2A161709DCDBD815E72B0734D4A1E46E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseEventBase_1_GetPooled_m7581733236F9D88705484E19A491449448D31E2B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseEventBase_1_LocalInit_mBF4B84CC615154CDCFE5AE36CC219A1B11B328BD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseEventBase_1_PostDispatch_m3518F3E76E5AA9E9CA4C39AB8267080C9791A0F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseEventBase_1_PreDispatch_m16BFF76FF4B664C16716B880046A7F96F23C748F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseEventBase_1_set_currentTarget_m42FF4A10DB34A8045633A8705EE777F05C642D0D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectPool_1_Release_m11F10A7199F0544250785EAA41F819E03D65BC17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectPool_1_Release_m2F54E298C569A530D9BE145E89A85461969B0E79_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectPool_1_set_maxSize_m5732821144B90CB4DCAD3F663176B589E7AAE794_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerCaptureEventBase_1_LocalInit_m67C407968188A88A0860879AD1A1BE70884AA2F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerEventBase_1_GetPooled_m654B49807444AB3C852A3B8F68181B9203E352F7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerEventBase_1_GetPooled_m86CCDFBD02BDF5AE0EB7F297281EF28A286C0162_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerEventBase_1_GetPooled_mB4E401D8A4F768CEE0AC20377156F8AD7C9A32EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerEventBase_1_LocalInit_m6A72C0C79B21E843E37A6DDC0BE8A117365A28E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerEventBase_1_PostDispatch_m2DE466AABDA92057C28FD02AF8C130F459C06FBA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerEventBase_1_PreDispatch_m359A5629E26AA079E72B1A00D41C93821C6368B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerEventBase_1_set_currentTarget_m571C3135C0C55466E277FDA84EE500DCB69C1C51_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenRunner_1_StartTween_m1C12D6475DFCA47D74844FD2395C1057AF1CA41D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenRunner_1_StartTween_m96867F74662CBAED655A9C7B3AF0036E5282F945_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_MoveNext_m072CCA02187FAAE6E23766279083847801807198_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_MoveNext_m1F9733709DEC4B352BBFD9939F2B27D0A01137AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m4AE666FAF40BAF18CA8D1BCAFDB0D428DEA5DFF8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m605D45F96449D5CF6DDFACF60880651C85F29195_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VolumeParameter_1_Equals_m0C3E82CF2072DB8D20DDFC0CBE0665E3E346A7E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VolumeParameter_1_ToString_m205E9AF49A9C2163102FD1C66470FAD2659B2AB5_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct  Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___entries_1)); }
	inline EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___keys_7)); }
	inline KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tEECFF3D52DBAFA05FAD1589D36F0A8EEF9E2670E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___values_8)); }
	inline ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>
struct  EqualityComparer_1_t7E3233D219BAD9A94FD502F672DC198E60C604CA  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t7E3233D219BAD9A94FD502F672DC198E60C604CA_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t7E3233D219BAD9A94FD502F672DC198E60C604CA * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t7E3233D219BAD9A94FD502F672DC198E60C604CA_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t7E3233D219BAD9A94FD502F672DC198E60C604CA * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t7E3233D219BAD9A94FD502F672DC198E60C604CA ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t7E3233D219BAD9A94FD502F672DC198E60C604CA * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Color32>
struct  List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____items_1)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get__items_1() const { return ____items_1; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5_StaticFields, ____emptyArray_5)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct  List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____items_1)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get__items_1() const { return ____items_1; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554_StaticFields, ____emptyArray_5)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct  List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____items_1)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_StaticFields, ____emptyArray_5)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____items_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct  List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____items_1)); }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* get__items_1() const { return ____items_1; }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955_StaticFields, ____emptyArray_5)); }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Object>
struct  Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.Rendering.VolumeParameter
struct  VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Rendering.VolumeParameter::m_OverrideState
	bool ___m_OverrideState_1;

public:
	inline static int32_t get_offset_of_m_OverrideState_1() { return static_cast<int32_t>(offsetof(VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978, ___m_OverrideState_1)); }
	inline bool get_m_OverrideState_1() const { return ___m_OverrideState_1; }
	inline bool* get_address_of_m_OverrideState_1() { return &___m_OverrideState_1; }
	inline void set_m_OverrideState_1(bool value)
	{
		___m_OverrideState_1 = value;
	}
};


// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct  IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.UI.Collections.IndexedSet`1::m_List
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___m_List_0;
	// System.Collections.Generic.Dictionary`2<T,System.Int32> UnityEngine.UI.Collections.IndexedSet`1::m_Dictionary
	Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * ___m_Dictionary_1;

public:
	inline static int32_t get_offset_of_m_List_0() { return static_cast<int32_t>(offsetof(IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C, ___m_List_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_m_List_0() const { return ___m_List_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_m_List_0() { return &___m_List_0; }
	inline void set_m_List_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___m_List_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_List_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Dictionary_1() { return static_cast<int32_t>(offsetof(IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C, ___m_Dictionary_1)); }
	inline Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * get_m_Dictionary_1() const { return ___m_Dictionary_1; }
	inline Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A ** get_address_of_m_Dictionary_1() { return &___m_Dictionary_1; }
	inline void set_m_Dictionary_1(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * value)
	{
		___m_Dictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dictionary_1), (void*)value);
	}
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct  TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour UnityEngine.UI.CoroutineTween.TweenRunner`1::m_CoroutineContainer
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___m_CoroutineContainer_0;
	// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1::m_Tween
	RuntimeObject* ___m_Tween_1;

public:
	inline static int32_t get_offset_of_m_CoroutineContainer_0() { return static_cast<int32_t>(offsetof(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172, ___m_CoroutineContainer_0)); }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * get_m_CoroutineContainer_0() const { return ___m_CoroutineContainer_0; }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 ** get_address_of_m_CoroutineContainer_0() { return &___m_CoroutineContainer_0; }
	inline void set_m_CoroutineContainer_0(MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * value)
	{
		___m_CoroutineContainer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CoroutineContainer_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tween_1() { return static_cast<int32_t>(offsetof(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172, ___m_Tween_1)); }
	inline RuntimeObject* get_m_Tween_1() const { return ___m_Tween_1; }
	inline RuntimeObject** get_address_of_m_Tween_1() { return &___m_Tween_1; }
	inline void set_m_Tween_1(RuntimeObject* value)
	{
		___m_Tween_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tween_1), (void*)value);
	}
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct  TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour UnityEngine.UI.CoroutineTween.TweenRunner`1::m_CoroutineContainer
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___m_CoroutineContainer_0;
	// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1::m_Tween
	RuntimeObject* ___m_Tween_1;

public:
	inline static int32_t get_offset_of_m_CoroutineContainer_0() { return static_cast<int32_t>(offsetof(TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF, ___m_CoroutineContainer_0)); }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * get_m_CoroutineContainer_0() const { return ___m_CoroutineContainer_0; }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 ** get_address_of_m_CoroutineContainer_0() { return &___m_CoroutineContainer_0; }
	inline void set_m_CoroutineContainer_0(MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * value)
	{
		___m_CoroutineContainer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CoroutineContainer_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tween_1() { return static_cast<int32_t>(offsetof(TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF, ___m_Tween_1)); }
	inline RuntimeObject* get_m_Tween_1() const { return ___m_Tween_1; }
	inline RuntimeObject** get_address_of_m_Tween_1() { return &___m_Tween_1; }
	inline void set_m_Tween_1(RuntimeObject* value)
	{
		___m_Tween_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tween_1), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<System.Int32>
struct  ListPool_1_tCDBE9EE6C0FC882FB66BA0B6D36CA8E17652B15A  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tCDBE9EE6C0FC882FB66BA0B6D36CA8E17652B15A_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tCDBE9EE6C0FC882FB66BA0B6D36CA8E17652B15A_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<System.Object>
struct  ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.Color32>
struct  ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>
struct  ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.Vector2>
struct  ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.Vector3>
struct  ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.Vector4>
struct  ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct  ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tD844FBAA7E7F6C2AE4AB607F96FC1DB969C7B071 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B, ___m_Stack_0)); }
	inline Stack_1_tD844FBAA7E7F6C2AE4AB607F96FC1DB969C7B071 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tD844FBAA7E7F6C2AE4AB607F96FC1DB969C7B071 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tD844FBAA7E7F6C2AE4AB607F96FC1DB969C7B071 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B, ___m_ActionOnGet_1)); }
	inline UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>
struct  ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t7C250D04E2182CB96C1A0EDEF94ACC7B268BAEC6 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_tDEF40749C3309C99C0622A39D22422E683051C67 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_tDEF40749C3309C99C0622A39D22422E683051C67 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE, ___m_Stack_0)); }
	inline Stack_1_t7C250D04E2182CB96C1A0EDEF94ACC7B268BAEC6 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t7C250D04E2182CB96C1A0EDEF94ACC7B268BAEC6 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t7C250D04E2182CB96C1A0EDEF94ACC7B268BAEC6 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE, ___m_ActionOnGet_1)); }
	inline UnityAction_1_tDEF40749C3309C99C0622A39D22422E683051C67 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_tDEF40749C3309C99C0622A39D22422E683051C67 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_tDEF40749C3309C99C0622A39D22422E683051C67 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_tDEF40749C3309C99C0622A39D22422E683051C67 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_tDEF40749C3309C99C0622A39D22422E683051C67 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_tDEF40749C3309C99C0622A39D22422E683051C67 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct  ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tD3686B49BE87370A979ADAFA6DEAAE30B3FB6452 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8, ___m_Stack_0)); }
	inline Stack_1_tD3686B49BE87370A979ADAFA6DEAAE30B3FB6452 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tD3686B49BE87370A979ADAFA6DEAAE30B3FB6452 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tD3686B49BE87370A979ADAFA6DEAAE30B3FB6452 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8, ___m_ActionOnGet_1)); }
	inline UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct  ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tDDB642ED18C289FF860C44FD24B801BAC507139A * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062, ___m_Stack_0)); }
	inline Stack_1_tDDB642ED18C289FF860C44FD24B801BAC507139A * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tDDB642ED18C289FF860C44FD24B801BAC507139A ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tDDB642ED18C289FF860C44FD24B801BAC507139A * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct  ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t6CD8A23D0684D010CD60BE0EC39253502CB8D20D * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26, ___m_Stack_0)); }
	inline Stack_1_t6CD8A23D0684D010CD60BE0EC39253502CB8D20D * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t6CD8A23D0684D010CD60BE0EC39253502CB8D20D ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t6CD8A23D0684D010CD60BE0EC39253502CB8D20D * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26, ___m_ActionOnGet_1)); }
	inline UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct  ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tB88789DF6FEC373BE3216AC28D17A22FDB65D489 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902, ___m_Stack_0)); }
	inline Stack_1_tB88789DF6FEC373BE3216AC28D17A22FDB65D489 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tB88789DF6FEC373BE3216AC28D17A22FDB65D489 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tB88789DF6FEC373BE3216AC28D17A22FDB65D489 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902, ___m_ActionOnGet_1)); }
	inline UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct  ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tCFA2A645438950A02F8F2217C68D78686F8FDABB * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338, ___m_Stack_0)); }
	inline Stack_1_tCFA2A645438950A02F8F2217C68D78686F8FDABB * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tCFA2A645438950A02F8F2217C68D78686F8FDABB ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tCFA2A645438950A02F8F2217C68D78686F8FDABB * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Object>
struct  ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B, ___m_Stack_0)); }
	inline Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UIElements.BaseVisualElementPanel
struct  BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90  : public RuntimeObject
{
public:
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_PixelsPerPoint
	float ___m_PixelsPerPoint_0;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<duringLayoutPhase>k__BackingField
	bool ___U3CduringLayoutPhaseU3Ek__BackingField_1;
	// UnityEngine.UIElements.RepaintData UnityEngine.UIElements.BaseVisualElementPanel::<repaintData>k__BackingField
	RepaintData_tE3656A64C3BE5ABCD95A72370251036B6E75F74F * ___U3CrepaintDataU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_3;
	// UnityEngine.UIElements.ElementUnderPointer UnityEngine.UIElements.BaseVisualElementPanel::m_TopElementUnderPointers
	ElementUnderPointer_t95B57508EE9F6700FE873A796AAF66C0EE2A0035 * ___m_TopElementUnderPointers_4;

public:
	inline static int32_t get_offset_of_m_PixelsPerPoint_0() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90, ___m_PixelsPerPoint_0)); }
	inline float get_m_PixelsPerPoint_0() const { return ___m_PixelsPerPoint_0; }
	inline float* get_address_of_m_PixelsPerPoint_0() { return &___m_PixelsPerPoint_0; }
	inline void set_m_PixelsPerPoint_0(float value)
	{
		___m_PixelsPerPoint_0 = value;
	}

	inline static int32_t get_offset_of_U3CduringLayoutPhaseU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90, ___U3CduringLayoutPhaseU3Ek__BackingField_1)); }
	inline bool get_U3CduringLayoutPhaseU3Ek__BackingField_1() const { return ___U3CduringLayoutPhaseU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CduringLayoutPhaseU3Ek__BackingField_1() { return &___U3CduringLayoutPhaseU3Ek__BackingField_1; }
	inline void set_U3CduringLayoutPhaseU3Ek__BackingField_1(bool value)
	{
		___U3CduringLayoutPhaseU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CrepaintDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90, ___U3CrepaintDataU3Ek__BackingField_2)); }
	inline RepaintData_tE3656A64C3BE5ABCD95A72370251036B6E75F74F * get_U3CrepaintDataU3Ek__BackingField_2() const { return ___U3CrepaintDataU3Ek__BackingField_2; }
	inline RepaintData_tE3656A64C3BE5ABCD95A72370251036B6E75F74F ** get_address_of_U3CrepaintDataU3Ek__BackingField_2() { return &___U3CrepaintDataU3Ek__BackingField_2; }
	inline void set_U3CrepaintDataU3Ek__BackingField_2(RepaintData_tE3656A64C3BE5ABCD95A72370251036B6E75F74F * value)
	{
		___U3CrepaintDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrepaintDataU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90, ___U3CdisposedU3Ek__BackingField_3)); }
	inline bool get_U3CdisposedU3Ek__BackingField_3() const { return ___U3CdisposedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CdisposedU3Ek__BackingField_3() { return &___U3CdisposedU3Ek__BackingField_3; }
	inline void set_U3CdisposedU3Ek__BackingField_3(bool value)
	{
		___U3CdisposedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_m_TopElementUnderPointers_4() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90, ___m_TopElementUnderPointers_4)); }
	inline ElementUnderPointer_t95B57508EE9F6700FE873A796AAF66C0EE2A0035 * get_m_TopElementUnderPointers_4() const { return ___m_TopElementUnderPointers_4; }
	inline ElementUnderPointer_t95B57508EE9F6700FE873A796AAF66C0EE2A0035 ** get_address_of_m_TopElementUnderPointers_4() { return &___m_TopElementUnderPointers_4; }
	inline void set_m_TopElementUnderPointers_4(ElementUnderPointer_t95B57508EE9F6700FE873A796AAF66C0EE2A0035 * value)
	{
		___m_TopElementUnderPointers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TopElementUnderPointers_4), (void*)value);
	}
};


// UnityEngine.UIElements.CallbackEventHandler
struct  CallbackEventHandler_t3B7336D446FAD9009A9C1DA1B793885F28D214EB  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.EventCallbackRegistry UnityEngine.UIElements.CallbackEventHandler::m_CallbackRegistry
	EventCallbackRegistry_t0E675C9EC7F38446B7A42C43115CEDB7BE67776D * ___m_CallbackRegistry_0;

public:
	inline static int32_t get_offset_of_m_CallbackRegistry_0() { return static_cast<int32_t>(offsetof(CallbackEventHandler_t3B7336D446FAD9009A9C1DA1B793885F28D214EB, ___m_CallbackRegistry_0)); }
	inline EventCallbackRegistry_t0E675C9EC7F38446B7A42C43115CEDB7BE67776D * get_m_CallbackRegistry_0() const { return ___m_CallbackRegistry_0; }
	inline EventCallbackRegistry_t0E675C9EC7F38446B7A42C43115CEDB7BE67776D ** get_address_of_m_CallbackRegistry_0() { return &___m_CallbackRegistry_0; }
	inline void set_m_CallbackRegistry_0(EventCallbackRegistry_t0E675C9EC7F38446B7A42C43115CEDB7BE67776D * value)
	{
		___m_CallbackRegistry_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CallbackRegistry_0), (void*)value);
	}
};


// UnityEngine.UIElements.FocusChangeDirection
struct  FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UIElements.FocusChangeDirection::m_Value
	int32_t ___m_Value_3;

public:
	inline static int32_t get_offset_of_m_Value_3() { return static_cast<int32_t>(offsetof(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2, ___m_Value_3)); }
	inline int32_t get_m_Value_3() const { return ___m_Value_3; }
	inline int32_t* get_address_of_m_Value_3() { return &___m_Value_3; }
	inline void set_m_Value_3(int32_t value)
	{
		___m_Value_3 = value;
	}
};

struct FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_StaticFields
{
public:
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<unspecified>k__BackingField
	FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * ___U3CunspecifiedU3Ek__BackingField_0;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<none>k__BackingField
	FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * ___U3CnoneU3Ek__BackingField_1;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<lastValue>k__BackingField
	FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * ___U3ClastValueU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CunspecifiedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_StaticFields, ___U3CunspecifiedU3Ek__BackingField_0)); }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * get_U3CunspecifiedU3Ek__BackingField_0() const { return ___U3CunspecifiedU3Ek__BackingField_0; }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 ** get_address_of_U3CunspecifiedU3Ek__BackingField_0() { return &___U3CunspecifiedU3Ek__BackingField_0; }
	inline void set_U3CunspecifiedU3Ek__BackingField_0(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * value)
	{
		___U3CunspecifiedU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CunspecifiedU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnoneU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_StaticFields, ___U3CnoneU3Ek__BackingField_1)); }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * get_U3CnoneU3Ek__BackingField_1() const { return ___U3CnoneU3Ek__BackingField_1; }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 ** get_address_of_U3CnoneU3Ek__BackingField_1() { return &___U3CnoneU3Ek__BackingField_1; }
	inline void set_U3CnoneU3Ek__BackingField_1(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * value)
	{
		___U3CnoneU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnoneU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastValueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_StaticFields, ___U3ClastValueU3Ek__BackingField_2)); }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * get_U3ClastValueU3Ek__BackingField_2() const { return ___U3ClastValueU3Ek__BackingField_2; }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 ** get_address_of_U3ClastValueU3Ek__BackingField_2() { return &___U3ClastValueU3Ek__BackingField_2; }
	inline void set_U3ClastValueU3Ek__BackingField_2(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * value)
	{
		___U3ClastValueU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastValueU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.UIElements.FocusController
struct  FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.IFocusRing UnityEngine.UIElements.FocusController::<focusRing>k__BackingField
	RuntimeObject* ___U3CfocusRingU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.FocusController_FocusedElement> UnityEngine.UIElements.FocusController::m_FocusedElements
	List_1_tCE807AC7A0FCBE436F146AE2428BAEE81761D3BD * ___m_FocusedElements_1;
	// System.Int32 UnityEngine.UIElements.FocusController::<imguiKeyboardControl>k__BackingField
	int32_t ___U3CimguiKeyboardControlU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CfocusRingU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231, ___U3CfocusRingU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CfocusRingU3Ek__BackingField_0() const { return ___U3CfocusRingU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CfocusRingU3Ek__BackingField_0() { return &___U3CfocusRingU3Ek__BackingField_0; }
	inline void set_U3CfocusRingU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CfocusRingU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfocusRingU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_FocusedElements_1() { return static_cast<int32_t>(offsetof(FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231, ___m_FocusedElements_1)); }
	inline List_1_tCE807AC7A0FCBE436F146AE2428BAEE81761D3BD * get_m_FocusedElements_1() const { return ___m_FocusedElements_1; }
	inline List_1_tCE807AC7A0FCBE436F146AE2428BAEE81761D3BD ** get_address_of_m_FocusedElements_1() { return &___m_FocusedElements_1; }
	inline void set_m_FocusedElements_1(List_1_tCE807AC7A0FCBE436F146AE2428BAEE81761D3BD * value)
	{
		___m_FocusedElements_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FocusedElements_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CimguiKeyboardControlU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231, ___U3CimguiKeyboardControlU3Ek__BackingField_2)); }
	inline int32_t get_U3CimguiKeyboardControlU3Ek__BackingField_2() const { return ___U3CimguiKeyboardControlU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CimguiKeyboardControlU3Ek__BackingField_2() { return &___U3CimguiKeyboardControlU3Ek__BackingField_2; }
	inline void set_U3CimguiKeyboardControlU3Ek__BackingField_2(int32_t value)
	{
		___U3CimguiKeyboardControlU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.UIElements.ObjectPool`1<System.Object>
struct  ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UIElements.ObjectPool`1::m_Stack
	Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * ___m_Stack_0;
	// System.Int32 UnityEngine.UIElements.ObjectPool`1::m_MaxSize
	int32_t ___m_MaxSize_1;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E, ___m_Stack_0)); }
	inline Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_MaxSize_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E, ___m_MaxSize_1)); }
	inline int32_t get_m_MaxSize_1() const { return ___m_MaxSize_1; }
	inline int32_t* get_address_of_m_MaxSize_1() { return &___m_MaxSize_1; }
	inline void set_m_MaxSize_1(int32_t value)
	{
		___m_MaxSize_1 = value;
	}
};


// UnityEngine.UIElements.PointerId
struct  PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C  : public RuntimeObject
{
public:

public:
};

struct PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields
{
public:
	// System.Int32 UnityEngine.UIElements.PointerId::maxPointers
	int32_t ___maxPointers_0;
	// System.Int32 UnityEngine.UIElements.PointerId::invalidPointerId
	int32_t ___invalidPointerId_1;
	// System.Int32 UnityEngine.UIElements.PointerId::mousePointerId
	int32_t ___mousePointerId_2;
	// System.Int32 UnityEngine.UIElements.PointerId::touchPointerIdBase
	int32_t ___touchPointerIdBase_3;
	// System.Int32 UnityEngine.UIElements.PointerId::touchPointerCount
	int32_t ___touchPointerCount_4;
	// System.Int32 UnityEngine.UIElements.PointerId::penPointerIdBase
	int32_t ___penPointerIdBase_5;
	// System.Int32 UnityEngine.UIElements.PointerId::penPointerCount
	int32_t ___penPointerCount_6;

public:
	inline static int32_t get_offset_of_maxPointers_0() { return static_cast<int32_t>(offsetof(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields, ___maxPointers_0)); }
	inline int32_t get_maxPointers_0() const { return ___maxPointers_0; }
	inline int32_t* get_address_of_maxPointers_0() { return &___maxPointers_0; }
	inline void set_maxPointers_0(int32_t value)
	{
		___maxPointers_0 = value;
	}

	inline static int32_t get_offset_of_invalidPointerId_1() { return static_cast<int32_t>(offsetof(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields, ___invalidPointerId_1)); }
	inline int32_t get_invalidPointerId_1() const { return ___invalidPointerId_1; }
	inline int32_t* get_address_of_invalidPointerId_1() { return &___invalidPointerId_1; }
	inline void set_invalidPointerId_1(int32_t value)
	{
		___invalidPointerId_1 = value;
	}

	inline static int32_t get_offset_of_mousePointerId_2() { return static_cast<int32_t>(offsetof(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields, ___mousePointerId_2)); }
	inline int32_t get_mousePointerId_2() const { return ___mousePointerId_2; }
	inline int32_t* get_address_of_mousePointerId_2() { return &___mousePointerId_2; }
	inline void set_mousePointerId_2(int32_t value)
	{
		___mousePointerId_2 = value;
	}

	inline static int32_t get_offset_of_touchPointerIdBase_3() { return static_cast<int32_t>(offsetof(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields, ___touchPointerIdBase_3)); }
	inline int32_t get_touchPointerIdBase_3() const { return ___touchPointerIdBase_3; }
	inline int32_t* get_address_of_touchPointerIdBase_3() { return &___touchPointerIdBase_3; }
	inline void set_touchPointerIdBase_3(int32_t value)
	{
		___touchPointerIdBase_3 = value;
	}

	inline static int32_t get_offset_of_touchPointerCount_4() { return static_cast<int32_t>(offsetof(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields, ___touchPointerCount_4)); }
	inline int32_t get_touchPointerCount_4() const { return ___touchPointerCount_4; }
	inline int32_t* get_address_of_touchPointerCount_4() { return &___touchPointerCount_4; }
	inline void set_touchPointerCount_4(int32_t value)
	{
		___touchPointerCount_4 = value;
	}

	inline static int32_t get_offset_of_penPointerIdBase_5() { return static_cast<int32_t>(offsetof(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields, ___penPointerIdBase_5)); }
	inline int32_t get_penPointerIdBase_5() const { return ___penPointerIdBase_5; }
	inline int32_t* get_address_of_penPointerIdBase_5() { return &___penPointerIdBase_5; }
	inline void set_penPointerIdBase_5(int32_t value)
	{
		___penPointerIdBase_5 = value;
	}

	inline static int32_t get_offset_of_penPointerCount_6() { return static_cast<int32_t>(offsetof(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields, ___penPointerCount_6)); }
	inline int32_t get_penPointerCount_6() const { return ___penPointerCount_6; }
	inline int32_t* get_address_of_penPointerCount_6() { return &___penPointerCount_6; }
	inline void set_penPointerCount_6(int32_t value)
	{
		___penPointerCount_6 = value;
	}
};


// UnityEngine.UIElements.PointerType
struct  PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB  : public RuntimeObject
{
public:

public:
};

struct PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_StaticFields
{
public:
	// System.String UnityEngine.UIElements.PointerType::mouse
	String_t* ___mouse_0;
	// System.String UnityEngine.UIElements.PointerType::touch
	String_t* ___touch_1;
	// System.String UnityEngine.UIElements.PointerType::pen
	String_t* ___pen_2;
	// System.String UnityEngine.UIElements.PointerType::unknown
	String_t* ___unknown_3;

public:
	inline static int32_t get_offset_of_mouse_0() { return static_cast<int32_t>(offsetof(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_StaticFields, ___mouse_0)); }
	inline String_t* get_mouse_0() const { return ___mouse_0; }
	inline String_t** get_address_of_mouse_0() { return &___mouse_0; }
	inline void set_mouse_0(String_t* value)
	{
		___mouse_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouse_0), (void*)value);
	}

	inline static int32_t get_offset_of_touch_1() { return static_cast<int32_t>(offsetof(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_StaticFields, ___touch_1)); }
	inline String_t* get_touch_1() const { return ___touch_1; }
	inline String_t** get_address_of_touch_1() { return &___touch_1; }
	inline void set_touch_1(String_t* value)
	{
		___touch_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___touch_1), (void*)value);
	}

	inline static int32_t get_offset_of_pen_2() { return static_cast<int32_t>(offsetof(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_StaticFields, ___pen_2)); }
	inline String_t* get_pen_2() const { return ___pen_2; }
	inline String_t** get_address_of_pen_2() { return &___pen_2; }
	inline void set_pen_2(String_t* value)
	{
		___pen_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pen_2), (void*)value);
	}

	inline static int32_t get_offset_of_unknown_3() { return static_cast<int32_t>(offsetof(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_StaticFields, ___unknown_3)); }
	inline String_t* get_unknown_3() const { return ___unknown_3; }
	inline String_t** get_address_of_unknown_3() { return &___unknown_3; }
	inline void set_unknown_3(String_t* value)
	{
		___unknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unknown_3), (void*)value);
	}
};


// UnityEngine.UIElements.PropagationPaths
struct  PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.PropagationPaths::trickleDownPath
	List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * ___trickleDownPath_1;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.PropagationPaths::targetElements
	List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * ___targetElements_2;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.PropagationPaths::bubbleUpPath
	List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * ___bubbleUpPath_3;

public:
	inline static int32_t get_offset_of_trickleDownPath_1() { return static_cast<int32_t>(offsetof(PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D, ___trickleDownPath_1)); }
	inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * get_trickleDownPath_1() const { return ___trickleDownPath_1; }
	inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 ** get_address_of_trickleDownPath_1() { return &___trickleDownPath_1; }
	inline void set_trickleDownPath_1(List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * value)
	{
		___trickleDownPath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trickleDownPath_1), (void*)value);
	}

	inline static int32_t get_offset_of_targetElements_2() { return static_cast<int32_t>(offsetof(PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D, ___targetElements_2)); }
	inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * get_targetElements_2() const { return ___targetElements_2; }
	inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 ** get_address_of_targetElements_2() { return &___targetElements_2; }
	inline void set_targetElements_2(List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * value)
	{
		___targetElements_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetElements_2), (void*)value);
	}

	inline static int32_t get_offset_of_bubbleUpPath_3() { return static_cast<int32_t>(offsetof(PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D, ___bubbleUpPath_3)); }
	inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * get_bubbleUpPath_3() const { return ___bubbleUpPath_3; }
	inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 ** get_address_of_bubbleUpPath_3() { return &___bubbleUpPath_3; }
	inline void set_bubbleUpPath_3(List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * value)
	{
		___bubbleUpPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bubbleUpPath_3), (void*)value);
	}
};

struct PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D_StaticFields
{
public:
	// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.PropagationPaths> UnityEngine.UIElements.PropagationPaths::s_Pool
	ObjectPool_1_t693D29CF21941A04E78A1458107B6C3941601A8A * ___s_Pool_0;

public:
	inline static int32_t get_offset_of_s_Pool_0() { return static_cast<int32_t>(offsetof(PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D_StaticFields, ___s_Pool_0)); }
	inline ObjectPool_1_t693D29CF21941A04E78A1458107B6C3941601A8A * get_s_Pool_0() const { return ___s_Pool_0; }
	inline ObjectPool_1_t693D29CF21941A04E78A1458107B6C3941601A8A ** get_address_of_s_Pool_0() { return &___s_Pool_0; }
	inline void set_s_Pool_0(ObjectPool_1_t693D29CF21941A04E78A1458107B6C3941601A8A * value)
	{
		___s_Pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_0), (void*)value);
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.PropertyName
struct  PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.UI.CoroutineTween.FloatTween
struct  FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A 
{
public:
	// UnityEngine.UI.CoroutineTween.FloatTween_FloatTweenCallback UnityEngine.UI.CoroutineTween.FloatTween::m_Target
	FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * ___m_Target_0;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_StartValue
	float ___m_StartValue_1;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_TargetValue
	float ___m_TargetValue_2;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_Duration
	float ___m_Duration_3;
	// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_Target_0)); }
	inline FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * get_m_Target_0() const { return ___m_Target_0; }
	inline FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartValue_1() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_StartValue_1)); }
	inline float get_m_StartValue_1() const { return ___m_StartValue_1; }
	inline float* get_address_of_m_StartValue_1() { return &___m_StartValue_1; }
	inline void set_m_StartValue_1(float value)
	{
		___m_StartValue_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetValue_2() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_TargetValue_2)); }
	inline float get_m_TargetValue_2() const { return ___m_TargetValue_2; }
	inline float* get_address_of_m_TargetValue_2() { return &___m_TargetValue_2; }
	inline void set_m_TargetValue_2(float value)
	{
		___m_TargetValue_2 = value;
	}

	inline static int32_t get_offset_of_m_Duration_3() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_Duration_3)); }
	inline float get_m_Duration_3() const { return ___m_Duration_3; }
	inline float* get_address_of_m_Duration_3() { return &___m_Duration_3; }
	inline void set_m_Duration_3(float value)
	{
		___m_Duration_3 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_4() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_IgnoreTimeScale_4)); }
	inline bool get_m_IgnoreTimeScale_4() const { return ___m_IgnoreTimeScale_4; }
	inline bool* get_address_of_m_IgnoreTimeScale_4() { return &___m_IgnoreTimeScale_4; }
	inline void set_m_IgnoreTimeScale_4(bool value)
	{
		___m_IgnoreTimeScale_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshaled_pinvoke
{
	FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshaled_com
{
	FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};

// UnityEngine.UIElements.ComputedStyle
struct  ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91 
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ComputedStyle::m_Element
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_Element_0;

public:
	inline static int32_t get_offset_of_m_Element_0() { return static_cast<int32_t>(offsetof(ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91, ___m_Element_0)); }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * get_m_Element_0() const { return ___m_Element_0; }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 ** get_address_of_m_Element_0() { return &___m_Element_0; }
	inline void set_m_Element_0(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * value)
	{
		___m_Element_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Element_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91_marshaled_pinvoke
{
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_Element_0;
};
// Native definition for COM marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91_marshaled_com
{
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_Element_0;
};

// UnityEngine.UIElements.Focusable
struct  Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B  : public CallbackEventHandler_t3B7336D446FAD9009A9C1DA1B793885F28D214EB
{
public:
	// System.Boolean UnityEngine.UIElements.Focusable::<focusable>k__BackingField
	bool ___U3CfocusableU3Ek__BackingField_1;
	// System.Boolean UnityEngine.UIElements.Focusable::isIMGUIContainer
	bool ___isIMGUIContainer_2;

public:
	inline static int32_t get_offset_of_U3CfocusableU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B, ___U3CfocusableU3Ek__BackingField_1)); }
	inline bool get_U3CfocusableU3Ek__BackingField_1() const { return ___U3CfocusableU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CfocusableU3Ek__BackingField_1() { return &___U3CfocusableU3Ek__BackingField_1; }
	inline void set_U3CfocusableU3Ek__BackingField_1(bool value)
	{
		___U3CfocusableU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_isIMGUIContainer_2() { return static_cast<int32_t>(offsetof(Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B, ___isIMGUIContainer_2)); }
	inline bool get_isIMGUIContainer_2() const { return ___isIMGUIContainer_2; }
	inline bool* get_address_of_isIMGUIContainer_2() { return &___isIMGUIContainer_2; }
	inline void set_isIMGUIContainer_2(bool value)
	{
		___isIMGUIContainer_2 = value;
	}
};


// UnityEngine.UIElements.VisualElement_Hierarchy
struct  Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F 
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement_Hierarchy::m_Owner
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_Owner_0;

public:
	inline static int32_t get_offset_of_m_Owner_0() { return static_cast<int32_t>(offsetof(Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F, ___m_Owner_0)); }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * get_m_Owner_0() const { return ___m_Owner_0; }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 ** get_address_of_m_Owner_0() { return &___m_Owner_0; }
	inline void set_m_Owner_0(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * value)
	{
		___m_Owner_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Owner_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F_marshaled_pinvoke
{
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_Owner_0;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F_marshaled_com
{
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_Owner_0;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Event
struct  Event_t187FF6A6B357447B83EC2064823EE0AEC5263210  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Event::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_StaticFields
{
public:
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___s_MasterEvent_2;

public:
	inline static int32_t get_offset_of_s_Current_1() { return static_cast<int32_t>(offsetof(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_StaticFields, ___s_Current_1)); }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * get_s_Current_1() const { return ___s_Current_1; }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 ** get_address_of_s_Current_1() { return &___s_Current_1; }
	inline void set_s_Current_1(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * value)
	{
		___s_Current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Current_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_MasterEvent_2() { return static_cast<int32_t>(offsetof(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_StaticFields, ___s_MasterEvent_2)); }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * get_s_MasterEvent_2() const { return ___s_MasterEvent_2; }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 ** get_address_of_s_MasterEvent_2() { return &___s_MasterEvent_2; }
	inline void set_s_MasterEvent_2(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * value)
	{
		___s_MasterEvent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MasterEvent_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventModifiers
struct  EventModifiers_tC34E3018F3697001F894187AF6E9E63D7E203061 
{
public:
	// System.Int32 UnityEngine.EventModifiers::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventModifiers_tC34E3018F3697001F894187AF6E9E63D7E203061, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventType
struct  EventType_t3D3937E705A4506226002DAB22071B7B181DA57B 
{
public:
	// System.Int32 UnityEngine.EventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventType_t3D3937E705A4506226002DAB22071B7B181DA57B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.PointerType
struct  PointerType_tFE78E7B29562C9813141CA1708800D39B0F3931D 
{
public:
	// System.Int32 UnityEngine.PointerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PointerType_tFE78E7B29562C9813141CA1708800D39B0F3931D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>
struct  VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431  : public VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431, ___m_Value_2)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_Value_2() const { return ___m_Value_2; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenMode
struct  ColorTweenMode_tDCE018D37330F576ACCD00D16CAF91AE55315F2F 
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorTweenMode_tDCE018D37330F576ACCD00D16CAF91AE55315F2F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>
struct  U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::tweenInfo
	FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  ___tweenInfo_2;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_tweenInfo_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E, ___tweenInfo_2)); }
	inline FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  get_tweenInfo_2() const { return ___tweenInfo_2; }
	inline FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * get_address_of_tweenInfo_2() { return &___tweenInfo_2; }
	inline void set_tweenInfo_2(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  value)
	{
		___tweenInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tweenInfo_2))->___m_Target_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E, ___U3CelapsedTimeU3E5__2_3)); }
	inline float get_U3CelapsedTimeU3E5__2_3() const { return ___U3CelapsedTimeU3E5__2_3; }
	inline float* get_address_of_U3CelapsedTimeU3E5__2_3() { return &___U3CelapsedTimeU3E5__2_3; }
	inline void set_U3CelapsedTimeU3E5__2_3(float value)
	{
		___U3CelapsedTimeU3E5__2_3 = value;
	}
};


// UnityEngine.UIElements.EventBase_EventPropagation
struct  EventPropagation_tA9A7EB847940ABD70842FA9EBA217C32F977DA20 
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase_EventPropagation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventPropagation_tA9A7EB847940ABD70842FA9EBA217C32F977DA20, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.EventBase_LifeCycleStatus
struct  LifeCycleStatus_t261998375F205A68CDAE646A82B1A16389926883 
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase_LifeCycleStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LifeCycleStatus_t261998375F205A68CDAE646A82B1A16389926883, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.PickingMode
struct  PickingMode_t50B176123A8C1CFF46840654D7AFA06EC6EDD529 
{
public:
	// System.Int32 UnityEngine.UIElements.PickingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PickingMode_t50B176123A8C1CFF46840654D7AFA06EC6EDD529, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.PropagationPhase
struct  PropagationPhase_tF216B8A0984294D04F73CC36443D006EB659D9FC 
{
public:
	// System.Int32 UnityEngine.UIElements.PropagationPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropagationPhase_tF216B8A0984294D04F73CC36443D006EB659D9FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.PseudoStates
struct  PseudoStates_t047BCA0D8B56DC2E0A08F001C9C96BB82BDD9545 
{
public:
	// System.Int32 UnityEngine.UIElements.PseudoStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PseudoStates_t047BCA0D8B56DC2E0A08F001C9C96BB82BDD9545, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.StyleKeyword
struct  StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560 
{
public:
	// System.Int32 UnityEngine.UIElements.StyleKeyword::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.UI.CoroutineTween.ColorTween
struct  ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 
{
public:
	// UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenCallback UnityEngine.UI.CoroutineTween.ColorTween::m_Target
	ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * ___m_Target_0;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_StartColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_StartColor_1;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_TargetColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_TargetColor_2;
	// UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenMode UnityEngine.UI.CoroutineTween.ColorTween::m_TweenMode
	int32_t ___m_TweenMode_3;
	// System.Single UnityEngine.UI.CoroutineTween.ColorTween::m_Duration
	float ___m_Duration_4;
	// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_5;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_Target_0)); }
	inline ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * get_m_Target_0() const { return ___m_Target_0; }
	inline ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartColor_1() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_StartColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_StartColor_1() const { return ___m_StartColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_StartColor_1() { return &___m_StartColor_1; }
	inline void set_m_StartColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_StartColor_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetColor_2() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_TargetColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_TargetColor_2() const { return ___m_TargetColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_TargetColor_2() { return &___m_TargetColor_2; }
	inline void set_m_TargetColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_TargetColor_2 = value;
	}

	inline static int32_t get_offset_of_m_TweenMode_3() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_TweenMode_3)); }
	inline int32_t get_m_TweenMode_3() const { return ___m_TweenMode_3; }
	inline int32_t* get_address_of_m_TweenMode_3() { return &___m_TweenMode_3; }
	inline void set_m_TweenMode_3(int32_t value)
	{
		___m_TweenMode_3 = value;
	}

	inline static int32_t get_offset_of_m_Duration_4() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_Duration_4)); }
	inline float get_m_Duration_4() const { return ___m_Duration_4; }
	inline float* get_address_of_m_Duration_4() { return &___m_Duration_4; }
	inline void set_m_Duration_4(float value)
	{
		___m_Duration_4 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_5() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_IgnoreTimeScale_5)); }
	inline bool get_m_IgnoreTimeScale_5() const { return ___m_IgnoreTimeScale_5; }
	inline bool* get_address_of_m_IgnoreTimeScale_5() { return &___m_IgnoreTimeScale_5; }
	inline void set_m_IgnoreTimeScale_5(bool value)
	{
		___m_IgnoreTimeScale_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshaled_pinvoke
{
	ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * ___m_Target_0;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_StartColor_1;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshaled_com
{
	ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * ___m_Target_0;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_StartColor_1;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};

// UnityEngine.UIElements.EventBase
struct  EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD  : public RuntimeObject
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase::<timestamp>k__BackingField
	int64_t ___U3CtimestampU3Ek__BackingField_2;
	// System.UInt64 UnityEngine.UIElements.EventBase::<eventId>k__BackingField
	uint64_t ___U3CeventIdU3Ek__BackingField_3;
	// System.UInt64 UnityEngine.UIElements.EventBase::<triggerEventId>k__BackingField
	uint64_t ___U3CtriggerEventIdU3Ek__BackingField_4;
	// UnityEngine.UIElements.EventBase_EventPropagation UnityEngine.UIElements.EventBase::<propagation>k__BackingField
	int32_t ___U3CpropagationU3Ek__BackingField_5;
	// UnityEngine.UIElements.PropagationPaths UnityEngine.UIElements.EventBase::m_Path
	PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D * ___m_Path_6;
	// UnityEngine.UIElements.EventBase_LifeCycleStatus UnityEngine.UIElements.EventBase::<lifeCycleStatus>k__BackingField
	int32_t ___U3ClifeCycleStatusU3Ek__BackingField_7;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::<leafTarget>k__BackingField
	RuntimeObject* ___U3CleafTargetU3Ek__BackingField_8;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_Target
	RuntimeObject* ___m_Target_9;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler> UnityEngine.UIElements.EventBase::<skipElements>k__BackingField
	List_1_tC6DEF7083E8206203302B1B25E23947E49BBD537 * ___U3CskipElementsU3Ek__BackingField_10;
	// UnityEngine.UIElements.PropagationPhase UnityEngine.UIElements.EventBase::<propagationPhase>k__BackingField
	int32_t ___U3CpropagationPhaseU3Ek__BackingField_11;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_CurrentTarget
	RuntimeObject* ___m_CurrentTarget_12;
	// UnityEngine.Event UnityEngine.UIElements.EventBase::m_ImguiEvent
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___m_ImguiEvent_13;
	// UnityEngine.Vector2 UnityEngine.UIElements.EventBase::<originalMousePosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CoriginalMousePositionU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CtimestampU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CtimestampU3Ek__BackingField_2)); }
	inline int64_t get_U3CtimestampU3Ek__BackingField_2() const { return ___U3CtimestampU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CtimestampU3Ek__BackingField_2() { return &___U3CtimestampU3Ek__BackingField_2; }
	inline void set_U3CtimestampU3Ek__BackingField_2(int64_t value)
	{
		___U3CtimestampU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CeventIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CeventIdU3Ek__BackingField_3)); }
	inline uint64_t get_U3CeventIdU3Ek__BackingField_3() const { return ___U3CeventIdU3Ek__BackingField_3; }
	inline uint64_t* get_address_of_U3CeventIdU3Ek__BackingField_3() { return &___U3CeventIdU3Ek__BackingField_3; }
	inline void set_U3CeventIdU3Ek__BackingField_3(uint64_t value)
	{
		___U3CeventIdU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CtriggerEventIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CtriggerEventIdU3Ek__BackingField_4)); }
	inline uint64_t get_U3CtriggerEventIdU3Ek__BackingField_4() const { return ___U3CtriggerEventIdU3Ek__BackingField_4; }
	inline uint64_t* get_address_of_U3CtriggerEventIdU3Ek__BackingField_4() { return &___U3CtriggerEventIdU3Ek__BackingField_4; }
	inline void set_U3CtriggerEventIdU3Ek__BackingField_4(uint64_t value)
	{
		___U3CtriggerEventIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CpropagationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CpropagationU3Ek__BackingField_5)); }
	inline int32_t get_U3CpropagationU3Ek__BackingField_5() const { return ___U3CpropagationU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CpropagationU3Ek__BackingField_5() { return &___U3CpropagationU3Ek__BackingField_5; }
	inline void set_U3CpropagationU3Ek__BackingField_5(int32_t value)
	{
		___U3CpropagationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_m_Path_6() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___m_Path_6)); }
	inline PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D * get_m_Path_6() const { return ___m_Path_6; }
	inline PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D ** get_address_of_m_Path_6() { return &___m_Path_6; }
	inline void set_m_Path_6(PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D * value)
	{
		___m_Path_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClifeCycleStatusU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3ClifeCycleStatusU3Ek__BackingField_7)); }
	inline int32_t get_U3ClifeCycleStatusU3Ek__BackingField_7() const { return ___U3ClifeCycleStatusU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3ClifeCycleStatusU3Ek__BackingField_7() { return &___U3ClifeCycleStatusU3Ek__BackingField_7; }
	inline void set_U3ClifeCycleStatusU3Ek__BackingField_7(int32_t value)
	{
		___U3ClifeCycleStatusU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CleafTargetU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CleafTargetU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CleafTargetU3Ek__BackingField_8() const { return ___U3CleafTargetU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CleafTargetU3Ek__BackingField_8() { return &___U3CleafTargetU3Ek__BackingField_8; }
	inline void set_U3CleafTargetU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CleafTargetU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleafTargetU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Target_9() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___m_Target_9)); }
	inline RuntimeObject* get_m_Target_9() const { return ___m_Target_9; }
	inline RuntimeObject** get_address_of_m_Target_9() { return &___m_Target_9; }
	inline void set_m_Target_9(RuntimeObject* value)
	{
		___m_Target_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CskipElementsU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CskipElementsU3Ek__BackingField_10)); }
	inline List_1_tC6DEF7083E8206203302B1B25E23947E49BBD537 * get_U3CskipElementsU3Ek__BackingField_10() const { return ___U3CskipElementsU3Ek__BackingField_10; }
	inline List_1_tC6DEF7083E8206203302B1B25E23947E49BBD537 ** get_address_of_U3CskipElementsU3Ek__BackingField_10() { return &___U3CskipElementsU3Ek__BackingField_10; }
	inline void set_U3CskipElementsU3Ek__BackingField_10(List_1_tC6DEF7083E8206203302B1B25E23947E49BBD537 * value)
	{
		___U3CskipElementsU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CskipElementsU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpropagationPhaseU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CpropagationPhaseU3Ek__BackingField_11)); }
	inline int32_t get_U3CpropagationPhaseU3Ek__BackingField_11() const { return ___U3CpropagationPhaseU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpropagationPhaseU3Ek__BackingField_11() { return &___U3CpropagationPhaseU3Ek__BackingField_11; }
	inline void set_U3CpropagationPhaseU3Ek__BackingField_11(int32_t value)
	{
		___U3CpropagationPhaseU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_m_CurrentTarget_12() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___m_CurrentTarget_12)); }
	inline RuntimeObject* get_m_CurrentTarget_12() const { return ___m_CurrentTarget_12; }
	inline RuntimeObject** get_address_of_m_CurrentTarget_12() { return &___m_CurrentTarget_12; }
	inline void set_m_CurrentTarget_12(RuntimeObject* value)
	{
		___m_CurrentTarget_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentTarget_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ImguiEvent_13() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___m_ImguiEvent_13)); }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * get_m_ImguiEvent_13() const { return ___m_ImguiEvent_13; }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 ** get_address_of_m_ImguiEvent_13() { return &___m_ImguiEvent_13; }
	inline void set_m_ImguiEvent_13(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * value)
	{
		___m_ImguiEvent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ImguiEvent_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoriginalMousePositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CoriginalMousePositionU3Ek__BackingField_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CoriginalMousePositionU3Ek__BackingField_14() const { return ___U3CoriginalMousePositionU3Ek__BackingField_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CoriginalMousePositionU3Ek__BackingField_14() { return &___U3CoriginalMousePositionU3Ek__BackingField_14; }
	inline void set_U3CoriginalMousePositionU3Ek__BackingField_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CoriginalMousePositionU3Ek__BackingField_14 = value;
	}
};

struct EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase::s_LastTypeId
	int64_t ___s_LastTypeId_0;
	// System.UInt64 UnityEngine.UIElements.EventBase::s_NextEventId
	uint64_t ___s_NextEventId_1;

public:
	inline static int32_t get_offset_of_s_LastTypeId_0() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_StaticFields, ___s_LastTypeId_0)); }
	inline int64_t get_s_LastTypeId_0() const { return ___s_LastTypeId_0; }
	inline int64_t* get_address_of_s_LastTypeId_0() { return &___s_LastTypeId_0; }
	inline void set_s_LastTypeId_0(int64_t value)
	{
		___s_LastTypeId_0 = value;
	}

	inline static int32_t get_offset_of_s_NextEventId_1() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_StaticFields, ___s_NextEventId_1)); }
	inline uint64_t get_s_NextEventId_1() const { return ___s_NextEventId_1; }
	inline uint64_t* get_address_of_s_NextEventId_1() { return &___s_NextEventId_1; }
	inline void set_s_NextEventId_1(uint64_t value)
	{
		___s_NextEventId_1 = value;
	}
};


// UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>
struct  StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;
	// System.Int32 UnityEngine.UIElements.StyleEnum`1::m_Specificity
	int32_t ___m_Specificity_2;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_Specificity_2() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Specificity_2)); }
	inline int32_t get_m_Specificity_2() const { return ___m_Specificity_2; }
	inline int32_t* get_address_of_m_Specificity_2() { return &___m_Specificity_2; }
	inline void set_m_Specificity_2(int32_t value)
	{
		___m_Specificity_2 = value;
	}
};


// UnityEngine.UIElements.VisualElement
struct  VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57  : public Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B
{
public:
	// System.Boolean UnityEngine.UIElements.VisualElement::<isCompositeRoot>k__BackingField
	bool ___U3CisCompositeRootU3Ek__BackingField_3;
	// UnityEngine.Vector3 UnityEngine.UIElements.VisualElement::m_Position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Position_7;
	// UnityEngine.Quaternion UnityEngine.UIElements.VisualElement::m_Rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_Rotation_8;
	// UnityEngine.Vector3 UnityEngine.UIElements.VisualElement::m_Scale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Scale_9;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isLayoutManual>k__BackingField
	bool ___U3CisLayoutManualU3Ek__BackingField_10;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_Layout
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_Layout_11;
	// System.Boolean UnityEngine.UIElements.VisualElement::isBoundingBoxDirty
	bool ___isBoundingBoxDirty_12;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_BoundingBox
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_BoundingBox_13;
	// System.Boolean UnityEngine.UIElements.VisualElement::isWorldBoundingBoxDirty
	bool ___isWorldBoundingBoxDirty_14;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldBoundingBox
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_WorldBoundingBox_15;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isWorldTransformDirty>k__BackingField
	bool ___U3CisWorldTransformDirtyU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isWorldTransformInverseDirty>k__BackingField
	bool ___U3CisWorldTransformInverseDirtyU3Ek__BackingField_17;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformCache
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_WorldTransformCache_18;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformInverseCache
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_WorldTransformInverseCache_19;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::m_PseudoStates
	int32_t ___m_PseudoStates_21;
	// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::<pickingMode>k__BackingField
	int32_t ___U3CpickingModeU3Ek__BackingField_22;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::<yogaNode>k__BackingField
	YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___U3CyogaNodeU3Ek__BackingField_23;
	// UnityEngine.UIElements.StyleSheets.VisualElementStylesData UnityEngine.UIElements.VisualElement::m_Style
	VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867 * ___m_Style_24;
	// UnityEngine.UIElements.StyleSheets.InheritedStylesData UnityEngine.UIElements.VisualElement::m_InheritedStylesData
	InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E * ___m_InheritedStylesData_25;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::<computedStyle>k__BackingField
	ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91  ___U3CcomputedStyleU3Ek__BackingField_26;
	// System.Int32 UnityEngine.UIElements.VisualElement::imguiContainerDescendantCount
	int32_t ___imguiContainerDescendantCount_27;
	// UnityEngine.UIElements.VisualElement_Hierarchy UnityEngine.UIElements.VisualElement::<hierarchy>k__BackingField
	Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  ___U3ChierarchyU3Ek__BackingField_28;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_PhysicalParent
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_PhysicalParent_29;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::m_Children
	List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * ___m_Children_31;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::<elementPanel>k__BackingField
	BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * ___U3CelementPanelU3Ek__BackingField_32;

public:
	inline static int32_t get_offset_of_U3CisCompositeRootU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CisCompositeRootU3Ek__BackingField_3)); }
	inline bool get_U3CisCompositeRootU3Ek__BackingField_3() const { return ___U3CisCompositeRootU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CisCompositeRootU3Ek__BackingField_3() { return &___U3CisCompositeRootU3Ek__BackingField_3; }
	inline void set_U3CisCompositeRootU3Ek__BackingField_3(bool value)
	{
		___U3CisCompositeRootU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_m_Position_7() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_Position_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Position_7() const { return ___m_Position_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Position_7() { return &___m_Position_7; }
	inline void set_m_Position_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Position_7 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_8() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_Rotation_8)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_Rotation_8() const { return ___m_Rotation_8; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_Rotation_8() { return &___m_Rotation_8; }
	inline void set_m_Rotation_8(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_Rotation_8 = value;
	}

	inline static int32_t get_offset_of_m_Scale_9() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_Scale_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Scale_9() const { return ___m_Scale_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Scale_9() { return &___m_Scale_9; }
	inline void set_m_Scale_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Scale_9 = value;
	}

	inline static int32_t get_offset_of_U3CisLayoutManualU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CisLayoutManualU3Ek__BackingField_10)); }
	inline bool get_U3CisLayoutManualU3Ek__BackingField_10() const { return ___U3CisLayoutManualU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CisLayoutManualU3Ek__BackingField_10() { return &___U3CisLayoutManualU3Ek__BackingField_10; }
	inline void set_U3CisLayoutManualU3Ek__BackingField_10(bool value)
	{
		___U3CisLayoutManualU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_m_Layout_11() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_Layout_11)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_Layout_11() const { return ___m_Layout_11; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_Layout_11() { return &___m_Layout_11; }
	inline void set_m_Layout_11(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_Layout_11 = value;
	}

	inline static int32_t get_offset_of_isBoundingBoxDirty_12() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___isBoundingBoxDirty_12)); }
	inline bool get_isBoundingBoxDirty_12() const { return ___isBoundingBoxDirty_12; }
	inline bool* get_address_of_isBoundingBoxDirty_12() { return &___isBoundingBoxDirty_12; }
	inline void set_isBoundingBoxDirty_12(bool value)
	{
		___isBoundingBoxDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_BoundingBox_13() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_BoundingBox_13)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_BoundingBox_13() const { return ___m_BoundingBox_13; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_BoundingBox_13() { return &___m_BoundingBox_13; }
	inline void set_m_BoundingBox_13(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_BoundingBox_13 = value;
	}

	inline static int32_t get_offset_of_isWorldBoundingBoxDirty_14() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___isWorldBoundingBoxDirty_14)); }
	inline bool get_isWorldBoundingBoxDirty_14() const { return ___isWorldBoundingBoxDirty_14; }
	inline bool* get_address_of_isWorldBoundingBoxDirty_14() { return &___isWorldBoundingBoxDirty_14; }
	inline void set_isWorldBoundingBoxDirty_14(bool value)
	{
		___isWorldBoundingBoxDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_WorldBoundingBox_15() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_WorldBoundingBox_15)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_WorldBoundingBox_15() const { return ___m_WorldBoundingBox_15; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_WorldBoundingBox_15() { return &___m_WorldBoundingBox_15; }
	inline void set_m_WorldBoundingBox_15(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_WorldBoundingBox_15 = value;
	}

	inline static int32_t get_offset_of_U3CisWorldTransformDirtyU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CisWorldTransformDirtyU3Ek__BackingField_16)); }
	inline bool get_U3CisWorldTransformDirtyU3Ek__BackingField_16() const { return ___U3CisWorldTransformDirtyU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisWorldTransformDirtyU3Ek__BackingField_16() { return &___U3CisWorldTransformDirtyU3Ek__BackingField_16; }
	inline void set_U3CisWorldTransformDirtyU3Ek__BackingField_16(bool value)
	{
		___U3CisWorldTransformDirtyU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisWorldTransformInverseDirtyU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CisWorldTransformInverseDirtyU3Ek__BackingField_17)); }
	inline bool get_U3CisWorldTransformInverseDirtyU3Ek__BackingField_17() const { return ___U3CisWorldTransformInverseDirtyU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisWorldTransformInverseDirtyU3Ek__BackingField_17() { return &___U3CisWorldTransformInverseDirtyU3Ek__BackingField_17; }
	inline void set_U3CisWorldTransformInverseDirtyU3Ek__BackingField_17(bool value)
	{
		___U3CisWorldTransformInverseDirtyU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_m_WorldTransformCache_18() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_WorldTransformCache_18)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_WorldTransformCache_18() const { return ___m_WorldTransformCache_18; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_WorldTransformCache_18() { return &___m_WorldTransformCache_18; }
	inline void set_m_WorldTransformCache_18(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_WorldTransformCache_18 = value;
	}

	inline static int32_t get_offset_of_m_WorldTransformInverseCache_19() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_WorldTransformInverseCache_19)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_WorldTransformInverseCache_19() const { return ___m_WorldTransformInverseCache_19; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_WorldTransformInverseCache_19() { return &___m_WorldTransformInverseCache_19; }
	inline void set_m_WorldTransformInverseCache_19(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_WorldTransformInverseCache_19 = value;
	}

	inline static int32_t get_offset_of_m_PseudoStates_21() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_PseudoStates_21)); }
	inline int32_t get_m_PseudoStates_21() const { return ___m_PseudoStates_21; }
	inline int32_t* get_address_of_m_PseudoStates_21() { return &___m_PseudoStates_21; }
	inline void set_m_PseudoStates_21(int32_t value)
	{
		___m_PseudoStates_21 = value;
	}

	inline static int32_t get_offset_of_U3CpickingModeU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CpickingModeU3Ek__BackingField_22)); }
	inline int32_t get_U3CpickingModeU3Ek__BackingField_22() const { return ___U3CpickingModeU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CpickingModeU3Ek__BackingField_22() { return &___U3CpickingModeU3Ek__BackingField_22; }
	inline void set_U3CpickingModeU3Ek__BackingField_22(int32_t value)
	{
		___U3CpickingModeU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CyogaNodeU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CyogaNodeU3Ek__BackingField_23)); }
	inline YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * get_U3CyogaNodeU3Ek__BackingField_23() const { return ___U3CyogaNodeU3Ek__BackingField_23; }
	inline YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C ** get_address_of_U3CyogaNodeU3Ek__BackingField_23() { return &___U3CyogaNodeU3Ek__BackingField_23; }
	inline void set_U3CyogaNodeU3Ek__BackingField_23(YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * value)
	{
		___U3CyogaNodeU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyogaNodeU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_Style_24() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_Style_24)); }
	inline VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867 * get_m_Style_24() const { return ___m_Style_24; }
	inline VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867 ** get_address_of_m_Style_24() { return &___m_Style_24; }
	inline void set_m_Style_24(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867 * value)
	{
		___m_Style_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Style_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_InheritedStylesData_25() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_InheritedStylesData_25)); }
	inline InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E * get_m_InheritedStylesData_25() const { return ___m_InheritedStylesData_25; }
	inline InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E ** get_address_of_m_InheritedStylesData_25() { return &___m_InheritedStylesData_25; }
	inline void set_m_InheritedStylesData_25(InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E * value)
	{
		___m_InheritedStylesData_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InheritedStylesData_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcomputedStyleU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CcomputedStyleU3Ek__BackingField_26)); }
	inline ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91  get_U3CcomputedStyleU3Ek__BackingField_26() const { return ___U3CcomputedStyleU3Ek__BackingField_26; }
	inline ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91 * get_address_of_U3CcomputedStyleU3Ek__BackingField_26() { return &___U3CcomputedStyleU3Ek__BackingField_26; }
	inline void set_U3CcomputedStyleU3Ek__BackingField_26(ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91  value)
	{
		___U3CcomputedStyleU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcomputedStyleU3Ek__BackingField_26))->___m_Element_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_imguiContainerDescendantCount_27() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___imguiContainerDescendantCount_27)); }
	inline int32_t get_imguiContainerDescendantCount_27() const { return ___imguiContainerDescendantCount_27; }
	inline int32_t* get_address_of_imguiContainerDescendantCount_27() { return &___imguiContainerDescendantCount_27; }
	inline void set_imguiContainerDescendantCount_27(int32_t value)
	{
		___imguiContainerDescendantCount_27 = value;
	}

	inline static int32_t get_offset_of_U3ChierarchyU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3ChierarchyU3Ek__BackingField_28)); }
	inline Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  get_U3ChierarchyU3Ek__BackingField_28() const { return ___U3ChierarchyU3Ek__BackingField_28; }
	inline Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F * get_address_of_U3ChierarchyU3Ek__BackingField_28() { return &___U3ChierarchyU3Ek__BackingField_28; }
	inline void set_U3ChierarchyU3Ek__BackingField_28(Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  value)
	{
		___U3ChierarchyU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3ChierarchyU3Ek__BackingField_28))->___m_Owner_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_PhysicalParent_29() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_PhysicalParent_29)); }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * get_m_PhysicalParent_29() const { return ___m_PhysicalParent_29; }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 ** get_address_of_m_PhysicalParent_29() { return &___m_PhysicalParent_29; }
	inline void set_m_PhysicalParent_29(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * value)
	{
		___m_PhysicalParent_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PhysicalParent_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Children_31() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_Children_31)); }
	inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * get_m_Children_31() const { return ___m_Children_31; }
	inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 ** get_address_of_m_Children_31() { return &___m_Children_31; }
	inline void set_m_Children_31(List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * value)
	{
		___m_Children_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Children_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CelementPanelU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CelementPanelU3Ek__BackingField_32)); }
	inline BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * get_U3CelementPanelU3Ek__BackingField_32() const { return ___U3CelementPanelU3Ek__BackingField_32; }
	inline BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 ** get_address_of_U3CelementPanelU3Ek__BackingField_32() { return &___U3CelementPanelU3Ek__BackingField_32; }
	inline void set_U3CelementPanelU3Ek__BackingField_32(BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * value)
	{
		___U3CelementPanelU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CelementPanelU3Ek__BackingField_32), (void*)value);
	}
};

struct VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::s_EmptyClassList
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___s_EmptyClassList_4;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::userDataPropertyKey
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___userDataPropertyKey_5;
	// System.String UnityEngine.UIElements.VisualElement::disabledUssClassName
	String_t* ___disabledUssClassName_6;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::s_InfiniteRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___s_InfiniteRect_20;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::s_EmptyList
	List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * ___s_EmptyList_30;

public:
	inline static int32_t get_offset_of_s_EmptyClassList_4() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields, ___s_EmptyClassList_4)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_s_EmptyClassList_4() const { return ___s_EmptyClassList_4; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_s_EmptyClassList_4() { return &___s_EmptyClassList_4; }
	inline void set_s_EmptyClassList_4(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___s_EmptyClassList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EmptyClassList_4), (void*)value);
	}

	inline static int32_t get_offset_of_userDataPropertyKey_5() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields, ___userDataPropertyKey_5)); }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  get_userDataPropertyKey_5() const { return ___userDataPropertyKey_5; }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * get_address_of_userDataPropertyKey_5() { return &___userDataPropertyKey_5; }
	inline void set_userDataPropertyKey_5(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  value)
	{
		___userDataPropertyKey_5 = value;
	}

	inline static int32_t get_offset_of_disabledUssClassName_6() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields, ___disabledUssClassName_6)); }
	inline String_t* get_disabledUssClassName_6() const { return ___disabledUssClassName_6; }
	inline String_t** get_address_of_disabledUssClassName_6() { return &___disabledUssClassName_6; }
	inline void set_disabledUssClassName_6(String_t* value)
	{
		___disabledUssClassName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disabledUssClassName_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_InfiniteRect_20() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields, ___s_InfiniteRect_20)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_s_InfiniteRect_20() const { return ___s_InfiniteRect_20; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_s_InfiniteRect_20() { return &___s_InfiniteRect_20; }
	inline void set_s_InfiniteRect_20(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___s_InfiniteRect_20 = value;
	}

	inline static int32_t get_offset_of_s_EmptyList_30() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields, ___s_EmptyList_30)); }
	inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * get_s_EmptyList_30() const { return ___s_EmptyList_30; }
	inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 ** get_address_of_s_EmptyList_30() { return &___s_EmptyList_30; }
	inline void set_s_EmptyList_30(List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * value)
	{
		___s_EmptyList_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EmptyList_30), (void*)value);
	}
};


// System.Comparison`1<System.Object>
struct  Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4  : public MulticastDelegate_t
{
public:

public:
};


// System.NotImplementedException
struct  NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Predicate`1<System.Object>
struct  Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct  UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Object>>
struct  UnityAction_1_tDEF40749C3309C99C0622A39D22422E683051C67  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct  UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct  UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct  UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct  UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct  UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Object>
struct  UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>
struct  U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::tweenInfo
	ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  ___tweenInfo_2;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_tweenInfo_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB, ___tweenInfo_2)); }
	inline ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  get_tweenInfo_2() const { return ___tweenInfo_2; }
	inline ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * get_address_of_tweenInfo_2() { return &___tweenInfo_2; }
	inline void set_tweenInfo_2(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  value)
	{
		___tweenInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tweenInfo_2))->___m_Target_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB, ___U3CelapsedTimeU3E5__2_3)); }
	inline float get_U3CelapsedTimeU3E5__2_3() const { return ___U3CelapsedTimeU3E5__2_3; }
	inline float* get_address_of_U3CelapsedTimeU3E5__2_3() { return &___U3CelapsedTimeU3E5__2_3; }
	inline void set_U3CelapsedTimeU3E5__2_3(float value)
	{
		___U3CelapsedTimeU3E5__2_3 = value;
	}
};


// UnityEngine.UIElements.EventBase`1<System.Object>
struct  EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916  : public EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;

public:
	inline static int32_t get_offset_of_m_RefCount_17() { return static_cast<int32_t>(offsetof(EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916, ___m_RefCount_17)); }
	inline int32_t get_m_RefCount_17() const { return ___m_RefCount_17; }
	inline int32_t* get_address_of_m_RefCount_17() { return &___m_RefCount_17; }
	inline void set_m_RefCount_17(int32_t value)
	{
		___m_RefCount_17 = value;
	}
};

struct EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * ___s_Pool_16;

public:
	inline static int32_t get_offset_of_s_TypeId_15() { return static_cast<int32_t>(offsetof(EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916_StaticFields, ___s_TypeId_15)); }
	inline int64_t get_s_TypeId_15() const { return ___s_TypeId_15; }
	inline int64_t* get_address_of_s_TypeId_15() { return &___s_TypeId_15; }
	inline void set_s_TypeId_15(int64_t value)
	{
		___s_TypeId_15 = value;
	}

	inline static int32_t get_offset_of_s_Pool_16() { return static_cast<int32_t>(offsetof(EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916_StaticFields, ___s_Pool_16)); }
	inline ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * get_s_Pool_16() const { return ___s_Pool_16; }
	inline ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E ** get_address_of_s_Pool_16() { return &___s_Pool_16; }
	inline void set_s_Pool_16(ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * value)
	{
		___s_Pool_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_16), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.UIElements.CommandEventBase`1<System.Object>
struct  CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2  : public EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916
{
public:
	// System.String UnityEngine.UIElements.CommandEventBase`1::m_CommandName
	String_t* ___m_CommandName_18;

public:
	inline static int32_t get_offset_of_m_CommandName_18() { return static_cast<int32_t>(offsetof(CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2, ___m_CommandName_18)); }
	inline String_t* get_m_CommandName_18() const { return ___m_CommandName_18; }
	inline String_t** get_address_of_m_CommandName_18() { return &___m_CommandName_18; }
	inline void set_m_CommandName_18(String_t* value)
	{
		___m_CommandName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CommandName_18), (void*)value);
	}
};


// UnityEngine.UIElements.FocusEventBase`1<System.Object>
struct  FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24  : public EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916
{
public:
	// UnityEngine.UIElements.Focusable UnityEngine.UIElements.FocusEventBase`1::<relatedTarget>k__BackingField
	Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B * ___U3CrelatedTargetU3Ek__BackingField_18;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusEventBase`1::<direction>k__BackingField
	FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * ___U3CdirectionU3Ek__BackingField_19;
	// UnityEngine.UIElements.FocusController UnityEngine.UIElements.FocusEventBase`1::<focusController>k__BackingField
	FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 * ___U3CfocusControllerU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CrelatedTargetU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24, ___U3CrelatedTargetU3Ek__BackingField_18)); }
	inline Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B * get_U3CrelatedTargetU3Ek__BackingField_18() const { return ___U3CrelatedTargetU3Ek__BackingField_18; }
	inline Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B ** get_address_of_U3CrelatedTargetU3Ek__BackingField_18() { return &___U3CrelatedTargetU3Ek__BackingField_18; }
	inline void set_U3CrelatedTargetU3Ek__BackingField_18(Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B * value)
	{
		___U3CrelatedTargetU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrelatedTargetU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdirectionU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24, ___U3CdirectionU3Ek__BackingField_19)); }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * get_U3CdirectionU3Ek__BackingField_19() const { return ___U3CdirectionU3Ek__BackingField_19; }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 ** get_address_of_U3CdirectionU3Ek__BackingField_19() { return &___U3CdirectionU3Ek__BackingField_19; }
	inline void set_U3CdirectionU3Ek__BackingField_19(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * value)
	{
		___U3CdirectionU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdirectionU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfocusControllerU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24, ___U3CfocusControllerU3Ek__BackingField_20)); }
	inline FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 * get_U3CfocusControllerU3Ek__BackingField_20() const { return ___U3CfocusControllerU3Ek__BackingField_20; }
	inline FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 ** get_address_of_U3CfocusControllerU3Ek__BackingField_20() { return &___U3CfocusControllerU3Ek__BackingField_20; }
	inline void set_U3CfocusControllerU3Ek__BackingField_20(FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 * value)
	{
		___U3CfocusControllerU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfocusControllerU3Ek__BackingField_20), (void*)value);
	}
};


// UnityEngine.UIElements.KeyboardEventBase`1<System.Object>
struct  KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D  : public EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916
{
public:
	// UnityEngine.EventModifiers UnityEngine.UIElements.KeyboardEventBase`1::<modifiers>k__BackingField
	int32_t ___U3CmodifiersU3Ek__BackingField_18;
	// System.Char UnityEngine.UIElements.KeyboardEventBase`1::<character>k__BackingField
	Il2CppChar ___U3CcharacterU3Ek__BackingField_19;
	// UnityEngine.KeyCode UnityEngine.UIElements.KeyboardEventBase`1::<keyCode>k__BackingField
	int32_t ___U3CkeyCodeU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CmodifiersU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D, ___U3CmodifiersU3Ek__BackingField_18)); }
	inline int32_t get_U3CmodifiersU3Ek__BackingField_18() const { return ___U3CmodifiersU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CmodifiersU3Ek__BackingField_18() { return &___U3CmodifiersU3Ek__BackingField_18; }
	inline void set_U3CmodifiersU3Ek__BackingField_18(int32_t value)
	{
		___U3CmodifiersU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CcharacterU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D, ___U3CcharacterU3Ek__BackingField_19)); }
	inline Il2CppChar get_U3CcharacterU3Ek__BackingField_19() const { return ___U3CcharacterU3Ek__BackingField_19; }
	inline Il2CppChar* get_address_of_U3CcharacterU3Ek__BackingField_19() { return &___U3CcharacterU3Ek__BackingField_19; }
	inline void set_U3CcharacterU3Ek__BackingField_19(Il2CppChar value)
	{
		___U3CcharacterU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CkeyCodeU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D, ___U3CkeyCodeU3Ek__BackingField_20)); }
	inline int32_t get_U3CkeyCodeU3Ek__BackingField_20() const { return ___U3CkeyCodeU3Ek__BackingField_20; }
	inline int32_t* get_address_of_U3CkeyCodeU3Ek__BackingField_20() { return &___U3CkeyCodeU3Ek__BackingField_20; }
	inline void set_U3CkeyCodeU3Ek__BackingField_20(int32_t value)
	{
		___U3CkeyCodeU3Ek__BackingField_20 = value;
	}
};


// UnityEngine.UIElements.MouseEventBase`1<System.Object>
struct  MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B  : public EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916
{
public:
	// UnityEngine.EventModifiers UnityEngine.UIElements.MouseEventBase`1::<modifiers>k__BackingField
	int32_t ___U3CmodifiersU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.UIElements.MouseEventBase`1::<mousePosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CmousePositionU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.UIElements.MouseEventBase`1::<localMousePosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3ClocalMousePositionU3Ek__BackingField_20;
	// UnityEngine.Vector2 UnityEngine.UIElements.MouseEventBase`1::<mouseDelta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CmouseDeltaU3Ek__BackingField_21;
	// System.Int32 UnityEngine.UIElements.MouseEventBase`1::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_22;
	// System.Int32 UnityEngine.UIElements.MouseEventBase`1::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Int32 UnityEngine.UIElements.MouseEventBase`1::<pressedButtons>k__BackingField
	int32_t ___U3CpressedButtonsU3Ek__BackingField_24;
	// System.Boolean UnityEngine.UIElements.MouseEventBase`1::<UnityEngine.UIElements.IMouseEventInternal.triggeredByOS>k__BackingField
	bool ___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25;
	// System.Boolean UnityEngine.UIElements.MouseEventBase`1::<UnityEngine.UIElements.IMouseEventInternal.recomputeTopElementUnderMouse>k__BackingField
	bool ___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26;
	// UnityEngine.UIElements.IPointerEvent UnityEngine.UIElements.MouseEventBase`1::<UnityEngine.UIElements.IMouseEventInternal.sourcePointerEvent>k__BackingField
	RuntimeObject* ___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27;

public:
	inline static int32_t get_offset_of_U3CmodifiersU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B, ___U3CmodifiersU3Ek__BackingField_18)); }
	inline int32_t get_U3CmodifiersU3Ek__BackingField_18() const { return ___U3CmodifiersU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CmodifiersU3Ek__BackingField_18() { return &___U3CmodifiersU3Ek__BackingField_18; }
	inline void set_U3CmodifiersU3Ek__BackingField_18(int32_t value)
	{
		___U3CmodifiersU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CmousePositionU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B, ___U3CmousePositionU3Ek__BackingField_19)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CmousePositionU3Ek__BackingField_19() const { return ___U3CmousePositionU3Ek__BackingField_19; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CmousePositionU3Ek__BackingField_19() { return &___U3CmousePositionU3Ek__BackingField_19; }
	inline void set_U3CmousePositionU3Ek__BackingField_19(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CmousePositionU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3ClocalMousePositionU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B, ___U3ClocalMousePositionU3Ek__BackingField_20)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3ClocalMousePositionU3Ek__BackingField_20() const { return ___U3ClocalMousePositionU3Ek__BackingField_20; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3ClocalMousePositionU3Ek__BackingField_20() { return &___U3ClocalMousePositionU3Ek__BackingField_20; }
	inline void set_U3ClocalMousePositionU3Ek__BackingField_20(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3ClocalMousePositionU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CmouseDeltaU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B, ___U3CmouseDeltaU3Ek__BackingField_21)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CmouseDeltaU3Ek__BackingField_21() const { return ___U3CmouseDeltaU3Ek__BackingField_21; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CmouseDeltaU3Ek__BackingField_21() { return &___U3CmouseDeltaU3Ek__BackingField_21; }
	inline void set_U3CmouseDeltaU3Ek__BackingField_21(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CmouseDeltaU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B, ___U3CclickCountU3Ek__BackingField_22)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_22() const { return ___U3CclickCountU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_22() { return &___U3CclickCountU3Ek__BackingField_22; }
	inline void set_U3CclickCountU3Ek__BackingField_22(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CpressedButtonsU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B, ___U3CpressedButtonsU3Ek__BackingField_24)); }
	inline int32_t get_U3CpressedButtonsU3Ek__BackingField_24() const { return ___U3CpressedButtonsU3Ek__BackingField_24; }
	inline int32_t* get_address_of_U3CpressedButtonsU3Ek__BackingField_24() { return &___U3CpressedButtonsU3Ek__BackingField_24; }
	inline void set_U3CpressedButtonsU3Ek__BackingField_24(int32_t value)
	{
		___U3CpressedButtonsU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B, ___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25)); }
	inline bool get_U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25() const { return ___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25() { return &___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25; }
	inline void set_U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25(bool value)
	{
		___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B, ___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26)); }
	inline bool get_U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26() const { return ___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26() { return &___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26; }
	inline void set_U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26(bool value)
	{
		___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B, ___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27)); }
	inline RuntimeObject* get_U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27() const { return ___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27; }
	inline RuntimeObject** get_address_of_U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27() { return &___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27; }
	inline void set_U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27(RuntimeObject* value)
	{
		___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27), (void*)value);
	}
};


// UnityEngine.UIElements.PointerCaptureEventBase`1<System.Object>
struct  PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE  : public EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916
{
public:
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.PointerCaptureEventBase`1::<relatedTarget>k__BackingField
	RuntimeObject* ___U3CrelatedTargetU3Ek__BackingField_18;
	// System.Int32 UnityEngine.UIElements.PointerCaptureEventBase`1::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CrelatedTargetU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE, ___U3CrelatedTargetU3Ek__BackingField_18)); }
	inline RuntimeObject* get_U3CrelatedTargetU3Ek__BackingField_18() const { return ___U3CrelatedTargetU3Ek__BackingField_18; }
	inline RuntimeObject** get_address_of_U3CrelatedTargetU3Ek__BackingField_18() { return &___U3CrelatedTargetU3Ek__BackingField_18; }
	inline void set_U3CrelatedTargetU3Ek__BackingField_18(RuntimeObject* value)
	{
		___U3CrelatedTargetU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrelatedTargetU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE, ___U3CpointerIdU3Ek__BackingField_19)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_19() const { return ___U3CpointerIdU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_19() { return &___U3CpointerIdU3Ek__BackingField_19; }
	inline void set_U3CpointerIdU3Ek__BackingField_19(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_19 = value;
	}
};


// UnityEngine.UIElements.PointerEventBase`1<System.Object>
struct  PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634  : public EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916
{
public:
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_18;
	// System.String UnityEngine.UIElements.PointerEventBase`1::<pointerType>k__BackingField
	String_t* ___U3CpointerTypeU3Ek__BackingField_19;
	// System.Boolean UnityEngine.UIElements.PointerEventBase`1::<isPrimary>k__BackingField
	bool ___U3CisPrimaryU3Ek__BackingField_20;
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_21;
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<pressedButtons>k__BackingField
	int32_t ___U3CpressedButtonsU3Ek__BackingField_22;
	// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1::<position>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CpositionU3Ek__BackingField_23;
	// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1::<localPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3ClocalPositionU3Ek__BackingField_24;
	// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1::<deltaPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CdeltaPositionU3Ek__BackingField_25;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<deltaTime>k__BackingField
	float ___U3CdeltaTimeU3Ek__BackingField_26;
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_27;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_28;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_29;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_30;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_31;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_32;
	// UnityEngine.Vector2 UnityEngine.UIElements.PointerEventBase`1::<radius>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CradiusU3Ek__BackingField_33;
	// UnityEngine.Vector2 UnityEngine.UIElements.PointerEventBase`1::<radiusVariance>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CradiusVarianceU3Ek__BackingField_34;
	// UnityEngine.EventModifiers UnityEngine.UIElements.PointerEventBase`1::<modifiers>k__BackingField
	int32_t ___U3CmodifiersU3Ek__BackingField_35;
	// System.Boolean UnityEngine.UIElements.PointerEventBase`1::<UnityEngine.UIElements.IPointerEventInternal.triggeredByOS>k__BackingField
	bool ___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36;
	// System.Boolean UnityEngine.UIElements.PointerEventBase`1::<UnityEngine.UIElements.IPointerEventInternal.recomputeTopElementUnderPointer>k__BackingField
	bool ___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37;

public:
	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CpointerIdU3Ek__BackingField_18)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_18() const { return ___U3CpointerIdU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_18() { return &___U3CpointerIdU3Ek__BackingField_18; }
	inline void set_U3CpointerIdU3Ek__BackingField_18(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CpointerTypeU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CpointerTypeU3Ek__BackingField_19)); }
	inline String_t* get_U3CpointerTypeU3Ek__BackingField_19() const { return ___U3CpointerTypeU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CpointerTypeU3Ek__BackingField_19() { return &___U3CpointerTypeU3Ek__BackingField_19; }
	inline void set_U3CpointerTypeU3Ek__BackingField_19(String_t* value)
	{
		___U3CpointerTypeU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerTypeU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisPrimaryU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CisPrimaryU3Ek__BackingField_20)); }
	inline bool get_U3CisPrimaryU3Ek__BackingField_20() const { return ___U3CisPrimaryU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CisPrimaryU3Ek__BackingField_20() { return &___U3CisPrimaryU3Ek__BackingField_20; }
	inline void set_U3CisPrimaryU3Ek__BackingField_20(bool value)
	{
		___U3CisPrimaryU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CbuttonU3Ek__BackingField_21)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_21() const { return ___U3CbuttonU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_21() { return &___U3CbuttonU3Ek__BackingField_21; }
	inline void set_U3CbuttonU3Ek__BackingField_21(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CpressedButtonsU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CpressedButtonsU3Ek__BackingField_22)); }
	inline int32_t get_U3CpressedButtonsU3Ek__BackingField_22() const { return ___U3CpressedButtonsU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CpressedButtonsU3Ek__BackingField_22() { return &___U3CpressedButtonsU3Ek__BackingField_22; }
	inline void set_U3CpressedButtonsU3Ek__BackingField_22(int32_t value)
	{
		___U3CpressedButtonsU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CpositionU3Ek__BackingField_23)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CpositionU3Ek__BackingField_23() const { return ___U3CpositionU3Ek__BackingField_23; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CpositionU3Ek__BackingField_23() { return &___U3CpositionU3Ek__BackingField_23; }
	inline void set_U3CpositionU3Ek__BackingField_23(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CpositionU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3ClocalPositionU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3ClocalPositionU3Ek__BackingField_24)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3ClocalPositionU3Ek__BackingField_24() const { return ___U3ClocalPositionU3Ek__BackingField_24; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3ClocalPositionU3Ek__BackingField_24() { return &___U3ClocalPositionU3Ek__BackingField_24; }
	inline void set_U3ClocalPositionU3Ek__BackingField_24(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3ClocalPositionU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaPositionU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CdeltaPositionU3Ek__BackingField_25)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CdeltaPositionU3Ek__BackingField_25() const { return ___U3CdeltaPositionU3Ek__BackingField_25; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CdeltaPositionU3Ek__BackingField_25() { return &___U3CdeltaPositionU3Ek__BackingField_25; }
	inline void set_U3CdeltaPositionU3Ek__BackingField_25(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CdeltaPositionU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaTimeU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CdeltaTimeU3Ek__BackingField_26)); }
	inline float get_U3CdeltaTimeU3Ek__BackingField_26() const { return ___U3CdeltaTimeU3Ek__BackingField_26; }
	inline float* get_address_of_U3CdeltaTimeU3Ek__BackingField_26() { return &___U3CdeltaTimeU3Ek__BackingField_26; }
	inline void set_U3CdeltaTimeU3Ek__BackingField_26(float value)
	{
		___U3CdeltaTimeU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CclickCountU3Ek__BackingField_27)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_27() const { return ___U3CclickCountU3Ek__BackingField_27; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_27() { return &___U3CclickCountU3Ek__BackingField_27; }
	inline void set_U3CclickCountU3Ek__BackingField_27(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CpressureU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CpressureU3Ek__BackingField_28)); }
	inline float get_U3CpressureU3Ek__BackingField_28() const { return ___U3CpressureU3Ek__BackingField_28; }
	inline float* get_address_of_U3CpressureU3Ek__BackingField_28() { return &___U3CpressureU3Ek__BackingField_28; }
	inline void set_U3CpressureU3Ek__BackingField_28(float value)
	{
		___U3CpressureU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CtangentialPressureU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CtangentialPressureU3Ek__BackingField_29)); }
	inline float get_U3CtangentialPressureU3Ek__BackingField_29() const { return ___U3CtangentialPressureU3Ek__BackingField_29; }
	inline float* get_address_of_U3CtangentialPressureU3Ek__BackingField_29() { return &___U3CtangentialPressureU3Ek__BackingField_29; }
	inline void set_U3CtangentialPressureU3Ek__BackingField_29(float value)
	{
		___U3CtangentialPressureU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CaltitudeAngleU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CaltitudeAngleU3Ek__BackingField_30)); }
	inline float get_U3CaltitudeAngleU3Ek__BackingField_30() const { return ___U3CaltitudeAngleU3Ek__BackingField_30; }
	inline float* get_address_of_U3CaltitudeAngleU3Ek__BackingField_30() { return &___U3CaltitudeAngleU3Ek__BackingField_30; }
	inline void set_U3CaltitudeAngleU3Ek__BackingField_30(float value)
	{
		___U3CaltitudeAngleU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CazimuthAngleU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CazimuthAngleU3Ek__BackingField_31)); }
	inline float get_U3CazimuthAngleU3Ek__BackingField_31() const { return ___U3CazimuthAngleU3Ek__BackingField_31; }
	inline float* get_address_of_U3CazimuthAngleU3Ek__BackingField_31() { return &___U3CazimuthAngleU3Ek__BackingField_31; }
	inline void set_U3CazimuthAngleU3Ek__BackingField_31(float value)
	{
		___U3CazimuthAngleU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CtwistU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CtwistU3Ek__BackingField_32)); }
	inline float get_U3CtwistU3Ek__BackingField_32() const { return ___U3CtwistU3Ek__BackingField_32; }
	inline float* get_address_of_U3CtwistU3Ek__BackingField_32() { return &___U3CtwistU3Ek__BackingField_32; }
	inline void set_U3CtwistU3Ek__BackingField_32(float value)
	{
		___U3CtwistU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CradiusU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CradiusU3Ek__BackingField_33)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CradiusU3Ek__BackingField_33() const { return ___U3CradiusU3Ek__BackingField_33; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CradiusU3Ek__BackingField_33() { return &___U3CradiusU3Ek__BackingField_33; }
	inline void set_U3CradiusU3Ek__BackingField_33(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CradiusU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CradiusVarianceU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CradiusVarianceU3Ek__BackingField_34)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CradiusVarianceU3Ek__BackingField_34() const { return ___U3CradiusVarianceU3Ek__BackingField_34; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CradiusVarianceU3Ek__BackingField_34() { return &___U3CradiusVarianceU3Ek__BackingField_34; }
	inline void set_U3CradiusVarianceU3Ek__BackingField_34(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CradiusVarianceU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CmodifiersU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CmodifiersU3Ek__BackingField_35)); }
	inline int32_t get_U3CmodifiersU3Ek__BackingField_35() const { return ___U3CmodifiersU3Ek__BackingField_35; }
	inline int32_t* get_address_of_U3CmodifiersU3Ek__BackingField_35() { return &___U3CmodifiersU3Ek__BackingField_35; }
	inline void set_U3CmodifiersU3Ek__BackingField_35(int32_t value)
	{
		___U3CmodifiersU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36)); }
	inline bool get_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36() const { return ___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36; }
	inline bool* get_address_of_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36() { return &___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36; }
	inline void set_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36(bool value)
	{
		___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37)); }
	inline bool get_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37() const { return ___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37() { return &___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37; }
	inline void set_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37(bool value)
	{
		___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37 = value;
	}
};


// UnityEngine.UIElements.DragAndDropEventBase`1<System.Object>
struct  DragAndDropEventBase_1_t51BA6B73A83CFDD23CEE8C4C4F5F832642AF0844  : public MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B
{
public:

public:
};


// UnityEngine.UIElements.MouseCaptureEventBase`1<System.Object>
struct  MouseCaptureEventBase_1_t97B90265ADE987386D82B12AC9199D69B473E90B  : public PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::set_specificity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_keyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_get_keyword_m73D1031A571AC4D33C8FAE3C20FAC0E5C2A456A2_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::.ctor(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::Equals(UnityEngine.UIElements.StyleEnum`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleEnum_1_Equals_mFA300F4368EBB8B5AED6497B6462C7BC7A851FC2_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleEnum_1_Equals_m24B121AC6754A2F66CF25C7F26F5D73B79AD7FD6_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method);
// System.String UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StyleEnum_1_ToString_m8F8781B4E85F3CF71A0EB27291996FC8607775BF_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Rendering.VolumeParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter__ctor_m2F71AA1C0D93968A46FF58F5DE371EAF3D5CF571 (VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 * __this, const RuntimeMethod* method);
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737 (bool* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector4::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4_Equals_m552ECA9ECD220D6526D8ECC9902016B6FC6D49B5 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4 (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::ValidTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorTween_ValidTarget_mCFF8428CFF8D45A85E4EE612263E751ED0B5987C (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::get_ignoreTimeScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ColorTween_get_ignoreTimeScale_m6A06826E19314EFE9783E505C75CFC76E42E8F05_inline (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2 (const RuntimeMethod* method);
// System.Single UnityEngine.UI.CoroutineTween.ColorTween::get_duration()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float ColorTween_get_duration_mC4A1E3C2EA46A5C657A2B9DA240C796F770ECC5F_inline (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.CoroutineTween.ColorTween::TweenValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorTween_TweenValue_m20FCBA50CE9328956973861A9CB0A1FD97265A58 (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, float ___floatPercentage0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::ValidTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FloatTween_ValidTarget_m917EB0D30E72AC75D90D1D8F11B1D7EBBD00ECAE (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::get_ignoreTimeScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool FloatTween_get_ignoreTimeScale_mA7B69D72E1D52EF1890C89D5690D345B852C7239_inline (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UI.CoroutineTween.FloatTween::get_duration()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float FloatTween_get_duration_mBECFBEC57BDC30B54D0638873BA3313A8F7232F5_inline (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.CoroutineTween.FloatTween::TweenValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_TweenValue_m4E4418FB7FBDC7CBF96D95518DFACF25BCBE8EB3 (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, float ___floatPercentage0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m3CDD6C046CC660D4CD6583FCE97F88A9735FD5FA (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::set_propagation(UnityEngine.UIElements.EventBase/EventPropagation)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void EventBase_set_propagation_mF770530A5B592FAB33C549ED74453ABC7ED0E7A6_inline (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::set_imguiEvent(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_imguiEvent_mD693DAF0735050C06640E8C9DD5683E210D18E15 (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase__ctor_m7F4C2BE69598419344BB6C2FAC18252234F50CAD (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_Init_m025BEC823C26718B5ED6CADD395D591677CB39A5 (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::set_pooled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_pooled_m3AC9AF90D2F4BF55A9EC0499B9197A0916CAC664 (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, bool ___value0, const RuntimeMethod* method);
// System.UInt64 UnityEngine.UIElements.EventBase::get_eventId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint64_t EventBase_get_eventId_mAECD1254234BF118F42559AC0B717A64E7F27517_inline (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::SetTriggerEventId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_SetTriggerEventId_m2A0B5984F003A2AFB57502FF8DD3A42AF75C08DA (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, uint64_t ___id0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.EventBase::get_pooled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventBase_get_pooled_m9D5F816B4A1B445B7F31DF5F7814F60400217BFE (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Int64 UnityEngine.UIElements.EventBase::RegisterEventType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EventBase_RegisterEventType_mD202AAEEC9F80263CAF503390454A1C6681B6133 (const RuntimeMethod* method);
// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::get_unspecified()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * FocusChangeDirection_get_unspecified_m72CA7BA378E9E8EF915B6997E7F0601DACE6E2A8_inline (const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::set_target(UnityEngine.UIElements.IEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_target_mC6CE8B7FED46EC08C07F2279750CBF2780E90C6C (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_modifiers_m4D1BDE843A9379F50C3F32CB78CCDAD84B779108 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// System.Char UnityEngine.Event::get_character()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Event_get_character_m78B46D412357B71233F3D41842928A19B290915C (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_keyCode_m8B0AAD347861E322E91D2B7320A99E04D39575CF (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method);
// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::get_currentTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventBase_get_currentTarget_mB3B3ED90CE63BFFE6E789E0BC5FA5B904BDEF581 (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::set_currentTarget(UnityEngine.UIElements.IEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_currentTarget_mBA8C39A26A9E8B67E1003496F77C00BA48FA1B90 (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.UIElements.VisualElementExtensions::WorldToLocal(UnityEngine.UIElements.VisualElement,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  VisualElementExtensions_WorldToLocal_mFDEA66A0B4B27B27D235DE5E11E68E3145CA18C8 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___ele0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___p1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::PreDispatch(UnityEngine.UIElements.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_PreDispatch_m242A7911A4139A5BF3BDAF7952AE67DF0DBC779A (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, RuntimeObject* ___panel0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PointerDeviceState::SavePointerPosition(System.Int32,UnityEngine.Vector2,UnityEngine.UIElements.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerDeviceState_SavePointerPosition_mFFAA7F8C884E231C7D950676565CDE8A9BAF2390 (int32_t ___pointerId0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___position1, RuntimeObject* ___panel2, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.EventBase::get_processed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventBase_get_processed_mE00DE5372190A0AD6BEB2C693658C5EA5F1B465C (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m0283DD85C5E5F5029793C17A335DB16BC307E62E (bool ___condition0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.BaseVisualElementPanel::CommitElementUnderPointers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVisualElementPanel_CommitElementUnderPointers_mFBDB91138145CF30ADB72FE74511C7E8BD3374F3 (BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.EventBase::get_isPropagationStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventBase_get_isPropagationStopped_m56D6DBFE28CF05F8CBEF3BB29D7C7D4A1787A71C (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::StopPropagation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_StopPropagation_mC1D00F7DCE3D90B7CC5D768F68883C9338B6D270 (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.EventBase::get_isImmediatePropagationStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventBase_get_isImmediatePropagationStopped_mF363E1F51EEA0C802349EDB884105C4172D3F80B (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::StopImmediatePropagation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_StopImmediatePropagation_m147F448DA22C5009B11D9C4048749E8AAAEA5BFB (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.EventBase::get_isDefaultPrevented()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventBase_get_isDefaultPrevented_m52E82FE3B3DDB4B122E61D26EEFB4B24759C428D (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::PreventDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_PreventDefault_m16F3C26388BE9ADBEC55AF54DDF998C168DBE90A (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::PostDispatch(UnityEngine.UIElements.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_PostDispatch_m4182DABA2D5674FC82F67DC57219840840065644 (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, RuntimeObject* ___panel0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Event_get_mousePosition_m92AD98489A626864E9B179273270802EB1D2C085 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Event::get_delta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Event_get_delta_m552632C8BD6AFB1FF814636177843C6E28E87B85 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Event::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_button_mA6E2D86802D75E24DB3C52EB52142EA98A3B93CE (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.PointerDeviceState::GetPressedButtons(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerDeviceState_GetPressedButtons_m92D8D7B9F9B7A2251807764D45D133CE96E7E8C2 (int32_t ___pointerId0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Event::get_clickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_clickCount_m8C296AD53AA9F14D43DB3682227DD343B9499F21 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::get_target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventBase_get_target_m9CDDE53A2B09975CF0DDAA6F194425149BCDC3E5 (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// UnityEngine.Event UnityEngine.UIElements.EventBase::get_imguiEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * EventBase_get_imguiEvent_m93CE1DC74AF5C7C85CFE01C066E89893528FC6A4 (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.PropagationPaths UnityEngine.UIElements.EventBase::get_path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D * EventBase_get_path_mD750217799E419C5F8B38236E9592E54811A70BF (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::set_path(UnityEngine.UIElements.PropagationPaths)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_path_mE08193E7E12ACEFF2C0B6D03B3A2F3E0CC108C3F (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mA99E48BB021F2E4B62D4EA9F52EA6928EED618A2 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::set_propagateToIMGUI(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_propagateToIMGUI_m4B5E6109B619AF7761D310984BEB6C2210E05DD2 (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method);
// UnityEngine.EventType UnityEngine.Event::get_rawType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_rawType_m4139BB74440F552F5FD31F56215938E227EF0CD9 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// UnityEngine.EventType UnityEngine.Event::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Assert(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m84EE43ACFD01E8C0CEC0160C494B2CE77338F7BC (bool ___condition0, String_t* ___message1, const RuntimeMethod* method);
// UnityEngine.PointerType UnityEngine.Event::get_pointerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_pointerType_m1D8031C5A8BFBAC21BAAB396199CDFCD3AAC42CA (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PointerDeviceState::PressButton(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerDeviceState_PressButton_mD0A791144315B3CFEB74A02FECBEDFFD24A4A9CE (int32_t ___pointerId0, int32_t ___buttonId1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PointerDeviceState::ReleaseButton(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerDeviceState_ReleaseButton_m841973E840794947778B7057D4DD315556F7A6A5 (int32_t ___pointerId0, int32_t ___buttonId1, const RuntimeMethod* method);
// System.Single UnityEngine.Event::get_pressure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Event_get_pressure_m2F2732871C11B870A4DE6CF3056C495252B07024 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// System.String UnityEngine.UIElements.PointerType::GetPointerType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PointerType_GetPointerType_mFC253D2B16A977A73555E236FBD45A36F271D9A1 (int32_t ___pointerId0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PointerCaptureHelper::ProcessPointerCapture(UnityEngine.UIElements.IPanel,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerCaptureHelper_ProcessPointerCapture_m09CC6875E7044A577341CFA82E5E665DA7434EC6 (RuntimeObject* ___panel0, int32_t ___pointerId1, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.PointerCaptureHelper::ShouldSendCompatibilityMouseEvents(UnityEngine.UIElements.IPanel,UnityEngine.UIElements.IPointerEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerCaptureHelper_ShouldSendCompatibilityMouseEvents_m7719A65D3C28756BA1F509CAD2362E2B7A05DD83 (RuntimeObject* ___panel0, RuntimeObject* ___evt1, const RuntimeMethod* method);
// T UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_value()
inline int32_t StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, const RuntimeMethod*))StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109_gshared)(__this, method);
}
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::set_specificity(System.Int32)
inline void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, int32_t, const RuntimeMethod*))StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_gshared)(__this, ___value0, method);
}
// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_keyword()
inline int32_t StyleEnum_1_get_keyword_m73D1031A571AC4D33C8FAE3C20FAC0E5C2A456A2 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, const RuntimeMethod*))StyleEnum_1_get_keyword_m73D1031A571AC4D33C8FAE3C20FAC0E5C2A456A2_gshared)(__this, method);
}
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::.ctor(T,UnityEngine.UIElements.StyleKeyword)
inline void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, int32_t, int32_t, const RuntimeMethod*))StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_gshared)(__this, ___v0, ___keyword1, method);
}
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::Equals(UnityEngine.UIElements.StyleEnum`1<T>)
inline bool StyleEnum_1_Equals_mFA300F4368EBB8B5AED6497B6462C7BC7A851FC2 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C , const RuntimeMethod*))StyleEnum_1_Equals_mFA300F4368EBB8B5AED6497B6462C7BC7A851FC2_gshared)(__this, ___other0, method);
}
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::Equals(System.Object)
inline bool StyleEnum_1_Equals_m24B121AC6754A2F66CF25C7F26F5D73B79AD7FD6 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, RuntimeObject *, const RuntimeMethod*))StyleEnum_1_Equals_m24B121AC6754A2F66CF25C7F26F5D73B79AD7FD6_gshared)(__this, ___obj0, method);
}
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A (int32_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::GetHashCode()
inline int32_t StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, const RuntimeMethod*))StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94_gshared)(__this, method);
}
// System.String UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::ToString()
inline String_t* StyleEnum_1_ToString_m8F8781B4E85F3CF71A0EB27291996FC8607775BF (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, const RuntimeMethod*))StyleEnum_1_ToString_m8F8781B4E85F3CF71A0EB27291996FC8607775BF_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  VolumeParameter_1_get_value_m3357DB9605B20F52D9C0817FBCB7252DE6974ED2_gshared (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * __this, const RuntimeMethod* method)
{
	{
		// get => m_Value;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )__this->get_m_Value_2();
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::set_value(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_m6DD0E1648C4D9B520AAF30E8DC3BA253A3F2AFA1_gshared (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___value0, const RuntimeMethod* method)
{
	{
		// set => m_Value = value;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m386620E25B2C256813D46D4DA19EF940FB8B2F82_gshared (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * __this, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// : this(default, false)
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E ));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = V_0;
		NullCheck((VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)__this);
		((  void (*) (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E , bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)__this, (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::.ctor(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m4907616EF245F3F2B306847342047D7193128EE1_gshared (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___value0, bool ___overrideState1, const RuntimeMethod* method)
{
	{
		// protected VolumeParameter(T value, bool overrideState)
		NullCheck((VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 *)__this);
		VolumeParameter__ctor_m2F71AA1C0D93968A46FF58F5DE371EAF3D5CF571((VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 *)__this, /*hidden argument*/NULL);
		// m_Value = value;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = ___value0;
		__this->set_m_Value_2(L_0);
		// this.overrideState = overrideState;
		bool L_1 = ___overrideState1;
		NullCheck((VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 *)__this, (bool)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::Interp(UnityEngine.Rendering.VolumeParameter,UnityEngine.Rendering.VolumeParameter,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m14437549DCF04554021C22A301E00B2D90064D04_gshared (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * __this, VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 * ___from0, VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 * ___to1, float ___t2, const RuntimeMethod* method)
{
	{
		// Interp(from.GetValue<T>(), to.GetValue<T>(), t);
		VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 * L_0 = ___from0;
		NullCheck((VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 *)L_0);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1 = ((  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  (*) (VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 * L_2 = ___to1;
		NullCheck((VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 *)L_2);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_3 = ((  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  (*) (VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_4 = ___t2;
		NullCheck((VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)__this);
		VirtActionInvoker3< Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E , Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E , float >::Invoke(13 /* System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::Interp(T,T,System.Single) */, (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)__this, (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_1, (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_3, (float)L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::Interp(T,T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m73AE1C8002F4F0B999DFA11C95735A54E526C497_gshared (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___from0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___to1, float ___t2, const RuntimeMethod* method)
{
	VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * G_B2_0 = NULL;
	VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * G_B1_0 = NULL;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * G_B3_1 = NULL;
	{
		// m_Value = t > 0f ? to : from;
		float L_0 = ___t2;
		G_B1_0 = ((VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)(__this));
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)(__this));
			goto IL_000c;
		}
	}
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1 = ___from0;
		G_B3_0 = L_1;
		G_B3_1 = ((VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)(G_B1_0));
		goto IL_000d;
	}

IL_000c:
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = ___to1;
		G_B3_0 = L_2;
		G_B3_1 = ((VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)(G_B2_0));
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_Value_2(G_B3_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::Override(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_mC86FE2EC656D2B8A24EE382E10A41BCDE831D63F_gshared (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___x0, const RuntimeMethod* method)
{
	{
		// overrideState = true;
		NullCheck((VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.Rendering.VolumeParameter::set_overrideState(System.Boolean) */, (VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 *)__this, (bool)1);
		// m_Value = x;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = ___x0;
		__this->set_m_Value_2(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::SetValue(UnityEngine.Rendering.VolumeParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_mAD3C0ED155083EF70044D290501751A552E386AD_gshared (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * __this, VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 * ___parameter0, const RuntimeMethod* method)
{
	{
		// m_Value = parameter.GetValue<T>();
		VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 * L_0 = ___parameter0;
		NullCheck((VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 *)L_0);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1 = ((  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  (*) (VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_Value_2(L_1);
		// }
		return;
	}
}
// System.Int32 UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_m207526643DCC6E90FBC0E25FBA2900FB28C4FAA8_gshared (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int hash = 17;
		V_0 = (int32_t)((int32_t)17);
		// hash = hash * 23 + overrideState.GetHashCode();
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 *)__this);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 *)__this);
		V_1 = (bool)L_1;
		int32_t L_2 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)23))), (int32_t)L_2));
		// if (!ReferenceEquals(value, null))
		NullCheck((VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)__this);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_3 = VirtFuncInvoker0< Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  >::Invoke(11 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::get_value() */, (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)__this);
	}
	{
		// hash = hash * 23 + value.GetHashCode();
		int32_t L_4 = V_0;
		NullCheck((VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)__this);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_5 = VirtFuncInvoker0< Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  >::Invoke(11 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::get_value() */, (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)__this);
		V_2 = (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_5;
		int32_t L_6 = Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)(&V_2), /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)((int32_t)23))), (int32_t)L_6));
	}

IL_003e:
	{
		// return hash;
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.String UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_m205E9AF49A9C2163102FD1C66470FAD2659B2AB5_gshared (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VolumeParameter_1_ToString_m205E9AF49A9C2163102FD1C66470FAD2659B2AB5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"{value} ({overrideState})";
		NullCheck((VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)__this);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = VirtFuncInvoker0< Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  >::Invoke(11 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::get_value() */, (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)__this);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), &L_1);
		NullCheck((VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 *)__this);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.Rendering.VolumeParameter::get_overrideState() */, (VolumeParameter_tCDE6ED34C0CCAD13E50C7267DA667EB9F8E5D978 *)__this);
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A((String_t*)_stringLiteral4AEC5D0A8B19CED88792A4A0C1E652F4023683E8, (RuntimeObject *)L_2, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::op_Equality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_m4C78EB7904F6A6BDBB700AA96999BC0312051B86_gshared (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * ___lhs0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___rhs1, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static bool operator==(VolumeParameter<T> lhs, T rhs) => lhs != null && !ReferenceEquals(lhs.value, null) && lhs.value.Equals(rhs);
		VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * L_0 = ___lhs0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * L_1 = ___lhs0;
		NullCheck((VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)L_1);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = VirtFuncInvoker0< Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  >::Invoke(11 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::get_value() */, (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)L_1);
	}
	{
		VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * L_3 = ___lhs0;
		NullCheck((VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)L_3);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = VirtFuncInvoker0< Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  >::Invoke(11 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::get_value() */, (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)L_3);
		V_0 = (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_4;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_5 = ___rhs1;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_6 = L_5;
		RuntimeObject * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_6);
		bool L_8 = Vector4_Equals_m552ECA9ECD220D6526D8ECC9902016B6FC6D49B5((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)(&V_0), (RuntimeObject *)L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::op_Inequality(UnityEngine.Rendering.VolumeParameter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_m7087227A2A54C5EACB7AB028041A650934C7B530_gshared (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * ___lhs0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___rhs1, const RuntimeMethod* method)
{
	{
		// public static bool operator!=(VolumeParameter<T> lhs, T rhs) => !(lhs == rhs);
		VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * L_0 = ___lhs0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1 = ___rhs1;
		bool L_2 = ((  bool (*) (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)L_0, (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::Equals(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_mC838768DC0258A23DFC4E90AA22ED19A3929862D_gshared (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * __this, VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * ___other0, const RuntimeMethod* method)
{
	{
		// if (ReferenceEquals(null, other))
		VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, other))
		VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * L_1 = ___other0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)__this) == ((RuntimeObject*)(VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return EqualityComparer<T>.Default.Equals(m_Value, other.m_Value);
		EqualityComparer_1_t7E3233D219BAD9A94FD502F672DC198E60C604CA * L_2 = ((  EqualityComparer_1_t7E3233D219BAD9A94FD502F672DC198E60C604CA * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_3 = (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )__this->get_m_Value_2();
		VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * L_4 = ___other0;
		NullCheck(L_4);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_5 = (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_4->get_m_Value_2();
		NullCheck((EqualityComparer_1_t7E3233D219BAD9A94FD502F672DC198E60C604CA *)L_2);
		bool L_6 = VirtFuncInvoker2< bool, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E , Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::Equals(!0,!0) */, (EqualityComparer_1_t7E3233D219BAD9A94FD502F672DC198E60C604CA *)L_2, (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_3, (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_5);
		return L_6;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m0C3E82CF2072DB8D20DDFC0CBE0665E3E346A7E1_gshared (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VolumeParameter_1_Equals_m0C3E82CF2072DB8D20DDFC0CBE0665E3E346A7E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj))
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj))
		RuntimeObject * L_1 = ___obj0;
		if ((!(((RuntimeObject*)(VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != GetType())
		RuntimeObject * L_2 = ___obj0;
		NullCheck((RuntimeObject *)L_2);
		Type_t * L_3 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)__this);
		Type_t * L_4 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9((Type_t *)L_3, (Type_t *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals((VolumeParameter<T>)obj);
		RuntimeObject * L_6 = ___obj0;
		NullCheck((VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)__this);
		bool L_7 = ((  bool (*) (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *, VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)__this, (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)((VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return L_7;
	}
}
// T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::op_Explicit(UnityEngine.Rendering.VolumeParameter`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  VolumeParameter_1_op_Explicit_mD27E37E2721FA4CF9A3F9D765C6D0CD2C69C3540_gshared (VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * ___prop0, const RuntimeMethod* method)
{
	{
		// public static explicit operator T(VolumeParameter<T> prop) => prop.m_Value;
		VolumeParameter_1_t14EDC405CD6A3957BDB5B917DAB8AFA918F67431 * L_0 = ___prop0;
		NullCheck(L_0);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1 = (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_0->get_m_Value_2();
		return L_1;
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
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Add_m4B9B1BB9F9CE9F3EA16E39E17D429BDE8F12781C_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		// m_List.Add(item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// m_Dictionary.Add(item, m_List.Count - 1);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_2 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_3 = ___item0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4);
		int32_t L_5 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_2);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_2, (RuntimeObject *)L_3, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// }
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::AddUnique(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_AddUnique_m1ECFE9938B5A00144BDA633A8D25A58316124761_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		// if (m_Dictionary.ContainsKey(item))
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// m_List.Add(item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		RuntimeObject * L_4 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// m_Dictionary.Add(item, m_List.Count - 1);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_5 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_6 = ___item0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_7 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_7);
		int32_t L_8 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_5);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_5, (RuntimeObject *)L_6, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_Remove_m658717377F61EDE4C423765165C7C5FF30773E7B_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int index = -1;
		V_0 = (int32_t)(-1);
		// if (!m_Dictionary.TryGetValue(item, out index))
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0014:
	{
		// RemoveAt(index);
		int32_t L_3 = V_0;
		NullCheck((IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C *)__this);
		((  void (*) (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// return true;
		return (bool)1;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IndexedSet_1_GetEnumerator_mC16C0BE13B73DB47882CA51DB581747C19C7128B_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_GetEnumerator_mC16C0BE13B73DB47882CA51DB581747C19C7128B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, IndexedSet_1_GetEnumerator_mC16C0BE13B73DB47882CA51DB581747C19C7128B_RuntimeMethod_var);
	}
}
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m81FDC80B01BFAD2E467F3F89BE79542567FC452C_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, const RuntimeMethod* method)
{
	{
		// return GetEnumerator();
		NullCheck((IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return L_0;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Clear_m0CE62BD950A168D1D01E16EE1DCBCDDC5C416F73_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, const RuntimeMethod* method)
{
	{
		// m_List.Clear();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		// m_Dictionary.Clear();
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_1 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_1);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		// }
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_Contains_mB738528F8692F630112FD2539CE74D7B43AF4962_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		// return m_Dictionary.ContainsKey(item);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_CopyTo_mD9F0ECDF20B494C1A493E939FE91D89AB3E91B84_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		// m_List.CopyTo(array, arrayIndex);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		// }
		return;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexedSet_1_get_Count_mEEA1184D1474B3B4B357EFC2C064908980921A1B_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, const RuntimeMethod* method)
{
	{
		// public int Count { get { return m_List.Count; } }
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		int32_t L_1 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return L_1;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_get_IsReadOnly_m29F668C4BDD834E41FEA84BBF4D1A1D6950D8BE7_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, const RuntimeMethod* method)
{
	{
		// public bool IsReadOnly { get { return false; } }
		return (bool)0;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexedSet_1_IndexOf_m89959972344E25AA8A0059BEE3F9F79A1D549C4E_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int index = -1;
		V_0 = (int32_t)(-1);
		// if (m_Dictionary.TryGetValue(item, out index))
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return index;
		int32_t L_3 = V_0;
		return L_3;
	}

IL_0014:
	{
		// return -1;
		return (-1);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Insert_mB43CB3AA6D461E94217E51DE6DD4ED3F5E1607CD_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_Insert_mB43CB3AA6D461E94217E51DE6DD4ED3F5E1607CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotSupportedException("Random Insertion is semantically invalid, since this structure does not guarantee ordering.");
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_0, (String_t*)_stringLiteralDFADDFA065E9D92CFE8B8F06444DD5652DFC1D58, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, IndexedSet_1_Insert_mB43CB3AA6D461E94217E51DE6DD4ED3F5E1607CD_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_RemoveAt_m5EA6CD03F4AEE2C8CDFA09F397C8510E23372D85_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	{
		// T item = m_List[index];
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_0 = (RuntimeObject *)L_2;
		// m_Dictionary.Remove(item);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_3 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_4 = V_0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_3);
		((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// if (index == m_List.Count - 1)
		int32_t L_5 = ___index0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_6 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_6);
		int32_t L_7 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1))))))
		{
			goto IL_0037;
		}
	}
	{
		// m_List.RemoveAt(index);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_9 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return;
	}

IL_0037:
	{
		// int replaceItemIndex = m_List.Count - 1;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_10 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10);
		int32_t L_11 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
		// T replaceItem = m_List[replaceItemIndex];
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_12 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_13 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_12);
		RuntimeObject * L_14 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_12, (int32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_2 = (RuntimeObject *)L_14;
		// m_List[index] = replaceItem;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_15 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_16 = ___index0;
		RuntimeObject * L_17 = V_2;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_15);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_15, (int32_t)L_16, (RuntimeObject *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		// m_Dictionary[replaceItem] = index;
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_18 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_19 = V_2;
		int32_t L_20 = ___index0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_18);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_18, (RuntimeObject *)L_19, (int32_t)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		// m_List.RemoveAt(replaceItemIndex);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_21 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_22 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_21);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_21, (int32_t)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		// }
		return;
	}
}
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * IndexedSet_1_get_Item_m8038D1362CB76F6CE791721319823B86D9DD2797_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// get { return m_List[index]; }
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_set_Item_m382EAB9C2EBB858128026BE1AF5BD60A06A836A6_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// T item = m_List[index];
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_0 = (RuntimeObject *)L_2;
		// m_Dictionary.Remove(item);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_3 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_4 = V_0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_3);
		((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// m_List[index] = value;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_6 = ___index0;
		RuntimeObject * L_7 = ___value1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5, (int32_t)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		// m_Dictionary.Add(item, index);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_8 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_9 = V_0;
		int32_t L_10 = ___index0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_8);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_8, (RuntimeObject *)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_RemoveAll_mE8AD13F9BC00551D303C9301BCA161E2E291D395_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___match0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		// int i = 0;
		V_0 = (int32_t)0;
		goto IL_0028;
	}

IL_0004:
	{
		// T item = m_List[i];
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = V_0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_1 = (RuntimeObject *)L_2;
		// if (match(item))
		Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * L_3 = ___match0;
		RuntimeObject * L_4 = V_1;
		NullCheck((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_3);
		bool L_5 = ((  bool (*) (Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		// Remove(item);
		RuntimeObject * L_6 = V_1;
		NullCheck((IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C *)__this);
		((  bool (*) (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C *)__this, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
		goto IL_0028;
	}

IL_0024:
	{
		// i++;
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0028:
	{
		// while (i < m_List.Count)
		int32_t L_8 = V_0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_9 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9);
		int32_t L_10 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Sort_mA748E0136CD04139BF95AF1EFE828776AA2FA9D4_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 * ___sortLayoutFunction0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		// m_List.Sort(sortLayoutFunction);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 * L_1 = ___sortLayoutFunction0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		// for (int i = 0; i < m_List.Count; ++i)
		V_0 = (int32_t)0;
		goto IL_002e;
	}

IL_0010:
	{
		// T item = m_List[i];
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_3 = V_0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2);
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_1 = (RuntimeObject *)L_4;
		// m_Dictionary[item] = i;
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_5 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_5);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_5, (RuntimeObject *)L_6, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		// for (int i = 0; i < m_List.Count; ++i)
		int32_t L_8 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002e:
	{
		// for (int i = 0; i < m_List.Count; ++i)
		int32_t L_9 = V_0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_10 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10);
		int32_t L_11 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1__ctor_m78A15E3E0B20E8E78B6D3502F8CA7EE753AD0818_gshared (IndexedSet_1_t240606B62D2B3D9912AED248655C0479DD5BDE0C * __this, const RuntimeMethod* method)
{
	{
		// readonly List<T> m_List = new List<T>();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		__this->set_m_List_0(L_0);
		// Dictionary<T, int> m_Dictionary = new Dictionary<T, int>();
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_1 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20));
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		__this->set_m_Dictionary_1(L_1);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_mF6B911DFD8723188732C99D4142571A0B6E851E3_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_IDisposable_Dispose_mA7325546FC25696F84C8ACD61A9D18859C95CEA6_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__2_MoveNext_m1F9733709DEC4B352BBFD9939F2B27D0A01137AF_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_MoveNext_m1F9733709DEC4B352BBFD9939F2B27D0A01137AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float G_B8_0 = 0.0f;
	U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * G_B8_1 = NULL;
	float G_B7_0 = 0.0f;
	U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * G_B9_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_U3CU3E1__state_0();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00a8;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!tweenInfo.ValidTarget())
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_3 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		bool L_4 = ColorTween_ValidTarget_mCFF8428CFF8D45A85E4EE612263E751ED0B5987C((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_002f:
	{
		// var elapsedTime = 0.0f;
		__this->set_U3CelapsedTimeU3E5__2_3((0.0f));
		goto IL_00af;
	}

IL_003c:
	{
		// elapsedTime += tweenInfo.ignoreTimeScale ? Time.unscaledDeltaTime : Time.deltaTime;
		float L_5 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_6 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		bool L_7 = ColorTween_get_ignoreTimeScale_m6A06826E19314EFE9783E505C75CFC76E42E8F05_inline((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_6, /*hidden argument*/NULL);
		G_B7_0 = L_5;
		G_B7_1 = ((U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)(__this));
		if (L_7)
		{
			G_B8_0 = L_5;
			G_B8_1 = ((U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)(__this));
			goto IL_005d;
		}
	}
	{
		float L_8 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		G_B9_0 = L_8;
		G_B9_1 = G_B7_0;
		G_B9_2 = ((U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)(G_B7_1));
		goto IL_0062;
	}

IL_005d:
	{
		float L_9 = Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2(/*hidden argument*/NULL);
		G_B9_0 = L_9;
		G_B9_1 = G_B8_0;
		G_B9_2 = ((U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)(G_B8_1));
	}

IL_0062:
	{
		NullCheck(G_B9_2);
		G_B9_2->set_U3CelapsedTimeU3E5__2_3(((float)il2cpp_codegen_add((float)G_B9_1, (float)G_B9_0)));
		// var percentage = Mathf.Clamp01(elapsedTime / tweenInfo.duration);
		float L_10 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_11 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		float L_12 = ColorTween_get_duration_mC4A1E3C2EA46A5C657A2B9DA240C796F770ECC5F_inline((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B((float)((float)((float)L_10/(float)L_12)), /*hidden argument*/NULL);
		V_1 = (float)L_13;
		// tweenInfo.TweenValue(percentage);
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_14 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		float L_15 = V_1;
		ColorTween_TweenValue_m20FCBA50CE9328956973861A9CB0A1FD97265A58((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_14, (float)L_15, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a8:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00af:
	{
		// while (elapsedTime < tweenInfo.duration)
		float L_16 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_17 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		float L_18 = ColorTween_get_duration_mC4A1E3C2EA46A5C657A2B9DA240C796F770ECC5F_inline((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_17, /*hidden argument*/NULL);
		if ((((float)L_16) < ((float)L_18)))
		{
			goto IL_003c;
		}
	}
	{
		// tweenInfo.TweenValue(1.0f);
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_19 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		ColorTween_TweenValue_m20FCBA50CE9328956973861A9CB0A1FD97265A58((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_19, (float)(1.0f), /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m761E2EC945A4EEC1CB3738E59CC7C953317FE4DB_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m605D45F96449D5CF6DDFACF60880651C85F29195_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m605D45F96449D5CF6DDFACF60880651C85F29195_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m605D45F96449D5CF6DDFACF60880651C85F29195_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_IEnumerator_get_Current_m436A52941A440E22575D1CDBA63A3C6BE1B9903E_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
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
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_m7F91B2018BD9A84A855E44C0F88566C748C6052C_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_IDisposable_Dispose_mF42D4A1DF8911EFB9E84343443F932F1FDA9F7D5_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__2_MoveNext_m072CCA02187FAAE6E23766279083847801807198_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_MoveNext_m072CCA02187FAAE6E23766279083847801807198_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float G_B8_0 = 0.0f;
	U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * G_B8_1 = NULL;
	float G_B7_0 = 0.0f;
	U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * G_B9_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_U3CU3E1__state_0();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00a8;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!tweenInfo.ValidTarget())
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_3 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		bool L_4 = FloatTween_ValidTarget_m917EB0D30E72AC75D90D1D8F11B1D7EBBD00ECAE((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_002f:
	{
		// var elapsedTime = 0.0f;
		__this->set_U3CelapsedTimeU3E5__2_3((0.0f));
		goto IL_00af;
	}

IL_003c:
	{
		// elapsedTime += tweenInfo.ignoreTimeScale ? Time.unscaledDeltaTime : Time.deltaTime;
		float L_5 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_6 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		bool L_7 = FloatTween_get_ignoreTimeScale_mA7B69D72E1D52EF1890C89D5690D345B852C7239_inline((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_6, /*hidden argument*/NULL);
		G_B7_0 = L_5;
		G_B7_1 = ((U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)(__this));
		if (L_7)
		{
			G_B8_0 = L_5;
			G_B8_1 = ((U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)(__this));
			goto IL_005d;
		}
	}
	{
		float L_8 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		G_B9_0 = L_8;
		G_B9_1 = G_B7_0;
		G_B9_2 = ((U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)(G_B7_1));
		goto IL_0062;
	}

IL_005d:
	{
		float L_9 = Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2(/*hidden argument*/NULL);
		G_B9_0 = L_9;
		G_B9_1 = G_B8_0;
		G_B9_2 = ((U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)(G_B8_1));
	}

IL_0062:
	{
		NullCheck(G_B9_2);
		G_B9_2->set_U3CelapsedTimeU3E5__2_3(((float)il2cpp_codegen_add((float)G_B9_1, (float)G_B9_0)));
		// var percentage = Mathf.Clamp01(elapsedTime / tweenInfo.duration);
		float L_10 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_11 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		float L_12 = FloatTween_get_duration_mBECFBEC57BDC30B54D0638873BA3313A8F7232F5_inline((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B((float)((float)((float)L_10/(float)L_12)), /*hidden argument*/NULL);
		V_1 = (float)L_13;
		// tweenInfo.TweenValue(percentage);
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_14 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		float L_15 = V_1;
		FloatTween_TweenValue_m4E4418FB7FBDC7CBF96D95518DFACF25BCBE8EB3((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_14, (float)L_15, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a8:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00af:
	{
		// while (elapsedTime < tweenInfo.duration)
		float L_16 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_17 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		float L_18 = FloatTween_get_duration_mBECFBEC57BDC30B54D0638873BA3313A8F7232F5_inline((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_17, /*hidden argument*/NULL);
		if ((((float)L_16) < ((float)L_18)))
		{
			goto IL_003c;
		}
	}
	{
		// tweenInfo.TweenValue(1.0f);
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_19 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		FloatTween_TweenValue_m4E4418FB7FBDC7CBF96D95518DFACF25BCBE8EB3((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_19, (float)(1.0f), /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1D242745AC7E056D542481D3A98C6FDCF5EA5ACB_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m4AE666FAF40BAF18CA8D1BCAFDB0D428DEA5DFF8_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m4AE666FAF40BAF18CA8D1BCAFDB0D428DEA5DFF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m4AE666FAF40BAF18CA8D1BCAFDB0D428DEA5DFF8_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_IEnumerator_get_Current_mB6E49CF1A10907385C7B0EDB922F3C7D1012CDC9_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
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
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Start(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m8B003840E8B2AD193FFC9B659EF4CB1460F2CEA1_gshared (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  ___tweenInfo0, const RuntimeMethod* method)
{
	{
		U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * L_0 = (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * L_1 = (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)L_0;
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  L_2 = ___tweenInfo0;
		NullCheck(L_1);
		L_1->set_tweenInfo_2(L_2);
		return L_1;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Init(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_Init_m8438EFCEA89C17CF6245208A3735D2B95BFB9647_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___coroutineContainer0, const RuntimeMethod* method)
{
	{
		// m_CoroutineContainer = coroutineContainer;
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StartTween(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_m96867F74662CBAED655A9C7B3AF0036E5282F945_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_StartTween_m96867F74662CBAED655A9C7B3AF0036E5282F945_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_CoroutineContainer == null)
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogWarning("Coroutine container not configured... did you forget to call Init?");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568((RuntimeObject *)_stringLiteralA413973124713A2B7B3570CE8D97C7151C8628A9, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0019:
	{
		// StopTween();
		NullCheck((TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 *)__this);
		((  void (*) (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// if (!m_CoroutineContainer.gameObject.activeInHierarchy)
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_2 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3);
		bool L_4 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		// info.TweenValue(1.0f);
		ColorTween_TweenValue_m20FCBA50CE9328956973861A9CB0A1FD97265A58((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0044:
	{
		// m_Tween = Start(info);
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  L_5 = ___info0;
		RuntimeObject* L_6 = ((  RuntimeObject* (*) (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Tween_1(L_6);
		// m_CoroutineContainer.StartCoroutine(m_Tween);
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_7 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_7);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_7, (RuntimeObject*)L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StopTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m3E7518DEC0FF807C68619D211A352C7BF63D9572_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, const RuntimeMethod* method)
{
	{
		// if (m_Tween != null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_Tween_1();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// m_CoroutineContainer.StopCoroutine(m_Tween);
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_1 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_1);
		MonoBehaviour_StopCoroutine_m3CDD6C046CC660D4CD6583FCE97F88A9735FD5FA((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		// m_Tween = null;
		__this->set_m_Tween_1((RuntimeObject*)NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_m354D2C09591A71CED72679E2056283296B7AC02B_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Start(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m0E35A54AAC11F13006A869FF0F3BA6FDDB2DF325_gshared (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  ___tweenInfo0, const RuntimeMethod* method)
{
	{
		U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * L_0 = (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * L_1 = (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)L_0;
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  L_2 = ___tweenInfo0;
		NullCheck(L_1);
		L_1->set_tweenInfo_2(L_2);
		return L_1;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Init(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_Init_m17E5E1BE0EB8226EA16AA2C2AB572E1B225BECD2_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___coroutineContainer0, const RuntimeMethod* method)
{
	{
		// m_CoroutineContainer = coroutineContainer;
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StartTween(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_m1C12D6475DFCA47D74844FD2395C1057AF1CA41D_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_StartTween_m1C12D6475DFCA47D74844FD2395C1057AF1CA41D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_CoroutineContainer == null)
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogWarning("Coroutine container not configured... did you forget to call Init?");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568((RuntimeObject *)_stringLiteralA413973124713A2B7B3570CE8D97C7151C8628A9, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0019:
	{
		// StopTween();
		NullCheck((TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF *)__this);
		((  void (*) (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// if (!m_CoroutineContainer.gameObject.activeInHierarchy)
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_2 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3);
		bool L_4 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		// info.TweenValue(1.0f);
		FloatTween_TweenValue_m4E4418FB7FBDC7CBF96D95518DFACF25BCBE8EB3((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0044:
	{
		// m_Tween = Start(info);
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  L_5 = ___info0;
		RuntimeObject* L_6 = ((  RuntimeObject* (*) (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Tween_1(L_6);
		// m_CoroutineContainer.StartCoroutine(m_Tween);
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_7 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_7);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_7, (RuntimeObject*)L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StopTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_mE648D0014C6DC19A996F304E657BA46278ABC420_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, const RuntimeMethod* method)
{
	{
		// if (m_Tween != null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_Tween_1();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// m_CoroutineContainer.StopCoroutine(m_Tween);
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_1 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_1);
		MonoBehaviour_StopCoroutine_m3CDD6C046CC660D4CD6583FCE97F88A9735FD5FA((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		// m_Tween = null;
		__this->set_m_Tween_1((RuntimeObject*)NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_m3BA236F3CC80F207C28B3A6B2D5C116C483AE872_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_mDB9FD3593823FE30F7CFAB286C1D3881990CECEE_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___l0, const RuntimeMethod* method)
{
	{
		// static void Clear(List<T> l) { l.Clear(); }
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = ___l0;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0);
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// static void Clear(List<T> l) { l.Clear(); }
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Int32>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ListPool_1_Get_mE7663F36254E817D56A40A8CDE5BF801AAF92542_gshared (const RuntimeMethod* method)
{
	{
		// return s_ListPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B * L_0 = ((ListPool_1_tCDBE9EE6C0FC882FB66BA0B6D36CA8E17652B15A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B *)L_0);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = ((  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * (*) (ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m11EA81E78327EFE2672086B352A5A68F653ADD1F_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___toRelease0, const RuntimeMethod* method)
{
	{
		// s_ListPool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B * L_0 = ((ListPool_1_tCDBE9EE6C0FC882FB66BA0B6D36CA8E17652B15A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B *)L_0);
		((  void (*) (ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B *, List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B *)L_0, (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_mF2A2E1354E84E58BE5B600862D62C4ACE2E5994F_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly ObjectPool<List<T>> s_ListPool = new ObjectPool<List<T>>(null, Clear);
		UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A * L_0 = (UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B * L_1 = (ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tE40D9BEC5B067540DB2F9331C8AD1F3B071F974B *, UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A *, UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A *)NULL, (UnityAction_1_tCFF1D446AB859368D0E404A2D6738C98E10FCC6A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tCDBE9EE6C0FC882FB66BA0B6D36CA8E17652B15A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Void UnityEngine.UI.ListPool`1<System.Object>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m3765E01E233E7ADD214A7665B2988D16ABDDA472_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___l0, const RuntimeMethod* method)
{
	{
		// static void Clear(List<T> l) { l.Clear(); }
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = ___l0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// static void Clear(List<T> l) { l.Clear(); }
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ListPool_1_Get_mD763F64B9987BBE7DC6092E7C6014A51106D1362_gshared (const RuntimeMethod* method)
{
	{
		// return s_ListPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE * L_0 = ((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE *)L_0);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ((  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * (*) (ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Object>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m377C6B9E4F57B5F932E838F423B6204E45FF45A5_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___toRelease0, const RuntimeMethod* method)
{
	{
		// s_ListPool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE * L_0 = ((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE *)L_0);
		((  void (*) (ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE *)L_0, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m3496A882F0AD7E4968CE0CF81F33EB1FF21158F5_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly ObjectPool<List<T>> s_ListPool = new ObjectPool<List<T>>(null, Clear);
		UnityAction_1_tDEF40749C3309C99C0622A39D22422E683051C67 * L_0 = (UnityAction_1_tDEF40749C3309C99C0622A39D22422E683051C67 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_tDEF40749C3309C99C0622A39D22422E683051C67 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE * L_1 = (ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t3A70BDB59315D0B41F26C2019575B584BE9816CE *, UnityAction_1_tDEF40749C3309C99C0622A39D22422E683051C67 *, UnityAction_1_tDEF40749C3309C99C0622A39D22422E683051C67 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_tDEF40749C3309C99C0622A39D22422E683051C67 *)NULL, (UnityAction_1_tDEF40749C3309C99C0622A39D22422E683051C67 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m8CA2445008A4E9AE47B9A12476C9137F7280548D_gshared (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ___l0, const RuntimeMethod* method)
{
	{
		// static void Clear(List<T> l) { l.Clear(); }
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_0 = ___l0;
		NullCheck((List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *)L_0);
		((  void (*) (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// static void Clear(List<T> l) { l.Clear(); }
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ListPool_1_Get_mC0EBE105137C878FC9B9EF547C6A49850D26FAED_gshared (const RuntimeMethod* method)
{
	{
		// return s_ListPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 * L_0 = ((ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 *)L_0);
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_1 = ((  List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * (*) (ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m53CA5C7991B0F21FE9ADE77FF03A67882C7400E2_gshared (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ___toRelease0, const RuntimeMethod* method)
{
	{
		// s_ListPool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 * L_0 = ((ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 *)L_0);
		((  void (*) (ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 *, List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 *)L_0, (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m8963863F58DA18195F28B03D3EB55AF3FCAD005D_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly ObjectPool<List<T>> s_ListPool = new ObjectPool<List<T>>(null, Clear);
		UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 * L_0 = (UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 * L_1 = (ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tA42695C1C422850E35146976898DA19272914AC8 *, UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 *, UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 *)NULL, (UnityAction_1_tBFC448984D861333BFB83317707C2F208D61E3D1 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m111FC0DF82D2C8A9F0A93D535F022BAD0B61E809_gshared (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ___l0, const RuntimeMethod* method)
{
	{
		// static void Clear(List<T> l) { l.Clear(); }
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_0 = ___l0;
		NullCheck((List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *)L_0);
		((  void (*) (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// static void Clear(List<T> l) { l.Clear(); }
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ListPool_1_Get_mAC3BD476854BD242EF7B65950D86C4A12761F461_gshared (const RuntimeMethod* method)
{
	{
		// return s_ListPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 * L_0 = ((ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 *)L_0);
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_1 = ((  List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * (*) (ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m8B379A7621039BF3ABE82280D6ABD4606F3459F9_gshared (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ___toRelease0, const RuntimeMethod* method)
{
	{
		// s_ListPool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 * L_0 = ((ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 *)L_0);
		((  void (*) (ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 *, List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 *)L_0, (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m09F39A9E0242FE6E549173DE14DDC8C41AB542B2_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly ObjectPool<List<T>> s_ListPool = new ObjectPool<List<T>>(null, Clear);
		UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A * L_0 = (UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 * L_1 = (ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t8C6F590942FFC5DFF0DF79569711056BE7883062 *, UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A *, UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A *)NULL, (UnityAction_1_t6CAED93F6613F01731695AAC7F8201ABB209CC0A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m48D5FAC919131FCD61A7B62577B6C4C5043FB6C7_gshared (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___l0, const RuntimeMethod* method)
{
	{
		// static void Clear(List<T> l) { l.Clear(); }
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_0 = ___l0;
		NullCheck((List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)L_0);
		((  void (*) (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// static void Clear(List<T> l) { l.Clear(); }
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ListPool_1_Get_m4095D588F45966ACF43C1C5D1390D7E3F6E388C7_gshared (const RuntimeMethod* method)
{
	{
		// return s_ListPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 * L_0 = ((ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 *)L_0);
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_1 = ((  List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * (*) (ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m696D12DB4E7D73886B746B87B7491B200ED0F8F0_gshared (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___toRelease0, const RuntimeMethod* method)
{
	{
		// s_ListPool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 * L_0 = ((ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 *)L_0);
		((  void (*) (ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 *, List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 *)L_0, (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m5A0004898A4F7854EA5B0E9394EE822C3B2275DF_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly ObjectPool<List<T>> s_ListPool = new ObjectPool<List<T>>(null, Clear);
		UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC * L_0 = (UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 * L_1 = (ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t592C52579DFFCDED9A816AE87CA33C2A992F7E26 *, UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC *, UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC *)NULL, (UnityAction_1_tAF537B97BFBDAFB0D27DBBE2DC414D654B6C41EC *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m362B6B736C6D546692C23E8A44C47F56C3B236F9_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___l0, const RuntimeMethod* method)
{
	{
		// static void Clear(List<T> l) { l.Clear(); }
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = ___l0;
		NullCheck((List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_0);
		((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// static void Clear(List<T> l) { l.Clear(); }
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ListPool_1_Get_m8A0AAD805F41A1FD12A20327638FB81947677A4A_gshared (const RuntimeMethod* method)
{
	{
		// return s_ListPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 * L_0 = ((ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 *)L_0);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_1 = ((  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * (*) (ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_mE909A7A9F124C64BF0014554CF1679F93F7F9544_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___toRelease0, const RuntimeMethod* method)
{
	{
		// s_ListPool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 * L_0 = ((ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 *)L_0);
		((  void (*) (ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 *, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 *)L_0, (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m27499BE3966E501959E8957FE81F00639E383216_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly ObjectPool<List<T>> s_ListPool = new ObjectPool<List<T>>(null, Clear);
		UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA * L_0 = (UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 * L_1 = (ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t559B14380295E744507B0BF258F6EB60B6D3B902 *, UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA *, UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA *)NULL, (UnityAction_1_tFFEAFE33FC07D89E336EC0E8863403BAC10853CA *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m67D074308DE6FFFBA1B99BDE569FFDACE5CE4243_gshared (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ___l0, const RuntimeMethod* method)
{
	{
		// static void Clear(List<T> l) { l.Clear(); }
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_0 = ___l0;
		NullCheck((List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *)L_0);
		((  void (*) (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// static void Clear(List<T> l) { l.Clear(); }
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ListPool_1_Get_mF32AE75B27464EE9535E8C1AE7D14B948B2A7281_gshared (const RuntimeMethod* method)
{
	{
		// return s_ListPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 * L_0 = ((ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 *)L_0);
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_1 = ((  List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * (*) (ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_mF52D201E89E59068809EE4F76B2B69086F6EBC6E_gshared (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ___toRelease0, const RuntimeMethod* method)
{
	{
		// s_ListPool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 * L_0 = ((ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 *)L_0);
		((  void (*) (ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 *, List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 *)L_0, (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m322FE00775BB7CD39B3E2B828D85FB50BB75CFE5_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly ObjectPool<List<T>> s_ListPool = new ObjectPool<List<T>>(null, Clear);
		UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 * L_0 = (UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 * L_1 = (ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tB6CF67DEBE320D035ADE0A7E0AB9B2C8F96E7338 *, UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 *, UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 *)NULL, (UnityAction_1_t4CA653A7B54DA3D30EC370F89843FDF53F602008 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countAll_m63DF483CE87C8C8576E1B7AC0EF5F6A1F17725C6_gshared (ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B * __this, const RuntimeMethod* method)
{
	{
		// public int countAll { get; private set; }
		int32_t L_0 = (int32_t)__this->get_U3CcountAllU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_set_countAll_m12C0E8F9D75242332DF8B262A1002E5C9D9BF750_gshared (ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int countAll { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CcountAllU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countActive_m1F40AA1D7F704C4AEEA93B35406C516FBF8D6D6B_gshared (ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B * __this, const RuntimeMethod* method)
{
	{
		// public int countActive { get { return countAll - countInactive; } }
		NullCheck((ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B *)__this);
		int32_t L_0 = ((  int32_t (*) (ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B *)__this);
		int32_t L_1 = ((  int32_t (*) (ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countInactive_mF5825E870D989664981D381110E4430BAEC30B32_gshared (ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B * __this, const RuntimeMethod* method)
{
	{
		// public int countInactive { get { return m_Stack.Count; } }
		Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * L_0 = (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_m2D9E8D06AAF43A706B02D87137D55B8B0F64E66A_gshared (ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___actionOnGet0, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___actionOnRelease1, const RuntimeMethod* method)
{
	{
		// private readonly Stack<T> m_Stack = new Stack<T>();
		Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * L_0 = (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Stack_0(L_0);
		// public ObjectPool(UnityAction<T> actionOnGet, UnityAction<T> actionOnRelease)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		// m_ActionOnGet = actionOnGet;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_1 = ___actionOnGet0;
		__this->set_m_ActionOnGet_1(L_1);
		// m_ActionOnRelease = actionOnRelease;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_2 = ___actionOnRelease1;
		__this->set_m_ActionOnRelease_2(L_2);
		// }
		return;
	}
}
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectPool_1_Get_m8D5DE92D04BE91AE7DD9C1B767C183EC9DE98952_gshared (ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (m_Stack.Count == 0)
		Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * L_0 = (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		// element = new T();
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (RuntimeObject *)L_2;
		// countAll++;
		NullCheck((ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B *)__this);
		int32_t L_3 = ((  int32_t (*) (ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_1 = (int32_t)L_3;
		int32_t L_4 = V_1;
		NullCheck((ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B *)__this);
		((  void (*) (ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B *)__this, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// }
		goto IL_0031;
	}

IL_0025:
	{
		// element = m_Stack.Pop();
		Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * L_5 = (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_5);
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		V_0 = (RuntimeObject *)L_6;
	}

IL_0031:
	{
		// if (m_ActionOnGet != null)
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_7 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnGet_1();
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		// m_ActionOnGet(element);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_8 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnGet_1();
		RuntimeObject * L_9 = V_0;
		NullCheck((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_8);
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0045:
	{
		// return element;
		RuntimeObject * L_10 = V_0;
		return L_10;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m11F10A7199F0544250785EAA41F819E03D65BC17_gshared (ObjectPool_1_t3EF1AC01FF09BFF602D9F00F7E9C508ED5883E9B * __this, RuntimeObject * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_Release_m11F10A7199F0544250785EAA41F819E03D65BC17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Stack.Count > 0 && ReferenceEquals(m_Stack.Peek(), element))
		Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * L_0 = (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * L_2 = (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_2);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		RuntimeObject * L_4 = ___element0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_3) == ((RuntimeObject*)(RuntimeObject *)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		// Debug.LogError("Internal error. Trying to destroy object that is already released to pool.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral04231B44477132B3DBEFE7768A921AE5A13A00FC, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// if (m_ActionOnRelease != null)
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_5 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnRelease_2();
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		// m_ActionOnRelease(element);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_6 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnRelease_2();
		RuntimeObject * L_7 = ___element0;
		NullCheck((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_6);
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0044:
	{
		// m_Stack.Push(element);
		Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * L_8 = (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)__this->get_m_Stack_0();
		RuntimeObject * L_9 = ___element0;
		NullCheck((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_8);
		((  void (*) (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
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
// System.Void UnityEngine.UIElements.CommandEventBase`1<System.Object>::set_commandName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandEventBase_1_set_commandName_mA644E54F2B1E2F5265F9A56961B895E617CAAB4C_gshared (CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_CommandName_18(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.CommandEventBase`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandEventBase_1_Init_mC53A7B53D22A698CB05784D5244C0E7964250323_gshared (CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this);
		((  void (*) (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 *)__this);
		((  void (*) (CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return;
	}
}
// System.Void UnityEngine.UIElements.CommandEventBase`1<System.Object>::LocalInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandEventBase_1_LocalInit_mFEF536CA6FE8B12E5FF45231B8F85B933BBE6767_gshared (CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_set_propagation_mF770530A5B592FAB33C549ED74453ABC7ED0E7A6_inline((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (int32_t)7, /*hidden argument*/NULL);
		NullCheck((CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 *)__this);
		((  void (*) (CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 *)__this, (String_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// T UnityEngine.UIElements.CommandEventBase`1<System.Object>::GetPooled(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CommandEventBase_1_GetPooled_m0BF68730B0CAC2781C8D3755EC42C1428227EF0B_gshared (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___systemEvent0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject * L_1 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_2 = ___systemEvent0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_1);
		EventBase_set_imguiEvent_mD693DAF0735050C06640E8C9DD5683E210D18E15((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_1, (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_2, /*hidden argument*/NULL);
		RuntimeObject * L_3 = V_0;
		V_1 = (RuntimeObject *)L_3;
		goto IL_0018;
	}

IL_0018:
	{
		RuntimeObject * L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.UIElements.CommandEventBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandEventBase_1__ctor_m89F9F94189AF956517AF1C329123B5E420A33B67_gshared (CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		NullCheck((CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 *)__this);
		((  void (*) (CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
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
// System.Void UnityEngine.UIElements.DragAndDropEventBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragAndDropEventBase_1__ctor_m5B911051D0091E035D14BDB13F7DE91FCDF20027_gshared (DragAndDropEventBase_1_t51BA6B73A83CFDD23CEE8C4C4F5F832642AF0844 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.UIElements.EventBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_1__ctor_mEA6B57DEA212E685AF6A9751E25B844523693764_gshared (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventBase_1__ctor_mEA6B57DEA212E685AF6A9751E25B844523693764_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_il2cpp_TypeInfo_var);
		EventBase__ctor_m7F4C2BE69598419344BB6C2FAC18252234F50CAD((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, /*hidden argument*/NULL);
		__this->set_m_RefCount_17(0);
		return;
	}
}
// System.Int64 UnityEngine.UIElements.EventBase`1<System.Object>::TypeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EventBase_1_TypeId_m2C5F51E0B64681DED8FAC6C2E8E6B422F5B62AF7_gshared (const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int64_t L_0 = ((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_s_TypeId_15();
		V_0 = (int64_t)L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UIElements.EventBase`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_1_Init_mE11F413B0B7AC707C9945CB95C7046B1EB3DBE53_gshared (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventBase_1_Init_mE11F413B0B7AC707C9945CB95C7046B1EB3DBE53_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_Init_m025BEC823C26718B5ED6CADD395D591677CB39A5((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, /*hidden argument*/NULL);
		int32_t L_0 = (int32_t)__this->get_m_RefCount_17();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708((RuntimeObject *)_stringLiteral4E73D0FB4BEE99484EF3F5331A156AE1760807C2, /*hidden argument*/NULL);
		__this->set_m_RefCount_17(0);
	}

IL_0029:
	{
		return;
	}
}
// T UnityEngine.UIElements.EventBase`1<System.Object>::GetPooled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * EventBase_1_GetPooled_m8F0318E5CB97E139D94EEB68C5A066809EE1BC4E_gshared (const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * L_0 = ((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_s_Pool_16();
		NullCheck((ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = (RuntimeObject *)L_1;
		RuntimeObject * L_2 = V_0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_2);
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.UIElements.EventBase::Init() */, (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_2);
		RuntimeObject * L_3 = V_0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_3);
		EventBase_set_pooled_m3AC9AF90D2F4BF55A9EC0499B9197A0916CAC664((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_3, (bool)1, /*hidden argument*/NULL);
		RuntimeObject * L_4 = V_0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_4);
		VirtActionInvoker0::Invoke(13 /* System.Void UnityEngine.UIElements.EventBase::Acquire() */, (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_4);
		RuntimeObject * L_5 = V_0;
		V_1 = (RuntimeObject *)L_5;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// T UnityEngine.UIElements.EventBase`1<System.Object>::GetPooled(UnityEngine.UIElements.EventBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * EventBase_1_GetPooled_m55CFD01114A646D879EC5DB221E3BDDFEDE821C9_gshared (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * ___e0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = (RuntimeObject *)L_0;
		EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * L_1 = ___e0;
		V_1 = (bool)((!(((RuntimeObject*)(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject * L_3 = V_0;
		EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * L_4 = ___e0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_4);
		uint64_t L_5 = EventBase_get_eventId_mAECD1254234BF118F42559AC0B717A64E7F27517_inline((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_4, /*hidden argument*/NULL);
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_3);
		EventBase_SetTriggerEventId_m2A0B5984F003A2AFB57502FF8DD3A42AF75C08DA((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_3, (uint64_t)L_5, /*hidden argument*/NULL);
	}

IL_0023:
	{
		RuntimeObject * L_6 = V_0;
		V_2 = (RuntimeObject *)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject * L_7 = V_2;
		return L_7;
	}
}
// System.Void UnityEngine.UIElements.EventBase`1<System.Object>::ReleasePooled(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_1_ReleasePooled_mC6E54820754CC7354311DEEB607F61B9BC022FB4_gshared (RuntimeObject * ___evt0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		RuntimeObject * L_0 = ___evt0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_0);
		bool L_1 = EventBase_get_pooled_m9D5F816B4A1B445B7F31DF5F7814F60400217BFE((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_0, /*hidden argument*/NULL);
		V_0 = (bool)L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject * L_3 = ___evt0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_3);
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.UIElements.EventBase::Init() */, (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * L_4 = ((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_s_Pool_16();
		RuntimeObject * L_5 = ___evt0;
		NullCheck((ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)L_4);
		((  void (*) (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)((ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)L_4, (RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RuntimeObject * L_6 = ___evt0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_6);
		EventBase_set_pooled_m3AC9AF90D2F4BF55A9EC0499B9197A0916CAC664((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_6, (bool)0, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.EventBase`1<System.Object>::Acquire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_1_Acquire_m0A678CA778559003C03F0BEB3E6B7207924620CE_gshared (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_RefCount_17();
		__this->set_m_RefCount_17(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		return;
	}
}
// System.Void UnityEngine.UIElements.EventBase`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_1_Dispose_mE2258391914EE0218D46650DD28F23486F032C30_gshared (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_m_RefCount_17();
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1));
		int32_t L_1 = V_1;
		__this->set_m_RefCount_17(L_1);
		int32_t L_2 = V_1;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
	}

IL_0027:
	{
		return;
	}
}
// System.Int64 UnityEngine.UIElements.EventBase`1<System.Object>::get_eventTypeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EventBase_1_get_eventTypeId_m4B239F1331806D7F3D6767E979DBDCBFA52ED16E_gshared (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 * __this, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		int64_t L_0 = ((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->get_s_TypeId_15();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.EventBase`1<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_1__cctor_mB936C2021EEEDB142183DEA0757DA68CAC2868D4_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventBase_1__cctor_mB936C2021EEEDB142183DEA0757DA68CAC2868D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_il2cpp_TypeInfo_var);
		int64_t L_0 = EventBase_RegisterEventType_mD202AAEEC9F80263CAF503390454A1C6681B6133(/*hidden argument*/NULL);
		((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set_s_TypeId_15(L_0);
		ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * L_1 = (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((  void (*) (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)(L_1, (int32_t)((int32_t)100), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set_s_Pool_16(L_1);
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
// UnityEngine.UIElements.Focusable UnityEngine.UIElements.FocusEventBase`1<System.Object>::get_relatedTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B * FocusEventBase_1_get_relatedTarget_mE376B79C73A53AA4B94C2CF634C878B4AA6F9DD3_gshared (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 * __this, const RuntimeMethod* method)
{
	{
		Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B * L_0 = (Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B *)__this->get_U3CrelatedTargetU3Ek__BackingField_18();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.FocusEventBase`1<System.Object>::set_relatedTarget(UnityEngine.UIElements.Focusable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FocusEventBase_1_set_relatedTarget_m378332F61E6C4752714CC8ED31DA7CC6BF487F52_gshared (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 * __this, Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B * ___value0, const RuntimeMethod* method)
{
	{
		Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B * L_0 = ___value0;
		__this->set_U3CrelatedTargetU3Ek__BackingField_18(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.FocusEventBase`1<System.Object>::set_direction(UnityEngine.UIElements.FocusChangeDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FocusEventBase_1_set_direction_m5A2AA61816F5E2CF9CDAF8F61DC527AC954F2232_gshared (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 * __this, FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * ___value0, const RuntimeMethod* method)
{
	{
		FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * L_0 = ___value0;
		__this->set_U3CdirectionU3Ek__BackingField_19(L_0);
		return;
	}
}
// UnityEngine.UIElements.FocusController UnityEngine.UIElements.FocusEventBase`1<System.Object>::get_focusController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 * FocusEventBase_1_get_focusController_mAC3F3DA95156622C81E9868B94BC16A59F2E1543_gshared (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 * __this, const RuntimeMethod* method)
{
	{
		FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 * L_0 = (FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 *)__this->get_U3CfocusControllerU3Ek__BackingField_20();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.FocusEventBase`1<System.Object>::set_focusController(UnityEngine.UIElements.FocusController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FocusEventBase_1_set_focusController_m33FF9B6EC9CA46A350CBC901D97F9EB9FFA7CABA_gshared (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 * __this, FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 * ___value0, const RuntimeMethod* method)
{
	{
		FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 * L_0 = ___value0;
		__this->set_U3CfocusControllerU3Ek__BackingField_20(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.FocusEventBase`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FocusEventBase_1_Init_m4D79427ECB7C2D823BA60B96BA7BCE5E5AA4D3AE_gshared (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this);
		((  void (*) (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)__this);
		((  void (*) (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return;
	}
}
// System.Void UnityEngine.UIElements.FocusEventBase`1<System.Object>::LocalInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FocusEventBase_1_LocalInit_mA55F0B1FC448FD0E1FB76315A1106748462AFB48_gshared (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FocusEventBase_1_LocalInit_mA55F0B1FC448FD0E1FB76315A1106748462AFB48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_set_propagation_mF770530A5B592FAB33C549ED74453ABC7ED0E7A6_inline((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (int32_t)2, /*hidden argument*/NULL);
		NullCheck((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)__this);
		((  void (*) (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *, Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)__this, (Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		IL2CPP_RUNTIME_CLASS_INIT(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_il2cpp_TypeInfo_var);
		FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * L_0 = FocusChangeDirection_get_unspecified_m72CA7BA378E9E8EF915B6997E7F0601DACE6E2A8_inline(/*hidden argument*/NULL);
		NullCheck((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)__this);
		((  void (*) (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *, FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)__this, (FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		NullCheck((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)__this);
		((  void (*) (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *, FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)__this, (FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// T UnityEngine.UIElements.FocusEventBase`1<System.Object>::GetPooled(UnityEngine.UIElements.IEventHandler,UnityEngine.UIElements.Focusable,UnityEngine.UIElements.FocusChangeDirection,UnityEngine.UIElements.FocusController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * FocusEventBase_1_GetPooled_mABE8F690BBD303622673F0A32AB34D8FE0D2D2A1_gshared (RuntimeObject* ___target0, Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B * ___relatedTarget1, FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * ___direction2, FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 * ___focusController3, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject * L_1 = V_0;
		RuntimeObject* L_2 = ___target0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_1);
		EventBase_set_target_mC6CE8B7FED46EC08C07F2279750CBF2780E90C6C((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		RuntimeObject * L_3 = V_0;
		Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B * L_4 = ___relatedTarget1;
		NullCheck((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)L_3);
		((  void (*) (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *, Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)L_3, (Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_5 = V_0;
		FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * L_6 = ___direction2;
		NullCheck((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)L_5);
		((  void (*) (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *, FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)L_5, (FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_7 = V_0;
		FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 * L_8 = ___focusController3;
		NullCheck((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)L_7);
		((  void (*) (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *, FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)L_7, (FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RuntimeObject * L_9 = V_0;
		V_1 = (RuntimeObject *)L_9;
		goto IL_003f;
	}

IL_003f:
	{
		RuntimeObject * L_10 = V_1;
		return L_10;
	}
}
// System.Void UnityEngine.UIElements.FocusEventBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FocusEventBase_1__ctor_m5CD561645C8EDF7607173F761133B650C76A78A7_gshared (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6));
		((  void (*) (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		NullCheck((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)__this);
		((  void (*) (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.UIElements.KeyboardEventBase`1<System.Object>::set_modifiers(UnityEngine.EventModifiers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardEventBase_1_set_modifiers_mCE5D9024CF9E80E028F85EE77E5DF6951A4968A1_gshared (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CmodifiersU3Ek__BackingField_18(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.KeyboardEventBase`1<System.Object>::set_character(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardEventBase_1_set_character_mBB9A4B26D9FEACDE01F556334609D9D7A63175D9_gshared (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___value0;
		__this->set_U3CcharacterU3Ek__BackingField_19(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.KeyboardEventBase`1<System.Object>::set_keyCode(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardEventBase_1_set_keyCode_m1B111F5E731DFE90DD80F096248C82BF2D260DAC_gshared (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CkeyCodeU3Ek__BackingField_20(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.KeyboardEventBase`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardEventBase_1_Init_m8E1B3DEBA27865AC8DD8C7A0408D9762D9626F76_gshared (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this);
		((  void (*) (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)__this);
		((  void (*) (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return;
	}
}
// System.Void UnityEngine.UIElements.KeyboardEventBase`1<System.Object>::LocalInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardEventBase_1_LocalInit_mAD63F1A55673098C083E4FBE253DFEC4AB81AC34_gshared (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_set_propagation_mF770530A5B592FAB33C549ED74453ABC7ED0E7A6_inline((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (int32_t)7, /*hidden argument*/NULL);
		NullCheck((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)__this);
		((  void (*) (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		NullCheck((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)__this);
		((  void (*) (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)__this, (Il2CppChar)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		NullCheck((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)__this);
		((  void (*) (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// T UnityEngine.UIElements.KeyboardEventBase`1<System.Object>::GetPooled(System.Char,UnityEngine.KeyCode,UnityEngine.EventModifiers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * KeyboardEventBase_1_GetPooled_m57DD6B4DF247914FB9645934DD9C8F562E553E13_gshared (Il2CppChar ___c0, int32_t ___keyCode1, int32_t ___modifiers2, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject * L_1 = V_0;
		int32_t L_2 = ___modifiers2;
		NullCheck((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)L_1);
		((  void (*) (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_3 = V_0;
		Il2CppChar L_4 = ___c0;
		NullCheck((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)L_3);
		((  void (*) (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)L_3, (Il2CppChar)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_5 = V_0;
		int32_t L_6 = ___keyCode1;
		NullCheck((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)L_5);
		((  void (*) (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RuntimeObject * L_7 = V_0;
		V_1 = (RuntimeObject *)L_7;
		goto IL_0032;
	}

IL_0032:
	{
		RuntimeObject * L_8 = V_1;
		return L_8;
	}
}
// T UnityEngine.UIElements.KeyboardEventBase`1<System.Object>::GetPooled(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * KeyboardEventBase_1_GetPooled_m8177C19643AB86483793F1A7177E3F4F2AF16894_gshared (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___systemEvent0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject * L_1 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_2 = ___systemEvent0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_1);
		EventBase_set_imguiEvent_mD693DAF0735050C06640E8C9DD5683E210D18E15((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_1, (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_2, /*hidden argument*/NULL);
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_3 = ___systemEvent0;
		V_1 = (bool)((!(((RuntimeObject*)(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_6 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_6);
		int32_t L_7 = Event_get_modifiers_m4D1BDE843A9379F50C3F32CB78CCDAD84B779108((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_6, /*hidden argument*/NULL);
		NullCheck((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)L_5);
		((  void (*) (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)L_5, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_8 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_9 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_9);
		Il2CppChar L_10 = Event_get_character_m78B46D412357B71233F3D41842928A19B290915C((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_9, /*hidden argument*/NULL);
		NullCheck((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)L_8);
		((  void (*) (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)L_8, (Il2CppChar)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_11 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_12 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_12);
		int32_t L_13 = Event_get_keyCode_m8B0AAD347861E322E91D2B7320A99E04D39575CF((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_12, /*hidden argument*/NULL);
		NullCheck((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)L_11);
		((  void (*) (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)L_11, (int32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	}

IL_0054:
	{
		RuntimeObject * L_14 = V_0;
		V_2 = (RuntimeObject *)L_14;
		goto IL_0058;
	}

IL_0058:
	{
		RuntimeObject * L_15 = V_2;
		return L_15;
	}
}
// System.Void UnityEngine.UIElements.KeyboardEventBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardEventBase_1__ctor_mEA6055D213DFB3411F31FFA1BF8A5E50FB789427_gshared (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6));
		((  void (*) (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		NullCheck((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)__this);
		((  void (*) (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
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
// System.Void UnityEngine.UIElements.MouseCaptureEventBase`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseCaptureEventBase_1_Init_mD2CB59EB0A270A081DF2722E426EE44BF3E2921B_gshared (MouseCaptureEventBase_1_t97B90265ADE987386D82B12AC9199D69B473E90B * __this, const RuntimeMethod* method)
{
	{
		NullCheck((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)__this);
		((  void (*) (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.UIElements.MouseCaptureEventBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseCaptureEventBase_1__ctor_m5E602B8878650580C1DD47AABD37E1666AA2E5B1_gshared (MouseCaptureEventBase_1_t97B90265ADE987386D82B12AC9199D69B473E90B * __this, const RuntimeMethod* method)
{
	{
		NullCheck((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)__this);
		((  void (*) (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
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
// UnityEngine.EventModifiers UnityEngine.UIElements.MouseEventBase`1<System.Object>::get_modifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_modifiers_m7E6CF432A1F924C09D526356AF1AC7B33B0F7588_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CmodifiersU3Ek__BackingField_18();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::set_modifiers(UnityEngine.EventModifiers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_modifiers_mCD85F1F0BEE2E7BBE6A250DA0F0A9F6778450C42_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CmodifiersU3Ek__BackingField_18(L_0);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.MouseEventBase`1<System.Object>::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MouseEventBase_1_get_mousePosition_m9570170BA1B0BE54B9DF4720BA5C13D7B6971C62_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )__this->get_U3CmousePositionU3Ek__BackingField_19();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::set_mousePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_mousePosition_mC6F2F40270A207466D8E2505248B1973E4FA7625_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_U3CmousePositionU3Ek__BackingField_19(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::set_localMousePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_localMousePosition_m783EBBD1F1E1A0E822C5E605DBF48C8E3D18EA32_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_U3ClocalMousePositionU3Ek__BackingField_20(L_0);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.MouseEventBase`1<System.Object>::get_mouseDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MouseEventBase_1_get_mouseDelta_mAF74A2769B7D3504DE71EAC205D10DCADC38D290_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )__this->get_U3CmouseDeltaU3Ek__BackingField_21();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::set_mouseDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_mouseDelta_mE3EDE178688525D65109DE69C5001867CB067A7E_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_U3CmouseDeltaU3Ek__BackingField_21(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UIElements.MouseEventBase`1<System.Object>::get_clickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_clickCount_m6577932AADBADB63D0ECA0F92FF0B062AA6CD77B_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CclickCountU3Ek__BackingField_22();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::set_clickCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_clickCount_m8BE309BA5E7F6659975BBA3201E56B0426DC83C1_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CclickCountU3Ek__BackingField_22(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UIElements.MouseEventBase`1<System.Object>::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_button_m5D788F3F00F702B1C8FE4ADB6FCE67D9EDE8D421_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CbuttonU3Ek__BackingField_23();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::set_button(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_button_mC682E89939DF04647C05E82A2118667AB35C1323_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CbuttonU3Ek__BackingField_23(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UIElements.MouseEventBase`1<System.Object>::get_pressedButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_pressedButtons_m2338F317200AD74683E3572E2814021E74028CCC_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CpressedButtonsU3Ek__BackingField_24();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::set_pressedButtons(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_pressedButtons_mB6BB32B7A46EE351E6C4A147BFBAF340AC07EF50_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpressedButtonsU3Ek__BackingField_24(L_0);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.MouseEventBase`1<System.Object>::UnityEngine.UIElements.IMouseEventInternal.get_triggeredByOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseEventBase_1_UnityEngine_UIElements_IMouseEventInternal_get_triggeredByOS_mC6D8D115E8688F3DAFCF3F5C26E1ADE2750C37C6_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::UnityEngine.UIElements.IMouseEventInternal.set_triggeredByOS(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_UnityEngine_UIElements_IMouseEventInternal_set_triggeredByOS_mB77CCDFA79ABF9E74092C9E7EA40570AA9A06D64_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25(L_0);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.MouseEventBase`1<System.Object>::UnityEngine.UIElements.IMouseEventInternal.get_recomputeTopElementUnderMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseEventBase_1_UnityEngine_UIElements_IMouseEventInternal_get_recomputeTopElementUnderMouse_m6293B11C240EAFA7C62CC596CB2F08F6DCE6901F_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::UnityEngine.UIElements.IMouseEventInternal.set_recomputeTopElementUnderMouse(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_UnityEngine_UIElements_IMouseEventInternal_set_recomputeTopElementUnderMouse_m3DBC5AF64FD2A041855BFE8776E650F0054B7206_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26(L_0);
		return;
	}
}
// UnityEngine.UIElements.IPointerEvent UnityEngine.UIElements.MouseEventBase`1<System.Object>::UnityEngine.UIElements.IMouseEventInternal.get_sourcePointerEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MouseEventBase_1_UnityEngine_UIElements_IMouseEventInternal_get_sourcePointerEvent_m88FA6B678F14D843BFC7DE57BC49A84F89E9C96C_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::UnityEngine.UIElements.IMouseEventInternal.set_sourcePointerEvent(UnityEngine.UIElements.IPointerEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_UnityEngine_UIElements_IMouseEventInternal_set_sourcePointerEvent_m7AF4865BA1A449716CF1D5E1D56DC18556653416_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_Init_m2F72C210148733AE9A7E8B96E8583F0121743FD9_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this);
		((  void (*) (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::LocalInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_LocalInit_mBF4B84CC615154CDCFE5AE36CC219A1B11B328BD_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseEventBase_1_LocalInit_mBF4B84CC615154CDCFE5AE36CC219A1B11B328BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_set_propagation_mF770530A5B592FAB33C549ED74453ABC7ED0E7A6_inline((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (int32_t)7, /*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void UnityEngine.UIElements.IMouseEventInternal::set_triggeredByOS(System.Boolean) */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (bool)0);
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void UnityEngine.UIElements.IMouseEventInternal::set_recomputeTopElementUnderMouse(System.Boolean) */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (bool)1);
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void UnityEngine.UIElements.IMouseEventInternal::set_sourcePointerEvent(UnityEngine.UIElements.IPointerEvent) */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)NULL);
		return;
	}
}
// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.MouseEventBase`1<System.Object>::get_currentTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MouseEventBase_1_get_currentTarget_m7ED5BE0A76315A2FAADD0755BCB36F9D92332417_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		RuntimeObject* L_0 = EventBase_get_currentTarget_mB3B3ED90CE63BFFE6E789E0BC5FA5B904BDEF581((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, /*hidden argument*/NULL);
		V_0 = (RuntimeObject*)L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::set_currentTarget(UnityEngine.UIElements.IEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_currentTarget_m42FF4A10DB34A8045633A8705EE777F05C642D0D_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseEventBase_1_set_currentTarget_m42FF4A10DB34A8045633A8705EE777F05C642D0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___value0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_set_currentTarget_mBA8C39A26A9E8B67E1003496F77C00BA48FA1B90((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (RuntimeObject*)L_0, /*hidden argument*/NULL);
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(10 /* UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::get_currentTarget() */, (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		V_0 = (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)((VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)IsInst((RuntimeObject*)L_1, VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_il2cpp_TypeInfo_var));
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_4 = V_0;
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = ((  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = VisualElementExtensions_WorldToLocal_mFDEA66A0B4B27B27D235DE5E11E68E3145CA18C8((VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)L_4, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_5, /*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		goto IL_0043;
	}

IL_0034:
	{
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = ((  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
	}

IL_0043:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::PreDispatch(UnityEngine.UIElements.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_PreDispatch_m16BFF76FF4B664C16716B880046A7F96F23C748F_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, RuntimeObject* ___panel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseEventBase_1_PreDispatch_m16BFF76FF4B664C16716B880046A7F96F23C748F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___panel0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_PreDispatch_m242A7911A4139A5BF3BDAF7952AE67DF0DBC779A((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (RuntimeObject*)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)__this);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.UIElements.IMouseEventInternal::get_triggeredByOS() */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)__this);
		V_0 = (bool)L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var);
		int32_t L_3 = ((PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var))->get_mousePointerId_2();
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = ((  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		RuntimeObject* L_5 = ___panel0;
		IL2CPP_RUNTIME_CLASS_INIT(PointerDeviceState_tBADA581B3E49FE39A2230120F84FCBD94BB8ADA4_il2cpp_TypeInfo_var);
		PointerDeviceState_SavePointerPosition_mFFAA7F8C884E231C7D950676565CDE8A9BAF2390((int32_t)L_3, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_4, (RuntimeObject*)L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::PostDispatch(UnityEngine.UIElements.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_PostDispatch_m3518F3E76E5AA9E9CA4C39AB8267080C9791A0F8_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, RuntimeObject* ___panel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseEventBase_1_PostDispatch_m3518F3E76E5AA9E9CA4C39AB8267080C9791A0F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * G_B3_0 = NULL;
	BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * G_B2_0 = NULL;
	{
		NullCheck((RuntimeObject*)__this);
		RuntimeObject* L_0 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* UnityEngine.UIElements.IPointerEvent UnityEngine.UIElements.IMouseEventInternal::get_sourcePointerEvent() */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)__this);
		V_0 = (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)IsInst((RuntimeObject*)L_0, EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_il2cpp_TypeInfo_var));
		EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0070;
		}
	}
	{
		EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * L_3 = V_0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_3);
		bool L_4 = EventBase_get_processed_mE00DE5372190A0AD6BEB2C693658C5EA5F1B465C((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Assert_m0283DD85C5E5F5029793C17A335DB16BC307E62E((bool)L_4, /*hidden argument*/NULL);
		RuntimeObject* L_5 = ___panel0;
		BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * L_6 = (BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 *)((BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 *)IsInst((RuntimeObject*)L_5, BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90_il2cpp_TypeInfo_var));
		G_B2_0 = L_6;
		if (L_6)
		{
			G_B3_0 = L_6;
			goto IL_002e;
		}
	}
	{
		goto IL_0034;
	}

IL_002e:
	{
		NullCheck((BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 *)G_B3_0);
		BaseVisualElementPanel_CommitElementUnderPointers_mFBDB91138145CF30ADB72FE74511C7E8BD3374F3((BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 *)G_B3_0, /*hidden argument*/NULL);
	}

IL_0034:
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		bool L_7 = EventBase_get_isPropagationStopped_m56D6DBFE28CF05F8CBEF3BB29D7C7D4A1787A71C((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, /*hidden argument*/NULL);
		V_2 = (bool)L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * L_9 = V_0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_9);
		EventBase_StopPropagation_mC1D00F7DCE3D90B7CC5D768F68883C9338B6D270((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_9, /*hidden argument*/NULL);
	}

IL_0047:
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		bool L_10 = EventBase_get_isImmediatePropagationStopped_mF363E1F51EEA0C802349EDB884105C4172D3F80B((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, /*hidden argument*/NULL);
		V_3 = (bool)L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_005a;
		}
	}
	{
		EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * L_12 = V_0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_12);
		EventBase_StopImmediatePropagation_m147F448DA22C5009B11D9C4048749E8AAAEA5BFB((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_12, /*hidden argument*/NULL);
	}

IL_005a:
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		bool L_13 = EventBase_get_isDefaultPrevented_m52E82FE3B3DDB4B122E61D26EEFB4B24759C428D((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, /*hidden argument*/NULL);
		V_4 = (bool)L_13;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_006f;
		}
	}
	{
		EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * L_15 = V_0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_15);
		EventBase_PreventDefault_m16F3C26388BE9ADBEC55AF54DDF998C168DBE90A((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_15, /*hidden argument*/NULL);
	}

IL_006f:
	{
	}

IL_0070:
	{
		RuntimeObject* L_16 = ___panel0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_PostDispatch_m4182DABA2D5674FC82F67DC57219840840065644((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (RuntimeObject*)L_16, /*hidden argument*/NULL);
		return;
	}
}
// T UnityEngine.UIElements.MouseEventBase`1<System.Object>::GetPooled(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MouseEventBase_1_GetPooled_m29CA64EDCA0FFC341A3C573F41A2B17A6D3D2939_gshared (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___systemEvent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseEventBase_1_GetPooled_m29CA64EDCA0FFC341A3C573F41A2B17A6D3D2939_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject * L_1 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_2 = ___systemEvent0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_1);
		EventBase_set_imguiEvent_mD693DAF0735050C06640E8C9DD5683E210D18E15((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_1, (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_2, /*hidden argument*/NULL);
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_3 = ___systemEvent0;
		V_1 = (bool)((!(((RuntimeObject*)(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_00bd;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_6 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_6);
		int32_t L_7 = Event_get_modifiers_m4D1BDE843A9379F50C3F32CB78CCDAD84B779108((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_6, /*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_5);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_5, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_8 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_9 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_9);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = Event_get_mousePosition_m92AD98489A626864E9B179273270802EB1D2C085((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_9, /*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_8);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_8, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_11 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_12 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_12);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = Event_get_mousePosition_m92AD98489A626864E9B179273270802EB1D2C085((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_12, /*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_11);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_11, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RuntimeObject * L_14 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_15 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_15);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = Event_get_delta_m552632C8BD6AFB1FF814636177843C6E28E87B85((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_15, /*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_14);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_14, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		RuntimeObject * L_17 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_18 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_18);
		int32_t L_19 = Event_get_button_mA6E2D86802D75E24DB3C52EB52142EA98A3B93CE((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_18, /*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_17);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_17, (int32_t)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		RuntimeObject * L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var);
		int32_t L_21 = ((PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var))->get_mousePointerId_2();
		IL2CPP_RUNTIME_CLASS_INIT(PointerDeviceState_tBADA581B3E49FE39A2230120F84FCBD94BB8ADA4_il2cpp_TypeInfo_var);
		int32_t L_22 = PointerDeviceState_GetPressedButtons_m92D8D7B9F9B7A2251807764D45D133CE96E7E8C2((int32_t)L_21, /*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_20);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_20, (int32_t)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		RuntimeObject * L_23 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_24 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_24);
		int32_t L_25 = Event_get_clickCount_m8C296AD53AA9F14D43DB3682227DD343B9499F21((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_24, /*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_23);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_23, (int32_t)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		RuntimeObject * L_26 = V_0;
		NullCheck((RuntimeObject*)L_26);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void UnityEngine.UIElements.IMouseEventInternal::set_triggeredByOS(System.Boolean) */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)L_26, (bool)1);
		RuntimeObject * L_27 = V_0;
		NullCheck((RuntimeObject*)L_27);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void UnityEngine.UIElements.IMouseEventInternal::set_recomputeTopElementUnderMouse(System.Boolean) */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)L_27, (bool)1);
	}

IL_00bd:
	{
		RuntimeObject * L_28 = V_0;
		V_2 = (RuntimeObject *)L_28;
		goto IL_00c1;
	}

IL_00c1:
	{
		RuntimeObject * L_29 = V_2;
		return L_29;
	}
}
// T UnityEngine.UIElements.MouseEventBase`1<System.Object>::GetPooled(UnityEngine.UIElements.IMouseEvent,UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MouseEventBase_1_GetPooled_m5377CC1E2A161709DCDBD815E72B0734D4A1E46E_gshared (RuntimeObject* ___triggerEvent0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___mousePosition1, bool ___recomputeTopElementUnderMouse2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseEventBase_1_GetPooled_m5377CC1E2A161709DCDBD815E72B0734D4A1E46E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	{
		RuntimeObject* L_0 = ___triggerEvent0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_2 = ___triggerEvent0;
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = (RuntimeObject *)L_3;
		goto IL_0044;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_0 = (RuntimeObject *)L_4;
		RuntimeObject * L_5 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = ___mousePosition1;
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_5);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_5, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_7 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = ___mousePosition1;
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_7);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_7, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RuntimeObject * L_9 = V_0;
		bool L_10 = ___recomputeTopElementUnderMouse2;
		NullCheck((RuntimeObject*)L_9);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void UnityEngine.UIElements.IMouseEventInternal::set_recomputeTopElementUnderMouse(System.Boolean) */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (bool)L_10);
		RuntimeObject * L_11 = V_0;
		V_2 = (RuntimeObject *)L_11;
		goto IL_0044;
	}

IL_0044:
	{
		RuntimeObject * L_12 = V_2;
		return L_12;
	}
}
// T UnityEngine.UIElements.MouseEventBase`1<System.Object>::GetPooled(UnityEngine.UIElements.IMouseEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MouseEventBase_1_GetPooled_m43C244589B6072E2C06216F336E06154899E142C_gshared (RuntimeObject* ___triggerEvent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseEventBase_1_GetPooled_m43C244589B6072E2C06216F336E06154899E142C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject * V_4 = NULL;
	{
		RuntimeObject* L_0 = ___triggerEvent0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15)->methodPointer)((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)IsInst((RuntimeObject*)L_0, EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_il2cpp_TypeInfo_var)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (RuntimeObject *)L_1;
		RuntimeObject* L_2 = ___triggerEvent0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00c8;
		}
	}
	{
		RuntimeObject * L_4 = V_0;
		RuntimeObject* L_5 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_5);
		int32_t L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* UnityEngine.EventModifiers UnityEngine.UIElements.IMouseEvent::get_modifiers() */, IMouseEvent_t46F36E91C0689C43AEEE5C7C1354C8112D64113D_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_4);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_4, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_7 = V_0;
		RuntimeObject* L_8 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_8);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = InterfaceFuncInvoker0< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(1 /* UnityEngine.Vector2 UnityEngine.UIElements.IMouseEvent::get_mousePosition() */, IMouseEvent_t46F36E91C0689C43AEEE5C7C1354C8112D64113D_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_7);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_7, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_10 = V_0;
		RuntimeObject* L_11 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_11);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = InterfaceFuncInvoker0< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(1 /* UnityEngine.Vector2 UnityEngine.UIElements.IMouseEvent::get_mousePosition() */, IMouseEvent_t46F36E91C0689C43AEEE5C7C1354C8112D64113D_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_10);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_10, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RuntimeObject * L_13 = V_0;
		RuntimeObject* L_14 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_14);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = InterfaceFuncInvoker0< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(2 /* UnityEngine.Vector2 UnityEngine.UIElements.IMouseEvent::get_mouseDelta() */, IMouseEvent_t46F36E91C0689C43AEEE5C7C1354C8112D64113D_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_13);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_13, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		RuntimeObject * L_16 = V_0;
		RuntimeObject* L_17 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.UIElements.IMouseEvent::get_button() */, IMouseEvent_t46F36E91C0689C43AEEE5C7C1354C8112D64113D_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_16);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_16, (int32_t)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		RuntimeObject * L_19 = V_0;
		RuntimeObject* L_20 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_20);
		int32_t L_21 = InterfaceFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.UIElements.IMouseEvent::get_pressedButtons() */, IMouseEvent_t46F36E91C0689C43AEEE5C7C1354C8112D64113D_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_19);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_19, (int32_t)L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		RuntimeObject * L_22 = V_0;
		RuntimeObject* L_23 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_23);
		int32_t L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 UnityEngine.UIElements.IMouseEvent::get_clickCount() */, IMouseEvent_t46F36E91C0689C43AEEE5C7C1354C8112D64113D_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_22);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_22, (int32_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		RuntimeObject* L_25 = ___triggerEvent0;
		V_2 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_25, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var));
		RuntimeObject* L_26 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_26) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_00c7;
		}
	}
	{
		RuntimeObject * L_28 = V_0;
		RuntimeObject* L_29 = V_2;
		NullCheck((RuntimeObject*)L_29);
		bool L_30 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.UIElements.IMouseEventInternal::get_triggeredByOS() */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
		NullCheck((RuntimeObject*)L_28);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void UnityEngine.UIElements.IMouseEventInternal::set_triggeredByOS(System.Boolean) */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)L_28, (bool)L_30);
		RuntimeObject * L_31 = V_0;
		NullCheck((RuntimeObject*)L_31);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void UnityEngine.UIElements.IMouseEventInternal::set_recomputeTopElementUnderMouse(System.Boolean) */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)L_31, (bool)0);
	}

IL_00c7:
	{
	}

IL_00c8:
	{
		RuntimeObject * L_32 = V_0;
		V_4 = (RuntimeObject *)L_32;
		goto IL_00cd;
	}

IL_00cd:
	{
		RuntimeObject * L_33 = V_4;
		return L_33;
	}
}
// T UnityEngine.UIElements.MouseEventBase`1<System.Object>::GetPooled(UnityEngine.UIElements.IPointerEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MouseEventBase_1_GetPooled_m7581733236F9D88705484E19A491449448D31E2B_gshared (RuntimeObject* ___pointerEvent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseEventBase_1_GetPooled_m7581733236F9D88705484E19A491449448D31E2B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	RuntimeObject * V_4 = NULL;
	EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * G_B2_0 = NULL;
	RuntimeObject * G_B2_1 = NULL;
	EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * G_B1_0 = NULL;
	RuntimeObject * G_B1_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject * G_B3_1 = NULL;
	EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * G_B5_0 = NULL;
	RuntimeObject * G_B5_1 = NULL;
	EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * G_B4_0 = NULL;
	RuntimeObject * G_B4_1 = NULL;
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * G_B6_0 = NULL;
	RuntimeObject * G_B6_1 = NULL;
	EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * G_B8_0 = NULL;
	EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * G_B7_0 = NULL;
	PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D * G_B9_0 = NULL;
	RuntimeObject * G_B13_0 = NULL;
	RuntimeObject * G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	RuntimeObject * G_B14_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject * L_1 = V_0;
		RuntimeObject* L_2 = ___pointerEvent0;
		EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * L_3 = (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)IsInst((RuntimeObject*)L_2, EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_il2cpp_TypeInfo_var));
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_001a;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_001f;
	}

IL_001a:
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)G_B2_0);
		RuntimeObject* L_4 = EventBase_get_target_m9CDDE53A2B09975CF0DDAA6F194425149BCDC3E5((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)G_B2_0, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_1;
	}

IL_001f:
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)G_B3_1);
		EventBase_set_target_mC6CE8B7FED46EC08C07F2279750CBF2780E90C6C((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)G_B3_1, (RuntimeObject*)G_B3_0, /*hidden argument*/NULL);
		RuntimeObject * L_5 = V_0;
		RuntimeObject* L_6 = ___pointerEvent0;
		EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * L_7 = (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)IsInst((RuntimeObject*)L_6, EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_il2cpp_TypeInfo_var));
		G_B4_0 = L_7;
		G_B4_1 = L_5;
		if (L_7)
		{
			G_B5_0 = L_7;
			G_B5_1 = L_5;
			goto IL_0038;
		}
	}
	{
		G_B6_0 = ((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_003d;
	}

IL_0038:
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)G_B5_0);
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_8 = EventBase_get_imguiEvent_m93CE1DC74AF5C7C85CFE01C066E89893528FC6A4((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)G_B5_0, /*hidden argument*/NULL);
		G_B6_0 = L_8;
		G_B6_1 = G_B5_1;
	}

IL_003d:
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)G_B6_1);
		EventBase_set_imguiEvent_mD693DAF0735050C06640E8C9DD5683E210D18E15((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)G_B6_1, (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)G_B6_0, /*hidden argument*/NULL);
		RuntimeObject* L_9 = ___pointerEvent0;
		EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * L_10 = (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)IsInst((RuntimeObject*)L_9, EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_il2cpp_TypeInfo_var));
		G_B7_0 = L_10;
		if (L_10)
		{
			G_B8_0 = L_10;
			goto IL_0050;
		}
	}
	{
		G_B9_0 = ((PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D *)(NULL));
		goto IL_0055;
	}

IL_0050:
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)G_B8_0);
		PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D * L_11 = EventBase_get_path_mD750217799E419C5F8B38236E9592E54811A70BF((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)G_B8_0, /*hidden argument*/NULL);
		G_B9_0 = L_11;
	}

IL_0055:
	{
		V_2 = (bool)((!(((RuntimeObject*)(PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D *)G_B9_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0073;
		}
	}
	{
		RuntimeObject * L_13 = V_0;
		RuntimeObject* L_14 = ___pointerEvent0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)IsInst((RuntimeObject*)L_14, EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_il2cpp_TypeInfo_var)));
		PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D * L_15 = EventBase_get_path_mD750217799E419C5F8B38236E9592E54811A70BF((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)IsInst((RuntimeObject*)L_14, EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_13);
		EventBase_set_path_mE08193E7E12ACEFF2C0B6D03B3A2F3E0CC108C3F((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_13, (PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D *)L_15, /*hidden argument*/NULL);
	}

IL_0073:
	{
		RuntimeObject * L_16 = V_0;
		RuntimeObject* L_17 = ___pointerEvent0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(17 /* UnityEngine.EventModifiers UnityEngine.UIElements.IPointerEvent::get_modifiers() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_16);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_16, (int32_t)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_19 = V_0;
		RuntimeObject* L_20 = ___pointerEvent0;
		NullCheck((RuntimeObject*)L_20);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = InterfaceFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(5 /* UnityEngine.Vector3 UnityEngine.UIElements.IPointerEvent::get_position() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_21, /*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_19);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_19, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_23 = V_0;
		RuntimeObject* L_24 = ___pointerEvent0;
		NullCheck((RuntimeObject*)L_24);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = InterfaceFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(5 /* UnityEngine.Vector3 UnityEngine.UIElements.IPointerEvent::get_position() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_24);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_26 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_25, /*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_23);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_23, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_26, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RuntimeObject * L_27 = V_0;
		RuntimeObject* L_28 = ___pointerEvent0;
		NullCheck((RuntimeObject*)L_28);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = InterfaceFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(7 /* UnityEngine.Vector3 UnityEngine.UIElements.IPointerEvent::get_deltaPosition() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_30 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_29, /*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_27);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_27, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_30, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		RuntimeObject * L_31 = V_0;
		RuntimeObject* L_32 = ___pointerEvent0;
		NullCheck((RuntimeObject*)L_32);
		int32_t L_33 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 UnityEngine.UIElements.IPointerEvent::get_button() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
		G_B12_0 = L_31;
		if ((((int32_t)L_33) == ((int32_t)(-1))))
		{
			G_B13_0 = L_31;
			goto IL_00e1;
		}
	}
	{
		RuntimeObject* L_34 = ___pointerEvent0;
		NullCheck((RuntimeObject*)L_34);
		int32_t L_35 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 UnityEngine.UIElements.IPointerEvent::get_button() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
		G_B14_0 = L_35;
		G_B14_1 = G_B12_0;
		goto IL_00e2;
	}

IL_00e1:
	{
		G_B14_0 = 0;
		G_B14_1 = G_B13_0;
	}

IL_00e2:
	{
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)G_B14_1);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)G_B14_1, (int32_t)G_B14_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		RuntimeObject * L_36 = V_0;
		RuntimeObject* L_37 = ___pointerEvent0;
		NullCheck((RuntimeObject*)L_37);
		int32_t L_38 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.UIElements.IPointerEvent::get_pressedButtons() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_37);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_36);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_36, (int32_t)L_38, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		RuntimeObject * L_39 = V_0;
		RuntimeObject* L_40 = ___pointerEvent0;
		NullCheck((RuntimeObject*)L_40);
		int32_t L_41 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 UnityEngine.UIElements.IPointerEvent::get_clickCount() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_40);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_39);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_39, (int32_t)L_41, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		RuntimeObject* L_42 = ___pointerEvent0;
		V_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_42, IPointerEventInternal_tA7CFA0A98B5E87A72EC8D777BB1ACEC1F98F8405_il2cpp_TypeInfo_var));
		RuntimeObject* L_43 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_43) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_44 = V_3;
		if (!L_44)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject * L_45 = V_0;
		RuntimeObject* L_46 = V_1;
		NullCheck((RuntimeObject*)L_46);
		bool L_47 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.UIElements.IPointerEventInternal::get_triggeredByOS() */, IPointerEventInternal_tA7CFA0A98B5E87A72EC8D777BB1ACEC1F98F8405_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
		NullCheck((RuntimeObject*)L_45);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void UnityEngine.UIElements.IMouseEventInternal::set_triggeredByOS(System.Boolean) */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)L_45, (bool)L_47);
		RuntimeObject * L_48 = V_0;
		NullCheck((RuntimeObject*)L_48);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void UnityEngine.UIElements.IMouseEventInternal::set_recomputeTopElementUnderMouse(System.Boolean) */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)L_48, (bool)1);
		RuntimeObject * L_49 = V_0;
		RuntimeObject* L_50 = ___pointerEvent0;
		NullCheck((RuntimeObject*)L_49);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void UnityEngine.UIElements.IMouseEventInternal::set_sourcePointerEvent(UnityEngine.UIElements.IPointerEvent) */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)L_49, (RuntimeObject*)L_50);
	}

IL_0149:
	{
		RuntimeObject * L_51 = V_0;
		V_4 = (RuntimeObject *)L_51;
		goto IL_014e;
	}

IL_014e:
	{
		RuntimeObject * L_52 = V_4;
		return L_52;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1__ctor_mF7A8C1FA42FC9623153D11E6D5C5DAD8BEB5D973_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 11));
		((  void (*) (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
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
// System.Int32 UnityEngine.UIElements.ObjectPool`1<System.Object>::get_maxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_maxSize_m7B65C7F2E8778BB8C93F97B437BB0028A8E9D080_gshared (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_m_MaxSize_1();
		V_0 = (int32_t)L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UIElements.ObjectPool`1<System.Object>::set_maxSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_set_maxSize_m5732821144B90CB4DCAD3F663176B589E7AAE794_gshared (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_set_maxSize_m5732821144B90CB4DCAD3F663176B589E7AAE794_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_1 = Math_Max_mA99E48BB021F2E4B62D4EA9F52EA6928EED618A2((int32_t)0, (int32_t)L_0, /*hidden argument*/NULL);
		__this->set_m_MaxSize_1(L_1);
		goto IL_0019;
	}

IL_0010:
	{
		NullCheck((ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)__this);
		((  RuntimeObject * (*) (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
	}

IL_0019:
	{
		NullCheck((ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)__this);
		int32_t L_2 = ((  int32_t (*) (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		int32_t L_3 = (int32_t)__this->get_m_MaxSize_1();
		V_0 = (bool)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.ObjectPool`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_m4440121448D0B3D2EBC5FE2B0B69167D83A7C74D_gshared (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * __this, int32_t ___maxSize0, const RuntimeMethod* method)
{
	{
		Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * L_0 = (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_m_Stack_0(L_0);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_1 = ___maxSize0;
		NullCheck((ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)__this);
		((  void (*) (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Int32 UnityEngine.UIElements.ObjectPool`1<System.Object>::Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_Size_m3074E09D3EB79A9C1315D23B78F7DC9B1D7ACC78_gshared (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * L_0 = (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (int32_t)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// T UnityEngine.UIElements.ObjectPool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectPool_1_Get_m3FDC1AFD2FA6F9F4C0D541DB29C3CE84B3C244D2_gshared (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * G_B3_0 = NULL;
	{
		Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * L_0 = (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * L_2 = (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_2);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		G_B3_0 = L_3;
		goto IL_0020;
	}

IL_001b:
	{
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		G_B3_0 = L_4;
	}

IL_0020:
	{
		V_0 = (RuntimeObject *)G_B3_0;
		RuntimeObject * L_5 = V_0;
		V_1 = (RuntimeObject *)L_5;
		goto IL_0025;
	}

IL_0025:
	{
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void UnityEngine.UIElements.ObjectPool`1<System.Object>::Release(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m2F54E298C569A530D9BE145E89A85461969B0E79_gshared (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * __this, RuntimeObject * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_Release_m2F54E298C569A530D9BE145E89A85461969B0E79_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * L_0 = (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * L_2 = (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_2);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		RuntimeObject * L_4 = ___element0;
		G_B3_0 = ((((RuntimeObject*)(RuntimeObject *)L_3) == ((RuntimeObject*)(RuntimeObject *)L_4))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 0;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral04231B44477132B3DBEFE7768A921AE5A13A00FC, /*hidden argument*/NULL);
	}

IL_0039:
	{
		Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * L_6 = (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_6);
		int32_t L_7 = ((  int32_t (*) (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		NullCheck((ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)__this);
		int32_t L_8 = ((  int32_t (*) (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_1 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 * L_10 = (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)__this->get_m_Stack_0();
		RuntimeObject * L_11 = ___element0;
		NullCheck((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_10);
		((  void (*) (Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Stack_1_t7942E8798ACFE3B74DDCEDB213DC50B2129E4954 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
	}

IL_005f:
	{
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
// System.Void UnityEngine.UIElements.PointerCaptureEventBase`1<System.Object>::set_relatedTarget(UnityEngine.UIElements.IEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerCaptureEventBase_1_set_relatedTarget_m3EA1321494E9B18A8D0A6D66F3524C5AFC4C35CC_gshared (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CrelatedTargetU3Ek__BackingField_18(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.PointerCaptureEventBase`1<System.Object>::set_pointerId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerCaptureEventBase_1_set_pointerId_m131956A66460FB60C9C7FE46BF8EC24B43001024_gshared (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpointerIdU3Ek__BackingField_19(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.PointerCaptureEventBase`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerCaptureEventBase_1_Init_mADB7C17F819950EDB793FDDC8D710F0E987A6ABC_gshared (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this);
		((  void (*) (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)__this);
		((  void (*) (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return;
	}
}
// System.Void UnityEngine.UIElements.PointerCaptureEventBase`1<System.Object>::LocalInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerCaptureEventBase_1_LocalInit_m67C407968188A88A0860879AD1A1BE70884AA2F9_gshared (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerCaptureEventBase_1_LocalInit_m67C407968188A88A0860879AD1A1BE70884AA2F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_set_propagation_mF770530A5B592FAB33C549ED74453ABC7ED0E7A6_inline((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (int32_t)3, /*hidden argument*/NULL);
		NullCheck((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)__this);
		((  void (*) (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)__this, (RuntimeObject*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		IL2CPP_RUNTIME_CLASS_INIT(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var);
		int32_t L_0 = ((PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var))->get_invalidPointerId_1();
		NullCheck((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)__this);
		((  void (*) (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// T UnityEngine.UIElements.PointerCaptureEventBase`1<System.Object>::GetPooled(UnityEngine.UIElements.IEventHandler,UnityEngine.UIElements.IEventHandler,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PointerCaptureEventBase_1_GetPooled_m37A56A955B99D923D58810CC73366C7F9E081D1E_gshared (RuntimeObject* ___target0, RuntimeObject* ___relatedTarget1, int32_t ___pointerId2, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject * L_1 = V_0;
		RuntimeObject* L_2 = ___target0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_1);
		EventBase_set_target_mC6CE8B7FED46EC08C07F2279750CBF2780E90C6C((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		RuntimeObject * L_3 = V_0;
		RuntimeObject* L_4 = ___relatedTarget1;
		NullCheck((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)L_3);
		((  void (*) (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)L_3, (RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_5 = V_0;
		int32_t L_6 = ___pointerId2;
		NullCheck((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)L_5);
		((  void (*) (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_7 = V_0;
		V_1 = (RuntimeObject *)L_7;
		goto IL_0032;
	}

IL_0032:
	{
		RuntimeObject * L_8 = V_1;
		return L_8;
	}
}
// System.Void UnityEngine.UIElements.PointerCaptureEventBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerCaptureEventBase_1__ctor_m1E21BD75F6DA45A5F5645B7DB72A39A03E25A23F_gshared (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5));
		((  void (*) (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		NullCheck((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)__this);
		((  void (*) (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
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
// System.Int32 UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_pointerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_pointerId_m7CA84EB539A37964E5D19464ED332F1F107D4367_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CpointerIdU3Ek__BackingField_18();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_pointerId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_pointerId_m73E0E3E080812EEADF344A559C81F1685AF67272_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpointerIdU3Ek__BackingField_18(L_0);
		return;
	}
}
// System.String UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_pointerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PointerEventBase_1_get_pointerType_m5D203DC46E47C6C2E99359651C632C994840CEBA_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CpointerTypeU3Ek__BackingField_19();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_pointerType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_pointerType_m9EFA612B59E695BBB3FDE50D5E8A8F7A1C7BD86B_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CpointerTypeU3Ek__BackingField_19(L_0);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_isPrimary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerEventBase_1_get_isPrimary_mE3193189BF33881D8EFF9EAF7E94480962B59F79_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_U3CisPrimaryU3Ek__BackingField_20();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_isPrimary(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_isPrimary_mD607B525FF277744F4034911634F9252D7542CEA_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisPrimaryU3Ek__BackingField_20(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_button_m0D0E8B13FC7560B3358674DAE780B19B2BAAB48D_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CbuttonU3Ek__BackingField_21();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_button(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_button_mC84D7125A74D3F1F78D16570EFA7F8B7A9278AC3_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CbuttonU3Ek__BackingField_21(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_pressedButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_pressedButtons_m2C19F09018D09DD294634CFC5363625564AA9024_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CpressedButtonsU3Ek__BackingField_22();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_pressedButtons(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_pressedButtons_m0C99E74A43A66239412365312DBFAF0423F6070F_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpressedButtonsU3Ek__BackingField_22(L_0);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  PointerEventBase_1_get_position_m992F34BD47136A2DD09331FED6D77F5F78A435AF_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )__this->get_U3CpositionU3Ek__BackingField_23();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_position_m5827E83B94FF2072E328504EFDA3A3EEFCDEF833_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CpositionU3Ek__BackingField_23(L_0);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  PointerEventBase_1_get_localPosition_m485F241C84CFEB51D3BBAACFCFD642E2BDFB0FA2_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )__this->get_U3ClocalPositionU3Ek__BackingField_24();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_localPosition_m0971802414579099BF332652111EAFA8E1F4398A_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3ClocalPositionU3Ek__BackingField_24(L_0);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  PointerEventBase_1_get_deltaPosition_mBC9EF90DB115E91F144385EA5C3586FFC10267E1_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )__this->get_U3CdeltaPositionU3Ek__BackingField_25();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_deltaPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_deltaPosition_mF2974C44764B51BC1C3846459C12CC0A80F5AFC5_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CdeltaPositionU3Ek__BackingField_25(L_0);
		return;
	}
}
// System.Single UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PointerEventBase_1_get_deltaTime_mD41C50F43E3620C934A1D2A79F6C5F25290C4ED8_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_U3CdeltaTimeU3Ek__BackingField_26();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_deltaTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_deltaTime_m8486E3AD17311F65DF38A1265BC4350CFFD04484_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CdeltaTimeU3Ek__BackingField_26(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_clickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_clickCount_m9E159BB7F901B4A48338529DE77E53C9AC5C5272_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CclickCountU3Ek__BackingField_27();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_clickCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_clickCount_mEC196417BBA71F4FD69728348A3F87B19B2A57E0_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CclickCountU3Ek__BackingField_27(L_0);
		return;
	}
}
// System.Single UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_pressure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PointerEventBase_1_get_pressure_mC519753D46A4BDCD2692C2F58ED2CEADC0ADB937_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_U3CpressureU3Ek__BackingField_28();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_pressure(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_pressure_m9C86A7A5093E11764B287E353F2BCC187527DCCC_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CpressureU3Ek__BackingField_28(L_0);
		return;
	}
}
// System.Single UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_tangentialPressure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PointerEventBase_1_get_tangentialPressure_mC0CFC086A4DFB3E17BCD21E4160ACD603665B14F_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_U3CtangentialPressureU3Ek__BackingField_29();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_tangentialPressure(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_tangentialPressure_mF4F73800C1371922C764A68571EE5FEBAE6483B3_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CtangentialPressureU3Ek__BackingField_29(L_0);
		return;
	}
}
// System.Single UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_altitudeAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PointerEventBase_1_get_altitudeAngle_m2435AB1E4C0356CD8B7480CCC9DA0A29C9E20552_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_U3CaltitudeAngleU3Ek__BackingField_30();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_altitudeAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_altitudeAngle_mD17E4BCCD7FC8DA192CE62B3698F679D1B02C90F_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CaltitudeAngleU3Ek__BackingField_30(L_0);
		return;
	}
}
// System.Single UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_azimuthAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PointerEventBase_1_get_azimuthAngle_m422781577714067F6E02EE35455068A32DC5BBE6_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_U3CazimuthAngleU3Ek__BackingField_31();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_azimuthAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_azimuthAngle_m87F09C90AECC255663699363D24566411029ADED_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CazimuthAngleU3Ek__BackingField_31(L_0);
		return;
	}
}
// System.Single UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_twist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PointerEventBase_1_get_twist_m17C6FF7DDF22A7304109ECCA102DDA11261BB565_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_U3CtwistU3Ek__BackingField_32();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_twist(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_twist_m24FC39D16A9DF59BC6FC90D0BB5FAE89C323419F_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CtwistU3Ek__BackingField_32(L_0);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  PointerEventBase_1_get_radius_m1151001376A0E1E4820A047BBA764E06200CA020_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )__this->get_U3CradiusU3Ek__BackingField_33();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_radius(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_radius_m9D032DF72E8A5A33D1730B14740E27A3B2E129D4_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_U3CradiusU3Ek__BackingField_33(L_0);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_radiusVariance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  PointerEventBase_1_get_radiusVariance_m75EF5AA70912A20B5A88B7384C9BE39348C2CDA2_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )__this->get_U3CradiusVarianceU3Ek__BackingField_34();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_radiusVariance(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_radiusVariance_m168F0A2BE17E4F2AFA153081D70CC1958AD0D019_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_U3CradiusVarianceU3Ek__BackingField_34(L_0);
		return;
	}
}
// UnityEngine.EventModifiers UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_modifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_modifiers_m67237FCFA88DDCD62B80091F6315A74BAE0A0077_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CmodifiersU3Ek__BackingField_35();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_modifiers(UnityEngine.EventModifiers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_modifiers_m3CC28C71D396F95B636A41012A984545B8E413B7_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CmodifiersU3Ek__BackingField_35(L_0);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.PointerEventBase`1<System.Object>::UnityEngine.UIElements.IPointerEventInternal.get_triggeredByOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerEventBase_1_UnityEngine_UIElements_IPointerEventInternal_get_triggeredByOS_m28CFFE1E3C06B3D805F23F9CFE8E33EEDBB35C34_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::UnityEngine.UIElements.IPointerEventInternal.set_triggeredByOS(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_UnityEngine_UIElements_IPointerEventInternal_set_triggeredByOS_m1D6BB02F12528516E81F64FAA600D55A9E532BAD_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36(L_0);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.PointerEventBase`1<System.Object>::UnityEngine.UIElements.IPointerEventInternal.get_recomputeTopElementUnderPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerEventBase_1_UnityEngine_UIElements_IPointerEventInternal_get_recomputeTopElementUnderPointer_mA9F483E5E02D290ACDFE1B9271B5C45EC6D81F66_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::UnityEngine.UIElements.IPointerEventInternal.set_recomputeTopElementUnderPointer(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_UnityEngine_UIElements_IPointerEventInternal_set_recomputeTopElementUnderPointer_mCA845A070CB9408D18F78C866D26507BC98A91CF_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_Init_m3D1D7E029EF2063D3F1D7B293BC638403992F95D_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this);
		((  void (*) (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::LocalInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_LocalInit_m6A72C0C79B21E843E37A6DDC0BE8A117365A28E6_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerEventBase_1_LocalInit_m6A72C0C79B21E843E37A6DDC0BE8A117365A28E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_set_propagation_mF770530A5B592FAB33C549ED74453ABC7ED0E7A6_inline((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (int32_t)7, /*hidden argument*/NULL);
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_set_propagateToIMGUI_m4B5E6109B619AF7761D310984BEB6C2210E05DD2((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (bool)0, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		IL2CPP_RUNTIME_CLASS_INIT(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_StaticFields*)il2cpp_codegen_static_fields_for(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_il2cpp_TypeInfo_var))->get_unknown_3();
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (String_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (float)(0.0f), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (float)(0.0f), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (float)(0.0f), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (float)(0.0f), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (float)(0.0f), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (float)(0.0f), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void UnityEngine.UIElements.IPointerEventInternal::set_triggeredByOS(System.Boolean) */, IPointerEventInternal_tA7CFA0A98B5E87A72EC8D777BB1ACEC1F98F8405_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (bool)0);
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void UnityEngine.UIElements.IPointerEventInternal::set_recomputeTopElementUnderPointer(System.Boolean) */, IPointerEventInternal_tA7CFA0A98B5E87A72EC8D777BB1ACEC1F98F8405_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (bool)0);
		return;
	}
}
// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_currentTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PointerEventBase_1_get_currentTarget_mB32ECD29E26275732B4E311717D53E8B921014DC_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		RuntimeObject* L_0 = EventBase_get_currentTarget_mB3B3ED90CE63BFFE6E789E0BC5FA5B904BDEF581((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, /*hidden argument*/NULL);
		V_0 = (RuntimeObject*)L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_currentTarget(UnityEngine.UIElements.IEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_currentTarget_m571C3135C0C55466E277FDA84EE500DCB69C1C51_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerEventBase_1_set_currentTarget_m571C3135C0C55466E277FDA84EE500DCB69C1C51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___value0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_set_currentTarget_mBA8C39A26A9E8B67E1003496F77C00BA48FA1B90((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (RuntimeObject*)L_0, /*hidden argument*/NULL);
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(10 /* UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::get_currentTarget() */, (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		V_0 = (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)((VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)IsInst((RuntimeObject*)L_1, VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_il2cpp_TypeInfo_var));
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_4 = V_0;
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_5, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = VisualElementExtensions_WorldToLocal_mFDEA66A0B4B27B27D235DE5E11E68E3145CA18C8((VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)L_4, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_7, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		goto IL_004d;
	}

IL_003e:
	{
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_004d:
	{
		return;
	}
}
// System.Boolean UnityEngine.UIElements.PointerEventBase`1<System.Object>::IsMouse(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerEventBase_1_IsMouse_m3CAAD93D850AB416844EC5AE97338036DEE7F21B_gshared (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___systemEvent0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B8_0 = 0;
	{
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_0 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_0);
		int32_t L_1 = Event_get_rawType_m4139BB74440F552F5FD31F56215938E227EF0CD9((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_0, /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)3)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)16))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)20))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_8 = V_0;
		G_B8_0 = ((((int32_t)L_8) == ((int32_t)((int32_t)21)))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B8_0 = 1;
	}

IL_0029:
	{
		V_1 = (bool)G_B8_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_9 = V_1;
		return L_9;
	}
}
// T UnityEngine.UIElements.PointerEventBase`1<System.Object>::GetPooled(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PointerEventBase_1_GetPooled_m654B49807444AB3C852A3B8F68181B9203E352F7_gshared (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___systemEvent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerEventBase_1_GetPooled_m654B49807444AB3C852A3B8F68181B9203E352F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	RuntimeObject * V_7 = NULL;
	int32_t G_B3_0 = 0;
	RuntimeObject * G_B22_0 = NULL;
	RuntimeObject * G_B21_0 = NULL;
	float G_B23_0 = 0.0f;
	RuntimeObject * G_B23_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 21)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		V_0 = (RuntimeObject *)L_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_1 = ___systemEvent0;
		bool L_2 = ((  bool (*) (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23)->methodPointer)((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_3 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_3);
		int32_t L_4 = Event_get_rawType_m4139BB74440F552F5FD31F56215938E227EF0CD9((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_3, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)9)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralF950D9CCC7081471921E58DAA686F27E792540D3);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralF950D9CCC7081471921E58DAA686F27E792540D3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_7;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_9 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_9);
		int32_t L_10 = Event_get_rawType_m4139BB74440F552F5FD31F56215938E227EF0CD9((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_9, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(EventType_t3D3937E705A4506226002DAB22071B7B181DA57B_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_8;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralD21048C5C5B019FA0A181ABA5C8DC41BEE59E376);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralD21048C5C5B019FA0A181ABA5C8DC41BEE59E376);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_13;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_15 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_15);
		int32_t L_16 = Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_15, /*hidden argument*/NULL);
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(EventType_t3D3937E705A4506226002DAB22071B7B181DA57B_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_18);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_14;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A);
		String_t* L_20 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Assert_m84EE43ACFD01E8C0CEC0160C494B2CE77338F7BC((bool)0, (String_t*)L_20, /*hidden argument*/NULL);
	}

IL_006b:
	{
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_21 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_21);
		int32_t L_22 = Event_get_pointerType_m1D8031C5A8BFBAC21BAAB396199CDFCD3AAC42CA((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_21, /*hidden argument*/NULL);
		V_2 = (int32_t)L_22;
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)1)))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0078;
	}

IL_0078:
	{
		int32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)2)))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_007e;
	}

IL_007e:
	{
		RuntimeObject * L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_il2cpp_TypeInfo_var);
		String_t* L_26 = ((PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_StaticFields*)il2cpp_codegen_static_fields_for(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_il2cpp_TypeInfo_var))->get_mouse_0();
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_25);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_25, (String_t*)L_26, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var);
		int32_t L_28 = ((PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var))->get_mousePointerId_2();
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_27);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_27, (int32_t)L_28, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		goto IL_00ea;
	}

IL_00a2:
	{
		RuntimeObject * L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_il2cpp_TypeInfo_var);
		String_t* L_30 = ((PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_StaticFields*)il2cpp_codegen_static_fields_for(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_il2cpp_TypeInfo_var))->get_touch_1();
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_29);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_29, (String_t*)L_30, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var);
		int32_t L_32 = ((PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var))->get_touchPointerIdBase_3();
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_31);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_31, (int32_t)L_32, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		goto IL_00ea;
	}

IL_00c6:
	{
		RuntimeObject * L_33 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_il2cpp_TypeInfo_var);
		String_t* L_34 = ((PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_StaticFields*)il2cpp_codegen_static_fields_for(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_il2cpp_TypeInfo_var))->get_pen_2();
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_33);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_33, (String_t*)L_34, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_35 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var);
		int32_t L_36 = ((PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var))->get_penPointerIdBase_5();
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_35);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_35, (int32_t)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		goto IL_00ea;
	}

IL_00ea:
	{
		RuntimeObject * L_37 = V_0;
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_37);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_37, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RuntimeObject * L_38 = V_0;
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_38);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_38, (float)(0.0f), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		RuntimeObject * L_39 = V_0;
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_39);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_39, (float)(0.0f), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		RuntimeObject * L_40 = V_0;
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_40);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_40, (float)(0.0f), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		RuntimeObject * L_41 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_42 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_41);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_41, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_42, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		RuntimeObject * L_43 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_44 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_43);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_43, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_44, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		RuntimeObject * L_45 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_46 = ___systemEvent0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_45);
		EventBase_set_imguiEvent_mD693DAF0735050C06640E8C9DD5683E210D18E15((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_45, (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_46, /*hidden argument*/NULL);
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_47 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_47);
		int32_t L_48 = Event_get_rawType_m4139BB74440F552F5FD31F56215938E227EF0CD9((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_47, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_48) == ((int32_t)0))? 1 : 0);
		bool L_49 = V_3;
		if (!L_49)
		{
			goto IL_018d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var);
		int32_t L_50 = ((PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var))->get_mousePointerId_2();
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_51 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_51);
		int32_t L_52 = Event_get_button_mA6E2D86802D75E24DB3C52EB52142EA98A3B93CE((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PointerDeviceState_tBADA581B3E49FE39A2230120F84FCBD94BB8ADA4_il2cpp_TypeInfo_var);
		PointerDeviceState_PressButton_mD0A791144315B3CFEB74A02FECBEDFFD24A4A9CE((int32_t)L_50, (int32_t)L_52, /*hidden argument*/NULL);
		RuntimeObject * L_53 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_54 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_54);
		int32_t L_55 = Event_get_button_mA6E2D86802D75E24DB3C52EB52142EA98A3B93CE((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_54, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_53);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_53, (int32_t)L_55, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		goto IL_01e1;
	}

IL_018d:
	{
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_56 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_56);
		int32_t L_57 = Event_get_rawType_m4139BB74440F552F5FD31F56215938E227EF0CD9((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_56, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_57) == ((int32_t)1))? 1 : 0);
		bool L_58 = V_4;
		if (!L_58)
		{
			goto IL_01c3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var);
		int32_t L_59 = ((PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var))->get_mousePointerId_2();
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_60 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_60);
		int32_t L_61 = Event_get_button_mA6E2D86802D75E24DB3C52EB52142EA98A3B93CE((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_60, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PointerDeviceState_tBADA581B3E49FE39A2230120F84FCBD94BB8ADA4_il2cpp_TypeInfo_var);
		PointerDeviceState_ReleaseButton_m841973E840794947778B7057D4DD315556F7A6A5((int32_t)L_59, (int32_t)L_61, /*hidden argument*/NULL);
		RuntimeObject * L_62 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_63 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_63);
		int32_t L_64 = Event_get_button_mA6E2D86802D75E24DB3C52EB52142EA98A3B93CE((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_63, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_62);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_62, (int32_t)L_64, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		goto IL_01e1;
	}

IL_01c3:
	{
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_65 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_65);
		int32_t L_66 = Event_get_rawType_m4139BB74440F552F5FD31F56215938E227EF0CD9((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_65, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_66) == ((int32_t)2))? 1 : 0);
		bool L_67 = V_5;
		if (!L_67)
		{
			goto IL_01e1;
		}
	}
	{
		RuntimeObject * L_68 = V_0;
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_68);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_68, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	}

IL_01e1:
	{
		RuntimeObject * L_69 = V_0;
		RuntimeObject * L_70 = V_0;
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_70);
		int32_t L_71 = ((  int32_t (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 26)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_70, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		IL2CPP_RUNTIME_CLASS_INIT(PointerDeviceState_tBADA581B3E49FE39A2230120F84FCBD94BB8ADA4_il2cpp_TypeInfo_var);
		int32_t L_72 = PointerDeviceState_GetPressedButtons_m92D8D7B9F9B7A2251807764D45D133CE96E7E8C2((int32_t)L_71, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_69);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_69, (int32_t)L_72, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		RuntimeObject * L_73 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_74 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_74);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_75 = Event_get_mousePosition_m92AD98489A626864E9B179273270802EB1D2C085((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_74, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_76 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_75, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_73);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_73, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_76, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		RuntimeObject * L_77 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_78 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_78);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_79 = Event_get_mousePosition_m92AD98489A626864E9B179273270802EB1D2C085((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_78, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_80 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_79, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_77);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_77, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_80, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		RuntimeObject * L_81 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_82 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_82);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_83 = Event_get_delta_m552632C8BD6AFB1FF814636177843C6E28E87B85((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_82, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_84 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_83, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_81);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_81, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_84, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		RuntimeObject * L_85 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_86 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_86);
		int32_t L_87 = Event_get_clickCount_m8C296AD53AA9F14D43DB3682227DD343B9499F21((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_86, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_85);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_85, (int32_t)L_87, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_88 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_89 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_89);
		int32_t L_90 = Event_get_modifiers_m4D1BDE843A9379F50C3F32CB78CCDAD84B779108((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_89, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_88);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_88, (int32_t)L_90, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_91 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_91);
		int32_t L_92 = Event_get_pointerType_m1D8031C5A8BFBAC21BAAB396199CDFCD3AAC42CA((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_91, /*hidden argument*/NULL);
		V_6 = (int32_t)L_92;
		int32_t L_93 = V_6;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_93, (int32_t)1))) > ((uint32_t)1))))
		{
			goto IL_029e;
		}
	}
	{
		goto IL_0277;
	}

IL_0277:
	{
		RuntimeObject * L_94 = V_0;
		RuntimeObject * L_95 = V_0;
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_95);
		int32_t L_96 = ((  int32_t (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 27)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_95, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 27));
		G_B21_0 = L_94;
		if (!L_96)
		{
			G_B22_0 = L_94;
			goto IL_0291;
		}
	}
	{
		G_B23_0 = (0.5f);
		G_B23_1 = G_B21_0;
		goto IL_0296;
	}

IL_0291:
	{
		G_B23_0 = (0.0f);
		G_B23_1 = G_B22_0;
	}

IL_0296:
	{
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)G_B23_1);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)G_B23_1, (float)G_B23_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		goto IL_02b2;
	}

IL_029e:
	{
		RuntimeObject * L_97 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_98 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_98);
		float L_99 = Event_get_pressure_m2F2732871C11B870A4DE6CF3056C495252B07024((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_98, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_97);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_97, (float)L_99, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		goto IL_02b2;
	}

IL_02b2:
	{
		RuntimeObject * L_100 = V_0;
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_100);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_100, (float)(0.0f), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		RuntimeObject * L_101 = V_0;
		NullCheck((RuntimeObject*)L_101);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void UnityEngine.UIElements.IPointerEventInternal::set_triggeredByOS(System.Boolean) */, IPointerEventInternal_tA7CFA0A98B5E87A72EC8D777BB1ACEC1F98F8405_il2cpp_TypeInfo_var, (RuntimeObject*)L_101, (bool)1);
		RuntimeObject * L_102 = V_0;
		V_7 = (RuntimeObject *)L_102;
		goto IL_02d5;
	}

IL_02d5:
	{
		RuntimeObject * L_103 = V_7;
		return L_103;
	}
}
// T UnityEngine.UIElements.PointerEventBase`1<System.Object>::GetPooled(UnityEngine.UIElements.IPointerEvent,UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PointerEventBase_1_GetPooled_mB4E401D8A4F768CEE0AC20377156F8AD7C9A32EE_gshared (RuntimeObject* ___triggerEvent0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___position1, int32_t ___pointerId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerEventBase_1_GetPooled_mB4E401D8A4F768CEE0AC20377156F8AD7C9A32EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	{
		RuntimeObject* L_0 = ___triggerEvent0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_2 = ___triggerEvent0;
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 28)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		V_2 = (RuntimeObject *)L_3;
		goto IL_0060;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 21)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		V_0 = (RuntimeObject *)L_4;
		RuntimeObject * L_5 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = ___position1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_6, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_5);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_5, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		RuntimeObject * L_8 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = ___position1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_9, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_8);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_8, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		RuntimeObject * L_11 = V_0;
		int32_t L_12 = ___pointerId2;
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_11);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_13 = V_0;
		int32_t L_14 = ___pointerId2;
		IL2CPP_RUNTIME_CLASS_INIT(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_il2cpp_TypeInfo_var);
		String_t* L_15 = PointerType_GetPointerType_mFC253D2B16A977A73555E236FBD45A36F271D9A1((int32_t)L_14, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_13);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_13, (String_t*)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_16 = V_0;
		V_2 = (RuntimeObject *)L_16;
		goto IL_0060;
	}

IL_0060:
	{
		RuntimeObject * L_17 = V_2;
		return L_17;
	}
}
// T UnityEngine.UIElements.PointerEventBase`1<System.Object>::GetPooled(UnityEngine.UIElements.IPointerEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PointerEventBase_1_GetPooled_m86CCDFBD02BDF5AE0EB7F297281EF28A286C0162_gshared (RuntimeObject* ___triggerEvent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerEventBase_1_GetPooled_m86CCDFBD02BDF5AE0EB7F297281EF28A286C0162_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject * V_4 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 21)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject* L_1 = ___triggerEvent0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_017b;
		}
	}
	{
		RuntimeObject * L_3 = V_0;
		RuntimeObject* L_4 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 UnityEngine.UIElements.IPointerEvent::get_pointerId() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_3);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_3, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_6 = V_0;
		RuntimeObject* L_7 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_7);
		String_t* L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String UnityEngine.UIElements.IPointerEvent::get_pointerType() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_6);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_6, (String_t*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_9 = V_0;
		RuntimeObject* L_10 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_10);
		bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean UnityEngine.UIElements.IPointerEvent::get_isPrimary() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_9);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_9, (bool)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RuntimeObject * L_12 = V_0;
		RuntimeObject* L_13 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_13);
		int32_t L_14 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 UnityEngine.UIElements.IPointerEvent::get_button() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_12);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_12, (int32_t)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		RuntimeObject * L_15 = V_0;
		RuntimeObject* L_16 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_16);
		int32_t L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.UIElements.IPointerEvent::get_pressedButtons() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_15);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_15, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		RuntimeObject * L_18 = V_0;
		RuntimeObject* L_19 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_19);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = InterfaceFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(5 /* UnityEngine.Vector3 UnityEngine.UIElements.IPointerEvent::get_position() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_18);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_18, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		RuntimeObject * L_21 = V_0;
		RuntimeObject* L_22 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_22);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = InterfaceFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(6 /* UnityEngine.Vector3 UnityEngine.UIElements.IPointerEvent::get_localPosition() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_21);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_21, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		RuntimeObject * L_24 = V_0;
		RuntimeObject* L_25 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = InterfaceFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(7 /* UnityEngine.Vector3 UnityEngine.UIElements.IPointerEvent::get_deltaPosition() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_25);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_24);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_24, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_26, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		RuntimeObject * L_27 = V_0;
		RuntimeObject* L_28 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_28);
		float L_29 = InterfaceFuncInvoker0< float >::Invoke(8 /* System.Single UnityEngine.UIElements.IPointerEvent::get_deltaTime() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_27);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_27, (float)L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		RuntimeObject * L_30 = V_0;
		RuntimeObject* L_31 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_31);
		int32_t L_32 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 UnityEngine.UIElements.IPointerEvent::get_clickCount() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_30);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_30, (int32_t)L_32, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_33 = V_0;
		RuntimeObject* L_34 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_34);
		float L_35 = InterfaceFuncInvoker0< float >::Invoke(10 /* System.Single UnityEngine.UIElements.IPointerEvent::get_pressure() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_33);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_33, (float)L_35, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		RuntimeObject * L_36 = V_0;
		RuntimeObject* L_37 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_37);
		float L_38 = InterfaceFuncInvoker0< float >::Invoke(11 /* System.Single UnityEngine.UIElements.IPointerEvent::get_tangentialPressure() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_37);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_36);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_36, (float)L_38, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		RuntimeObject * L_39 = V_0;
		RuntimeObject* L_40 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_40);
		float L_41 = InterfaceFuncInvoker0< float >::Invoke(12 /* System.Single UnityEngine.UIElements.IPointerEvent::get_altitudeAngle() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_40);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_39);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_39, (float)L_41, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		RuntimeObject * L_42 = V_0;
		RuntimeObject* L_43 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_43);
		float L_44 = InterfaceFuncInvoker0< float >::Invoke(13 /* System.Single UnityEngine.UIElements.IPointerEvent::get_azimuthAngle() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_43);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_42);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_42, (float)L_44, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		RuntimeObject * L_45 = V_0;
		RuntimeObject* L_46 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_46);
		float L_47 = InterfaceFuncInvoker0< float >::Invoke(14 /* System.Single UnityEngine.UIElements.IPointerEvent::get_twist() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_45);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_45, (float)L_47, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		RuntimeObject * L_48 = V_0;
		RuntimeObject* L_49 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_49);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_50 = InterfaceFuncInvoker0< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(15 /* UnityEngine.Vector2 UnityEngine.UIElements.IPointerEvent::get_radius() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_49);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_48);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_48, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_50, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		RuntimeObject * L_51 = V_0;
		RuntimeObject* L_52 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_52);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_53 = InterfaceFuncInvoker0< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(16 /* UnityEngine.Vector2 UnityEngine.UIElements.IPointerEvent::get_radiusVariance() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_52);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_51);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_51, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_53, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		RuntimeObject * L_54 = V_0;
		RuntimeObject* L_55 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_55);
		int32_t L_56 = InterfaceFuncInvoker0< int32_t >::Invoke(17 /* UnityEngine.EventModifiers UnityEngine.UIElements.IPointerEvent::get_modifiers() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_55);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_54);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_54, (int32_t)L_56, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		RuntimeObject* L_57 = ___triggerEvent0;
		V_2 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_57, IPointerEventInternal_tA7CFA0A98B5E87A72EC8D777BB1ACEC1F98F8405_il2cpp_TypeInfo_var));
		RuntimeObject* L_58 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_58) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_59 = V_3;
		if (!L_59)
		{
			goto IL_017a;
		}
	}
	{
		RuntimeObject * L_60 = V_0;
		RuntimeObject* L_61 = V_2;
		NullCheck((RuntimeObject*)L_61);
		bool L_62 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.UIElements.IPointerEventInternal::get_triggeredByOS() */, IPointerEventInternal_tA7CFA0A98B5E87A72EC8D777BB1ACEC1F98F8405_il2cpp_TypeInfo_var, (RuntimeObject*)L_61);
		NullCheck((RuntimeObject*)L_60);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void UnityEngine.UIElements.IPointerEventInternal::set_triggeredByOS(System.Boolean) */, IPointerEventInternal_tA7CFA0A98B5E87A72EC8D777BB1ACEC1F98F8405_il2cpp_TypeInfo_var, (RuntimeObject*)L_60, (bool)L_62);
	}

IL_017a:
	{
	}

IL_017b:
	{
		RuntimeObject * L_63 = V_0;
		V_4 = (RuntimeObject *)L_63;
		goto IL_0180;
	}

IL_0180:
	{
		RuntimeObject * L_64 = V_4;
		return L_64;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::PreDispatch(UnityEngine.UIElements.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_PreDispatch_m359A5629E26AA079E72B1A00D41C93821C6368B0_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, RuntimeObject* ___panel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerEventBase_1_PreDispatch_m359A5629E26AA079E72B1A00D41C93821C6368B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___panel0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_PreDispatch_m242A7911A4139A5BF3BDAF7952AE67DF0DBC779A((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (RuntimeObject*)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)__this);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.UIElements.IPointerEventInternal::get_triggeredByOS() */, IPointerEventInternal_tA7CFA0A98B5E87A72EC8D777BB1ACEC1F98F8405_il2cpp_TypeInfo_var, (RuntimeObject*)__this);
		V_0 = (bool)L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		int32_t L_3 = ((  int32_t (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_4, /*hidden argument*/NULL);
		RuntimeObject* L_6 = ___panel0;
		IL2CPP_RUNTIME_CLASS_INIT(PointerDeviceState_tBADA581B3E49FE39A2230120F84FCBD94BB8ADA4_il2cpp_TypeInfo_var);
		PointerDeviceState_SavePointerPosition_mFFAA7F8C884E231C7D950676565CDE8A9BAF2390((int32_t)L_3, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_5, (RuntimeObject*)L_6, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::PostDispatch(UnityEngine.UIElements.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_PostDispatch_m2DE466AABDA92057C28FD02AF8C130F459C06FBA_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, RuntimeObject* ___panel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerEventBase_1_PostDispatch_m2DE466AABDA92057C28FD02AF8C130F459C06FBA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B6_0 = 0;
	BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * G_B9_0 = NULL;
	BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * G_B8_0 = NULL;
	{
		V_0 = (int32_t)0;
		goto IL_0013;
	}

IL_0005:
	{
		RuntimeObject* L_0 = ___panel0;
		int32_t L_1 = V_0;
		PointerCaptureHelper_ProcessPointerCapture_m09CC6875E7044A577341CFA82E5E665DA7434EC6((RuntimeObject*)L_0, (int32_t)L_1, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0013:
	{
		int32_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var);
		int32_t L_4 = ((PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var))->get_maxPointers_0();
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (L_5)
		{
			goto IL_0005;
		}
	}
	{
		RuntimeObject* L_6 = ___panel0;
		bool L_7 = PointerCaptureHelper_ShouldSendCompatibilityMouseEvents_m7719A65D3C28756BA1F509CAD2362E2B7A05DD83((RuntimeObject*)L_6, (RuntimeObject*)__this, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0030;
		}
	}
	{
		NullCheck((RuntimeObject*)__this);
		bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.UIElements.IPointerEventInternal::get_triggeredByOS() */, IPointerEventInternal_tA7CFA0A98B5E87A72EC8D777BB1ACEC1F98F8405_il2cpp_TypeInfo_var, (RuntimeObject*)__this);
		G_B6_0 = ((int32_t)(L_8));
		goto IL_0031;
	}

IL_0030:
	{
		G_B6_0 = 0;
	}

IL_0031:
	{
		V_2 = (bool)G_B6_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		RuntimeObject* L_10 = ___panel0;
		BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * L_11 = (BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 *)((BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 *)IsInst((RuntimeObject*)L_10, BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90_il2cpp_TypeInfo_var));
		G_B8_0 = L_11;
		if (L_11)
		{
			G_B9_0 = L_11;
			goto IL_0042;
		}
	}
	{
		goto IL_0048;
	}

IL_0042:
	{
		NullCheck((BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 *)G_B9_0);
		BaseVisualElementPanel_CommitElementUnderPointers_mFBDB91138145CF30ADB72FE74511C7E8BD3374F3((BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 *)G_B9_0, /*hidden argument*/NULL);
	}

IL_0048:
	{
	}

IL_0049:
	{
		RuntimeObject* L_12 = ___panel0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_PostDispatch_m4182DABA2D5674FC82F67DC57219840840065644((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (RuntimeObject*)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1__ctor_m6EC743C864C40687A3E8E3C3EE82BCF6B76B2595_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 22));
		((  void (*) (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 29)->methodPointer)((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 29));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
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
// T UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_m_Keyword_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_1 = V_0;
		G_B3_0 = L_1;
		goto IL_001a;
	}

IL_0014:
	{
		int32_t L_2 = (int32_t)__this->get_m_Value_1();
		G_B3_0 = L_2;
	}

IL_001a:
	{
		V_1 = (int32_t)G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	return StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109(_thisAdjusted, method);
}
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::set_specificity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Specificity_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B(_thisAdjusted, ___value0, method);
}
// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_keyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_get_keyword_m73D1031A571AC4D33C8FAE3C20FAC0E5C2A456A2_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_m_Keyword_0();
		V_0 = (int32_t)L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t StyleEnum_1_get_keyword_m73D1031A571AC4D33C8FAE3C20FAC0E5C2A456A2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	return StyleEnum_1_get_keyword_m73D1031A571AC4D33C8FAE3C20FAC0E5C2A456A2(_thisAdjusted, method);
}
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::.ctor(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method)
{
	{
		__this->set_m_Specificity_2(0);
		int32_t L_0 = ___keyword1;
		__this->set_m_Keyword_0(L_0);
		int32_t L_1 = ___v0;
		__this->set_m_Value_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_AdjustorThunk (RuntimeObject * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82(_thisAdjusted, ___v0, ___keyword1, method);
}
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::op_Equality(UnityEngine.UIElements.StyleEnum`1<T>,UnityEngine.UIElements.StyleEnum`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleEnum_1_op_Equality_mCBBFEC68B4112344CE885DAA95737BD217263E3E_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  ___lhs0, StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_0 = ___lhs0;
		int32_t L_1 = (int32_t)L_0.get_m_Keyword_0();
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_2 = ___rhs1;
		int32_t L_3 = (int32_t)L_2.get_m_Keyword_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0029;
		}
	}
	{
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_4 = ___lhs0;
		int32_t L_5 = (int32_t)L_4.get_m_Value_1();
		int32_t L_6 = ((  int32_t (*) (int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_7 = ___rhs1;
		int32_t L_8 = (int32_t)L_7.get_m_Value_1();
		int32_t L_9 = ((  int32_t (*) (int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)L_9))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 0;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002d;
	}

IL_002d:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::Equals(UnityEngine.UIElements.StyleEnum`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleEnum_1_Equals_mFA300F4368EBB8B5AED6497B6462C7BC7A851FC2_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_0 = ___other0;
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_1 = (*(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)__this);
		bool L_2 = ((  bool (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C , StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_0, (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = (bool)L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool StyleEnum_1_Equals_mFA300F4368EBB8B5AED6497B6462C7BC7A851FC2_AdjustorThunk (RuntimeObject * __this, StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	return StyleEnum_1_Equals_mFA300F4368EBB8B5AED6497B6462C7BC7A851FC2(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleEnum_1_Equals_m24B121AC6754A2F66CF25C7F26F5D73B79AD7FD6_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_1 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3)))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_002c;
	}

IL_0016:
	{
		RuntimeObject * L_2 = ___obj0;
		V_0 = (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )((*(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)((StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3)))));
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_3 = V_0;
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_4 = (*(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)__this);
		bool L_5 = ((  bool (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C , StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_3, (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_2 = (bool)L_5;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool StyleEnum_1_Equals_m24B121AC6754A2F66CF25C7F26F5D73B79AD7FD6_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	return StyleEnum_1_Equals_m24B121AC6754A2F66CF25C7F26F5D73B79AD7FD6(_thisAdjusted, ___obj0, method);
}
// System.Int32 UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = (int32_t)((int32_t)917506989);
		int32_t L_0 = V_0;
		int32_t* L_1 = (int32_t*)__this->get_address_of_m_Keyword_0();
		Il2CppFakeBox<int32_t> L_2(StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(&L_2));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)-1521134295))), (int32_t)L_3));
		int32_t L_4 = V_0;
		int32_t* L_5 = (int32_t*)__this->get_address_of_m_Value_1();
		Il2CppFakeBox<int32_t> L_6(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_5);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(&L_6));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)((int32_t)-1521134295))), (int32_t)L_7));
		int32_t L_8 = V_0;
		int32_t* L_9 = (int32_t*)__this->get_address_of_m_Specificity_2();
		int32_t L_10 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(int32_t*)L_9, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)((int32_t)-1521134295))), (int32_t)L_10));
		int32_t L_11 = V_0;
		V_1 = (int32_t)L_11;
		goto IL_0053;
	}

IL_0053:
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C  int32_t StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	return StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94(_thisAdjusted, method);
}
// System.String UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StyleEnum_1_ToString_m8F8781B4E85F3CF71A0EB27291996FC8607775BF_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_0 = (*(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)__this);
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3), &L_1);
		String_t* L_3 = ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (String_t*)L_3;
		goto IL_0014;
	}

IL_0014:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* StyleEnum_1_ToString_m8F8781B4E85F3CF71A0EB27291996FC8607775BF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	return StyleEnum_1_ToString_m8F8781B4E85F3CF71A0EB27291996FC8607775BF(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ColorTween_get_ignoreTimeScale_m6A06826E19314EFE9783E505C75CFC76E42E8F05_inline (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_IgnoreTimeScale; }
		bool L_0 = __this->get_m_IgnoreTimeScale_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float ColorTween_get_duration_mC4A1E3C2EA46A5C657A2B9DA240C796F770ECC5F_inline (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Duration; }
		float L_0 = __this->get_m_Duration_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool FloatTween_get_ignoreTimeScale_mA7B69D72E1D52EF1890C89D5690D345B852C7239_inline (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_IgnoreTimeScale; }
		bool L_0 = __this->get_m_IgnoreTimeScale_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float FloatTween_get_duration_mBECFBEC57BDC30B54D0638873BA3313A8F7232F5_inline (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Duration; }
		float L_0 = __this->get_m_Duration_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void EventBase_set_propagation_mF770530A5B592FAB33C549ED74453ABC7ED0E7A6_inline (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpropagationU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint64_t EventBase_get_eventId_mAECD1254234BF118F42559AC0B717A64E7F27517_inline (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_U3CeventIdU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * FocusChangeDirection_get_unspecified_m72CA7BA378E9E8EF915B6997E7F0601DACE6E2A8_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FocusChangeDirection_get_unspecified_m72CA7BA378E9E8EF915B6997E7F0601DACE6E2A8Generics23_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_il2cpp_TypeInfo_var);
		FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * L_0 = ((FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_StaticFields*)il2cpp_codegen_static_fields_for(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_il2cpp_TypeInfo_var))->get_U3CunspecifiedU3Ek__BackingField_0();
		return L_0;
	}
}
