#include "il2cpp-config.h"

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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Action
struct Action_t1264377477;
// System.Void
struct Void_t1185182177;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1113559212;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t197597763;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t143221404;
// Waypoint[]
struct WaypointU5BU5D_t1069915672;
// Timer
struct Timer_t4185932343;
// UnityEngine.MeshFilter
struct MeshFilter_t3523625662;
// UnityEngine.MeshRenderer
struct MeshRenderer_t587009260;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef TIMER_T4185932343_H
#define TIMER_T4185932343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Timer
struct  Timer_t4185932343  : public RuntimeObject
{
public:
	// System.Single Timer::duration
	float ___duration_0;
	// System.Single Timer::t
	float ___t_1;
	// System.Boolean Timer::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_2;
	// System.Action Timer::onCancel
	Action_t1264377477 * ___onCancel_3;
	// System.Action Timer::onFinish
	Action_t1264377477 * ___onFinish_4;

public:
	inline static int32_t get_offset_of_duration_0() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___duration_0)); }
	inline float get_duration_0() const { return ___duration_0; }
	inline float* get_address_of_duration_0() { return &___duration_0; }
	inline void set_duration_0(float value)
	{
		___duration_0 = value;
	}

	inline static int32_t get_offset_of_t_1() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___t_1)); }
	inline float get_t_1() const { return ___t_1; }
	inline float* get_address_of_t_1() { return &___t_1; }
	inline void set_t_1(float value)
	{
		___t_1 = value;
	}

	inline static int32_t get_offset_of_U3CIsRunningU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___U3CIsRunningU3Ek__BackingField_2)); }
	inline bool get_U3CIsRunningU3Ek__BackingField_2() const { return ___U3CIsRunningU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsRunningU3Ek__BackingField_2() { return &___U3CIsRunningU3Ek__BackingField_2; }
	inline void set_U3CIsRunningU3Ek__BackingField_2(bool value)
	{
		___U3CIsRunningU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_onCancel_3() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___onCancel_3)); }
	inline Action_t1264377477 * get_onCancel_3() const { return ___onCancel_3; }
	inline Action_t1264377477 ** get_address_of_onCancel_3() { return &___onCancel_3; }
	inline void set_onCancel_3(Action_t1264377477 * value)
	{
		___onCancel_3 = value;
		Il2CppCodeGenWriteBarrier((&___onCancel_3), value);
	}

	inline static int32_t get_offset_of_onFinish_4() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___onFinish_4)); }
	inline Action_t1264377477 * get_onFinish_4() const { return ___onFinish_4; }
	inline Action_t1264377477 ** get_address_of_onFinish_4() { return &___onFinish_4; }
	inline void set_onFinish_4(Action_t1264377477 * value)
	{
		___onFinish_4 = value;
		Il2CppCodeGenWriteBarrier((&___onFinish_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMER_T4185932343_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef LAYERMASK_T3493934918_H
#define LAYERMASK_T3493934918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3493934918 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3493934918, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T3493934918_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef VUFORIAMONOBEHAVIOUR_T1150221792_H
#define VUFORIAMONOBEHAVIOUR_T1150221792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuforiaMonoBehaviour
struct  VuforiaMonoBehaviour_t1150221792  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAMONOBEHAVIOUR_T1150221792_H
#ifndef DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#define DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultTrackableEventHandler
struct  DefaultTrackableEventHandler_t1588957063  : public MonoBehaviour_t3962482529
{
public:
	// Vuforia.TrackableBehaviour DefaultTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1113559212 * ___mTrackableBehaviour_2;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_2() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1588957063, ___mTrackableBehaviour_2)); }
	inline TrackableBehaviour_t1113559212 * get_mTrackableBehaviour_2() const { return ___mTrackableBehaviour_2; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mTrackableBehaviour_2() { return &___mTrackableBehaviour_2; }
	inline void set_mTrackableBehaviour_2(TrackableBehaviour_t1113559212 * value)
	{
		___mTrackableBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviour_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifndef WAYPOINT_T1614450805_H
#define WAYPOINT_T1614450805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Waypoint
struct  Waypoint_t1614450805  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Waypoint::WaitTime
	float ___WaitTime_2;

public:
	inline static int32_t get_offset_of_WaitTime_2() { return static_cast<int32_t>(offsetof(Waypoint_t1614450805, ___WaitTime_2)); }
	inline float get_WaitTime_2() const { return ___WaitTime_2; }
	inline float* get_address_of_WaitTime_2() { return &___WaitTime_2; }
	inline void set_WaitTime_2(float value)
	{
		___WaitTime_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAYPOINT_T1614450805_H
#ifndef TEST_T1050239617_H
#define TEST_T1050239617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TEST
struct  TEST_t1050239617  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform TEST::t
	Transform_t3600365921 * ___t_2;

public:
	inline static int32_t get_offset_of_t_2() { return static_cast<int32_t>(offsetof(TEST_t1050239617, ___t_2)); }
	inline Transform_t3600365921 * get_t_2() const { return ___t_2; }
	inline Transform_t3600365921 ** get_address_of_t_2() { return &___t_2; }
	inline void set_t_2(Transform_t3600365921 * value)
	{
		___t_2 = value;
		Il2CppCodeGenWriteBarrier((&___t_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEST_T1050239617_H
#ifndef PLAYER_T3266647312_H
#define PLAYER_T3266647312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t3266647312  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Rigidbody Player::playerRigidbody
	Rigidbody_t3916780224 * ___playerRigidbody_3;
	// UnityEngine.CapsuleCollider Player::capsuleCollider
	CapsuleCollider_t197597763 * ___capsuleCollider_4;

public:
	inline static int32_t get_offset_of_playerRigidbody_3() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___playerRigidbody_3)); }
	inline Rigidbody_t3916780224 * get_playerRigidbody_3() const { return ___playerRigidbody_3; }
	inline Rigidbody_t3916780224 ** get_address_of_playerRigidbody_3() { return &___playerRigidbody_3; }
	inline void set_playerRigidbody_3(Rigidbody_t3916780224 * value)
	{
		___playerRigidbody_3 = value;
		Il2CppCodeGenWriteBarrier((&___playerRigidbody_3), value);
	}

	inline static int32_t get_offset_of_capsuleCollider_4() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___capsuleCollider_4)); }
	inline CapsuleCollider_t197597763 * get_capsuleCollider_4() const { return ___capsuleCollider_4; }
	inline CapsuleCollider_t197597763 ** get_address_of_capsuleCollider_4() { return &___capsuleCollider_4; }
	inline void set_capsuleCollider_4(CapsuleCollider_t197597763 * value)
	{
		___capsuleCollider_4 = value;
		Il2CppCodeGenWriteBarrier((&___capsuleCollider_4), value);
	}
};

struct Player_t3266647312_StaticFields
{
public:
	// UnityEngine.Transform Player::PlayerTransform
	Transform_t3600365921 * ___PlayerTransform_2;

public:
	inline static int32_t get_offset_of_PlayerTransform_2() { return static_cast<int32_t>(offsetof(Player_t3266647312_StaticFields, ___PlayerTransform_2)); }
	inline Transform_t3600365921 * get_PlayerTransform_2() const { return ___PlayerTransform_2; }
	inline Transform_t3600365921 ** get_address_of_PlayerTransform_2() { return &___PlayerTransform_2; }
	inline void set_PlayerTransform_2(Transform_t3600365921 * value)
	{
		___PlayerTransform_2 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerTransform_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYER_T3266647312_H
#ifndef GAMEOVERCONTROLLER_T3135689928_H
#define GAMEOVERCONTROLLER_T3135689928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameOverController
struct  GameOverController_t3135689928  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text GameOverController::recordNumberLabel
	Text_t1901882714 * ___recordNumberLabel_2;

public:
	inline static int32_t get_offset_of_recordNumberLabel_2() { return static_cast<int32_t>(offsetof(GameOverController_t3135689928, ___recordNumberLabel_2)); }
	inline Text_t1901882714 * get_recordNumberLabel_2() const { return ___recordNumberLabel_2; }
	inline Text_t1901882714 ** get_address_of_recordNumberLabel_2() { return &___recordNumberLabel_2; }
	inline void set_recordNumberLabel_2(Text_t1901882714 * value)
	{
		___recordNumberLabel_2 = value;
		Il2CppCodeGenWriteBarrier((&___recordNumberLabel_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOVERCONTROLLER_T3135689928_H
#ifndef GAMECONTROLLER_T2330501625_H
#define GAMECONTROLLER_T2330501625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t2330501625  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AudioSource GameController::myAudio
	AudioSource_t3935305588 * ___myAudio_2;
	// UnityEngine.AudioClip[] GameController::clips
	AudioClipU5BU5D_t143221404* ___clips_3;
	// System.Int32 GameController::coinsNumber
	int32_t ___coinsNumber_4;
	// System.Int32 GameController::levelNumber
	int32_t ___levelNumber_5;
	// System.Int32 GameController::lifeNumber
	int32_t ___lifeNumber_6;
	// UnityEngine.UI.Text GameController::coinsNumberLabel
	Text_t1901882714 * ___coinsNumberLabel_7;
	// UnityEngine.UI.Text GameController::levelNumberLabel
	Text_t1901882714 * ___levelNumberLabel_8;
	// UnityEngine.UI.Text GameController::lifeNumberLabel
	Text_t1901882714 * ___lifeNumberLabel_9;

public:
	inline static int32_t get_offset_of_myAudio_2() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___myAudio_2)); }
	inline AudioSource_t3935305588 * get_myAudio_2() const { return ___myAudio_2; }
	inline AudioSource_t3935305588 ** get_address_of_myAudio_2() { return &___myAudio_2; }
	inline void set_myAudio_2(AudioSource_t3935305588 * value)
	{
		___myAudio_2 = value;
		Il2CppCodeGenWriteBarrier((&___myAudio_2), value);
	}

	inline static int32_t get_offset_of_clips_3() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___clips_3)); }
	inline AudioClipU5BU5D_t143221404* get_clips_3() const { return ___clips_3; }
	inline AudioClipU5BU5D_t143221404** get_address_of_clips_3() { return &___clips_3; }
	inline void set_clips_3(AudioClipU5BU5D_t143221404* value)
	{
		___clips_3 = value;
		Il2CppCodeGenWriteBarrier((&___clips_3), value);
	}

	inline static int32_t get_offset_of_coinsNumber_4() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___coinsNumber_4)); }
	inline int32_t get_coinsNumber_4() const { return ___coinsNumber_4; }
	inline int32_t* get_address_of_coinsNumber_4() { return &___coinsNumber_4; }
	inline void set_coinsNumber_4(int32_t value)
	{
		___coinsNumber_4 = value;
	}

	inline static int32_t get_offset_of_levelNumber_5() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___levelNumber_5)); }
	inline int32_t get_levelNumber_5() const { return ___levelNumber_5; }
	inline int32_t* get_address_of_levelNumber_5() { return &___levelNumber_5; }
	inline void set_levelNumber_5(int32_t value)
	{
		___levelNumber_5 = value;
	}

	inline static int32_t get_offset_of_lifeNumber_6() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___lifeNumber_6)); }
	inline int32_t get_lifeNumber_6() const { return ___lifeNumber_6; }
	inline int32_t* get_address_of_lifeNumber_6() { return &___lifeNumber_6; }
	inline void set_lifeNumber_6(int32_t value)
	{
		___lifeNumber_6 = value;
	}

	inline static int32_t get_offset_of_coinsNumberLabel_7() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___coinsNumberLabel_7)); }
	inline Text_t1901882714 * get_coinsNumberLabel_7() const { return ___coinsNumberLabel_7; }
	inline Text_t1901882714 ** get_address_of_coinsNumberLabel_7() { return &___coinsNumberLabel_7; }
	inline void set_coinsNumberLabel_7(Text_t1901882714 * value)
	{
		___coinsNumberLabel_7 = value;
		Il2CppCodeGenWriteBarrier((&___coinsNumberLabel_7), value);
	}

	inline static int32_t get_offset_of_levelNumberLabel_8() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___levelNumberLabel_8)); }
	inline Text_t1901882714 * get_levelNumberLabel_8() const { return ___levelNumberLabel_8; }
	inline Text_t1901882714 ** get_address_of_levelNumberLabel_8() { return &___levelNumberLabel_8; }
	inline void set_levelNumberLabel_8(Text_t1901882714 * value)
	{
		___levelNumberLabel_8 = value;
		Il2CppCodeGenWriteBarrier((&___levelNumberLabel_8), value);
	}

	inline static int32_t get_offset_of_lifeNumberLabel_9() { return static_cast<int32_t>(offsetof(GameController_t2330501625, ___lifeNumberLabel_9)); }
	inline Text_t1901882714 * get_lifeNumberLabel_9() const { return ___lifeNumberLabel_9; }
	inline Text_t1901882714 ** get_address_of_lifeNumberLabel_9() { return &___lifeNumberLabel_9; }
	inline void set_lifeNumberLabel_9(Text_t1901882714 * value)
	{
		___lifeNumberLabel_9 = value;
		Il2CppCodeGenWriteBarrier((&___lifeNumberLabel_9), value);
	}
};

struct GameController_t2330501625_StaticFields
{
public:
	// GameController GameController::instance
	GameController_t2330501625 * ___instance_10;

public:
	inline static int32_t get_offset_of_instance_10() { return static_cast<int32_t>(offsetof(GameController_t2330501625_StaticFields, ___instance_10)); }
	inline GameController_t2330501625 * get_instance_10() const { return ___instance_10; }
	inline GameController_t2330501625 ** get_address_of_instance_10() { return &___instance_10; }
	inline void set_instance_10(GameController_t2330501625 * value)
	{
		___instance_10 = value;
		Il2CppCodeGenWriteBarrier((&___instance_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMECONTROLLER_T2330501625_H
#ifndef ENEMYMOVEMENT_T2945001265_H
#define ENEMYMOVEMENT_T2945001265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyMovement
struct  EnemyMovement_t2945001265  : public MonoBehaviour_t3962482529
{
public:
	// System.Single EnemyMovement::movementSpeed
	float ___movementSpeed_2;
	// System.Single EnemyMovement::rotationSpeed
	float ___rotationSpeed_3;
	// Waypoint[] EnemyMovement::waypoints
	WaypointU5BU5D_t1069915672* ___waypoints_4;
	// System.Int32 EnemyMovement::curWp
	int32_t ___curWp_7;
	// UnityEngine.Vector3 EnemyMovement::velocity
	Vector3_t3722313464  ___velocity_8;
	// Timer EnemyMovement::waitTimer
	Timer_t4185932343 * ___waitTimer_9;

public:
	inline static int32_t get_offset_of_movementSpeed_2() { return static_cast<int32_t>(offsetof(EnemyMovement_t2945001265, ___movementSpeed_2)); }
	inline float get_movementSpeed_2() const { return ___movementSpeed_2; }
	inline float* get_address_of_movementSpeed_2() { return &___movementSpeed_2; }
	inline void set_movementSpeed_2(float value)
	{
		___movementSpeed_2 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_3() { return static_cast<int32_t>(offsetof(EnemyMovement_t2945001265, ___rotationSpeed_3)); }
	inline float get_rotationSpeed_3() const { return ___rotationSpeed_3; }
	inline float* get_address_of_rotationSpeed_3() { return &___rotationSpeed_3; }
	inline void set_rotationSpeed_3(float value)
	{
		___rotationSpeed_3 = value;
	}

	inline static int32_t get_offset_of_waypoints_4() { return static_cast<int32_t>(offsetof(EnemyMovement_t2945001265, ___waypoints_4)); }
	inline WaypointU5BU5D_t1069915672* get_waypoints_4() const { return ___waypoints_4; }
	inline WaypointU5BU5D_t1069915672** get_address_of_waypoints_4() { return &___waypoints_4; }
	inline void set_waypoints_4(WaypointU5BU5D_t1069915672* value)
	{
		___waypoints_4 = value;
		Il2CppCodeGenWriteBarrier((&___waypoints_4), value);
	}

	inline static int32_t get_offset_of_curWp_7() { return static_cast<int32_t>(offsetof(EnemyMovement_t2945001265, ___curWp_7)); }
	inline int32_t get_curWp_7() const { return ___curWp_7; }
	inline int32_t* get_address_of_curWp_7() { return &___curWp_7; }
	inline void set_curWp_7(int32_t value)
	{
		___curWp_7 = value;
	}

	inline static int32_t get_offset_of_velocity_8() { return static_cast<int32_t>(offsetof(EnemyMovement_t2945001265, ___velocity_8)); }
	inline Vector3_t3722313464  get_velocity_8() const { return ___velocity_8; }
	inline Vector3_t3722313464 * get_address_of_velocity_8() { return &___velocity_8; }
	inline void set_velocity_8(Vector3_t3722313464  value)
	{
		___velocity_8 = value;
	}

	inline static int32_t get_offset_of_waitTimer_9() { return static_cast<int32_t>(offsetof(EnemyMovement_t2945001265, ___waitTimer_9)); }
	inline Timer_t4185932343 * get_waitTimer_9() const { return ___waitTimer_9; }
	inline Timer_t4185932343 ** get_address_of_waitTimer_9() { return &___waitTimer_9; }
	inline void set_waitTimer_9(Timer_t4185932343 * value)
	{
		___waitTimer_9 = value;
		Il2CppCodeGenWriteBarrier((&___waitTimer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYMOVEMENT_T2945001265_H
#ifndef ENEMYFOV_T2551321406_H
#define ENEMYFOV_T2551321406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyFov
struct  EnemyFov_t2551321406  : public MonoBehaviour_t3962482529
{
public:
	// System.Single EnemyFov::fovAngle
	float ___fovAngle_2;
	// System.Single EnemyFov::range
	float ___range_3;
	// System.Int32 EnemyFov::resolution
	int32_t ___resolution_4;
	// UnityEngine.LayerMask EnemyFov::playerLayerMask
	LayerMask_t3493934918  ___playerLayerMask_5;
	// System.Boolean EnemyFov::drawDebugLines
	bool ___drawDebugLines_6;
	// System.Boolean EnemyFov::<IsSpotted>k__BackingField
	bool ___U3CIsSpottedU3Ek__BackingField_7;
	// UnityEngine.MeshFilter EnemyFov::meshFilter
	MeshFilter_t3523625662 * ___meshFilter_8;
	// UnityEngine.MeshRenderer EnemyFov::meshRenderer
	MeshRenderer_t587009260 * ___meshRenderer_9;
	// UnityEngine.Mesh EnemyFov::mesh
	Mesh_t3648964284 * ___mesh_10;
	// System.Int32[] EnemyFov::tris
	Int32U5BU5D_t385246372* ___tris_11;

public:
	inline static int32_t get_offset_of_fovAngle_2() { return static_cast<int32_t>(offsetof(EnemyFov_t2551321406, ___fovAngle_2)); }
	inline float get_fovAngle_2() const { return ___fovAngle_2; }
	inline float* get_address_of_fovAngle_2() { return &___fovAngle_2; }
	inline void set_fovAngle_2(float value)
	{
		___fovAngle_2 = value;
	}

	inline static int32_t get_offset_of_range_3() { return static_cast<int32_t>(offsetof(EnemyFov_t2551321406, ___range_3)); }
	inline float get_range_3() const { return ___range_3; }
	inline float* get_address_of_range_3() { return &___range_3; }
	inline void set_range_3(float value)
	{
		___range_3 = value;
	}

	inline static int32_t get_offset_of_resolution_4() { return static_cast<int32_t>(offsetof(EnemyFov_t2551321406, ___resolution_4)); }
	inline int32_t get_resolution_4() const { return ___resolution_4; }
	inline int32_t* get_address_of_resolution_4() { return &___resolution_4; }
	inline void set_resolution_4(int32_t value)
	{
		___resolution_4 = value;
	}

	inline static int32_t get_offset_of_playerLayerMask_5() { return static_cast<int32_t>(offsetof(EnemyFov_t2551321406, ___playerLayerMask_5)); }
	inline LayerMask_t3493934918  get_playerLayerMask_5() const { return ___playerLayerMask_5; }
	inline LayerMask_t3493934918 * get_address_of_playerLayerMask_5() { return &___playerLayerMask_5; }
	inline void set_playerLayerMask_5(LayerMask_t3493934918  value)
	{
		___playerLayerMask_5 = value;
	}

	inline static int32_t get_offset_of_drawDebugLines_6() { return static_cast<int32_t>(offsetof(EnemyFov_t2551321406, ___drawDebugLines_6)); }
	inline bool get_drawDebugLines_6() const { return ___drawDebugLines_6; }
	inline bool* get_address_of_drawDebugLines_6() { return &___drawDebugLines_6; }
	inline void set_drawDebugLines_6(bool value)
	{
		___drawDebugLines_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsSpottedU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(EnemyFov_t2551321406, ___U3CIsSpottedU3Ek__BackingField_7)); }
	inline bool get_U3CIsSpottedU3Ek__BackingField_7() const { return ___U3CIsSpottedU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsSpottedU3Ek__BackingField_7() { return &___U3CIsSpottedU3Ek__BackingField_7; }
	inline void set_U3CIsSpottedU3Ek__BackingField_7(bool value)
	{
		___U3CIsSpottedU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_meshFilter_8() { return static_cast<int32_t>(offsetof(EnemyFov_t2551321406, ___meshFilter_8)); }
	inline MeshFilter_t3523625662 * get_meshFilter_8() const { return ___meshFilter_8; }
	inline MeshFilter_t3523625662 ** get_address_of_meshFilter_8() { return &___meshFilter_8; }
	inline void set_meshFilter_8(MeshFilter_t3523625662 * value)
	{
		___meshFilter_8 = value;
		Il2CppCodeGenWriteBarrier((&___meshFilter_8), value);
	}

	inline static int32_t get_offset_of_meshRenderer_9() { return static_cast<int32_t>(offsetof(EnemyFov_t2551321406, ___meshRenderer_9)); }
	inline MeshRenderer_t587009260 * get_meshRenderer_9() const { return ___meshRenderer_9; }
	inline MeshRenderer_t587009260 ** get_address_of_meshRenderer_9() { return &___meshRenderer_9; }
	inline void set_meshRenderer_9(MeshRenderer_t587009260 * value)
	{
		___meshRenderer_9 = value;
		Il2CppCodeGenWriteBarrier((&___meshRenderer_9), value);
	}

	inline static int32_t get_offset_of_mesh_10() { return static_cast<int32_t>(offsetof(EnemyFov_t2551321406, ___mesh_10)); }
	inline Mesh_t3648964284 * get_mesh_10() const { return ___mesh_10; }
	inline Mesh_t3648964284 ** get_address_of_mesh_10() { return &___mesh_10; }
	inline void set_mesh_10(Mesh_t3648964284 * value)
	{
		___mesh_10 = value;
		Il2CppCodeGenWriteBarrier((&___mesh_10), value);
	}

	inline static int32_t get_offset_of_tris_11() { return static_cast<int32_t>(offsetof(EnemyFov_t2551321406, ___tris_11)); }
	inline Int32U5BU5D_t385246372* get_tris_11() const { return ___tris_11; }
	inline Int32U5BU5D_t385246372** get_address_of_tris_11() { return &___tris_11; }
	inline void set_tris_11(Int32U5BU5D_t385246372* value)
	{
		___tris_11 = value;
		Il2CppCodeGenWriteBarrier((&___tris_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYFOV_T2551321406_H
#ifndef COIN_T2227745140_H
#define COIN_T2227745140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Coin
struct  Coin_t2227745140  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COIN_T2227745140_H
#ifndef DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#define DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultInitializationErrorHandler
struct  DefaultInitializationErrorHandler_t3109936861  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// System.String DefaultInitializationErrorHandler::mErrorText
	String_t* ___mErrorText_2;
	// System.Boolean DefaultInitializationErrorHandler::mErrorOccurred
	bool ___mErrorOccurred_3;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::bodyStyle
	GUIStyle_t3956901511 * ___bodyStyle_5;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::headerStyle
	GUIStyle_t3956901511 * ___headerStyle_6;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::footerStyle
	GUIStyle_t3956901511 * ___footerStyle_7;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::bodyTexture
	Texture2D_t3840446185 * ___bodyTexture_8;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::headerTexture
	Texture2D_t3840446185 * ___headerTexture_9;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::footerTexture
	Texture2D_t3840446185 * ___footerTexture_10;

public:
	inline static int32_t get_offset_of_mErrorText_2() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___mErrorText_2)); }
	inline String_t* get_mErrorText_2() const { return ___mErrorText_2; }
	inline String_t** get_address_of_mErrorText_2() { return &___mErrorText_2; }
	inline void set_mErrorText_2(String_t* value)
	{
		___mErrorText_2 = value;
		Il2CppCodeGenWriteBarrier((&___mErrorText_2), value);
	}

	inline static int32_t get_offset_of_mErrorOccurred_3() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___mErrorOccurred_3)); }
	inline bool get_mErrorOccurred_3() const { return ___mErrorOccurred_3; }
	inline bool* get_address_of_mErrorOccurred_3() { return &___mErrorOccurred_3; }
	inline void set_mErrorOccurred_3(bool value)
	{
		___mErrorOccurred_3 = value;
	}

	inline static int32_t get_offset_of_bodyStyle_5() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___bodyStyle_5)); }
	inline GUIStyle_t3956901511 * get_bodyStyle_5() const { return ___bodyStyle_5; }
	inline GUIStyle_t3956901511 ** get_address_of_bodyStyle_5() { return &___bodyStyle_5; }
	inline void set_bodyStyle_5(GUIStyle_t3956901511 * value)
	{
		___bodyStyle_5 = value;
		Il2CppCodeGenWriteBarrier((&___bodyStyle_5), value);
	}

	inline static int32_t get_offset_of_headerStyle_6() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___headerStyle_6)); }
	inline GUIStyle_t3956901511 * get_headerStyle_6() const { return ___headerStyle_6; }
	inline GUIStyle_t3956901511 ** get_address_of_headerStyle_6() { return &___headerStyle_6; }
	inline void set_headerStyle_6(GUIStyle_t3956901511 * value)
	{
		___headerStyle_6 = value;
		Il2CppCodeGenWriteBarrier((&___headerStyle_6), value);
	}

	inline static int32_t get_offset_of_footerStyle_7() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___footerStyle_7)); }
	inline GUIStyle_t3956901511 * get_footerStyle_7() const { return ___footerStyle_7; }
	inline GUIStyle_t3956901511 ** get_address_of_footerStyle_7() { return &___footerStyle_7; }
	inline void set_footerStyle_7(GUIStyle_t3956901511 * value)
	{
		___footerStyle_7 = value;
		Il2CppCodeGenWriteBarrier((&___footerStyle_7), value);
	}

	inline static int32_t get_offset_of_bodyTexture_8() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___bodyTexture_8)); }
	inline Texture2D_t3840446185 * get_bodyTexture_8() const { return ___bodyTexture_8; }
	inline Texture2D_t3840446185 ** get_address_of_bodyTexture_8() { return &___bodyTexture_8; }
	inline void set_bodyTexture_8(Texture2D_t3840446185 * value)
	{
		___bodyTexture_8 = value;
		Il2CppCodeGenWriteBarrier((&___bodyTexture_8), value);
	}

	inline static int32_t get_offset_of_headerTexture_9() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___headerTexture_9)); }
	inline Texture2D_t3840446185 * get_headerTexture_9() const { return ___headerTexture_9; }
	inline Texture2D_t3840446185 ** get_address_of_headerTexture_9() { return &___headerTexture_9; }
	inline void set_headerTexture_9(Texture2D_t3840446185 * value)
	{
		___headerTexture_9 = value;
		Il2CppCodeGenWriteBarrier((&___headerTexture_9), value);
	}

	inline static int32_t get_offset_of_footerTexture_10() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___footerTexture_10)); }
	inline Texture2D_t3840446185 * get_footerTexture_10() const { return ___footerTexture_10; }
	inline Texture2D_t3840446185 ** get_address_of_footerTexture_10() { return &___footerTexture_10; }
	inline void set_footerTexture_10(Texture2D_t3840446185 * value)
	{
		___footerTexture_10 = value;
		Il2CppCodeGenWriteBarrier((&___footerTexture_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2400 = { sizeof (Coin_t2227745140), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2401 = { sizeof (EnemyFov_t2551321406), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2401[10] = 
{
	EnemyFov_t2551321406::get_offset_of_fovAngle_2(),
	EnemyFov_t2551321406::get_offset_of_range_3(),
	EnemyFov_t2551321406::get_offset_of_resolution_4(),
	EnemyFov_t2551321406::get_offset_of_playerLayerMask_5(),
	EnemyFov_t2551321406::get_offset_of_drawDebugLines_6(),
	EnemyFov_t2551321406::get_offset_of_U3CIsSpottedU3Ek__BackingField_7(),
	EnemyFov_t2551321406::get_offset_of_meshFilter_8(),
	EnemyFov_t2551321406::get_offset_of_meshRenderer_9(),
	EnemyFov_t2551321406::get_offset_of_mesh_10(),
	EnemyFov_t2551321406::get_offset_of_tris_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2402 = { sizeof (EnemyMovement_t2945001265), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2402[8] = 
{
	EnemyMovement_t2945001265::get_offset_of_movementSpeed_2(),
	EnemyMovement_t2945001265::get_offset_of_rotationSpeed_3(),
	EnemyMovement_t2945001265::get_offset_of_waypoints_4(),
	0,
	0,
	EnemyMovement_t2945001265::get_offset_of_curWp_7(),
	EnemyMovement_t2945001265::get_offset_of_velocity_8(),
	EnemyMovement_t2945001265::get_offset_of_waitTimer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2403 = { sizeof (GameController_t2330501625), -1, sizeof(GameController_t2330501625_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2403[9] = 
{
	GameController_t2330501625::get_offset_of_myAudio_2(),
	GameController_t2330501625::get_offset_of_clips_3(),
	GameController_t2330501625::get_offset_of_coinsNumber_4(),
	GameController_t2330501625::get_offset_of_levelNumber_5(),
	GameController_t2330501625::get_offset_of_lifeNumber_6(),
	GameController_t2330501625::get_offset_of_coinsNumberLabel_7(),
	GameController_t2330501625::get_offset_of_levelNumberLabel_8(),
	GameController_t2330501625::get_offset_of_lifeNumberLabel_9(),
	GameController_t2330501625_StaticFields::get_offset_of_instance_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2404 = { sizeof (GameOverController_t3135689928), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2404[1] = 
{
	GameOverController_t3135689928::get_offset_of_recordNumberLabel_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2405 = { sizeof (Player_t3266647312), -1, sizeof(Player_t3266647312_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2405[3] = 
{
	Player_t3266647312_StaticFields::get_offset_of_PlayerTransform_2(),
	Player_t3266647312::get_offset_of_playerRigidbody_3(),
	Player_t3266647312::get_offset_of_capsuleCollider_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2406 = { sizeof (TEST_t1050239617), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2406[1] = 
{
	TEST_t1050239617::get_offset_of_t_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2407 = { sizeof (Timer_t4185932343), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2407[5] = 
{
	Timer_t4185932343::get_offset_of_duration_0(),
	Timer_t4185932343::get_offset_of_t_1(),
	Timer_t4185932343::get_offset_of_U3CIsRunningU3Ek__BackingField_2(),
	Timer_t4185932343::get_offset_of_onCancel_3(),
	Timer_t4185932343::get_offset_of_onFinish_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2408 = { sizeof (Waypoint_t1614450805), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2408[1] = 
{
	Waypoint_t1614450805::get_offset_of_WaitTime_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2409 = { sizeof (DefaultInitializationErrorHandler_t3109936861), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2409[9] = 
{
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_mErrorText_2(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_mErrorOccurred_3(),
	0,
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_bodyStyle_5(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_headerStyle_6(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_footerStyle_7(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_bodyTexture_8(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_headerTexture_9(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_footerTexture_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2410 = { sizeof (DefaultTrackableEventHandler_t1588957063), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2410[1] = 
{
	DefaultTrackableEventHandler_t1588957063::get_offset_of_mTrackableBehaviour_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
