// Generated by Apple Swift version 5.5.2 (swiftlang-1300.0.47.5 clang-1300.0.29.30)
#ifndef ROOKMOTIONSDK_SWIFT_H
#define ROOKMOTIONSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import Realm;
@import UIKit;
@import WatchConnectivity;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="RookMotionSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class WCSession;
@class NSString;

SWIFT_PROTOCOL("_TtP13RookMotionSDK21CommunicationDelegate_")
@protocol CommunicationDelegate
- (void)session:(WCSession * _Nonnull)session messageData:(NSDictionary<NSString *, id> * _Nonnull)messageData;
- (void)session:(WCSession * _Nonnull)session userInfo:(NSDictionary<NSString *, id> * _Nonnull)userInfo;
@optional
- (void)session:(WCSession * _Nonnull)session message:(NSDictionary<NSString *, id> * _Nonnull)message;
@end


SWIFT_CLASS("_TtC13RookMotionSDK11OptionalInt")
@interface OptionalInt : RealmSwiftObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSNumber;

/// RMAuxiliarSummary model helps to store the number of samples ant its value accumulated
SWIFT_CLASS("_TtC13RookMotionSDK17RMAuxiliarSummary")
@interface RMAuxiliarSummary : RealmSwiftObject
@property (nonatomic) NSInteger id;
@property (nonatomic) NSInteger hrElements;
@property (nonatomic) NSInteger hrAccumulated;
@property (nonatomic) NSInteger effortElements;
@property (nonatomic) NSInteger effortAccumulated;
@property (nonatomic) NSInteger cadenceElements;
@property (nonatomic) NSInteger cadenceAccumulated;
+ (NSString * _Nullable)primaryKey SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("RMBasalCalculator")
@interface RMBasalCalculator : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end





SWIFT_CLASS("_TtC13RookMotionSDK20RMBicycleDataRecords")
@interface RMBicycleDataRecords : RealmSwiftObject
@property (nonatomic, copy) NSString * _Nonnull timestamp;
@property (nonatomic) NSInteger cadence;
@property (nonatomic) float power;
@property (nonatomic) float resistance;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13RookMotionSDK22RMCommunicationManager")
@interface RMCommunicationManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface RMCommunicationManager (SWIFT_EXTENSION(RookMotionSDK)) <WCSessionDelegate>
- (void)sessionDidBecomeInactive:(WCSession * _Nonnull)session;
- (void)sessionDidDeactivate:(WCSession * _Nonnull)session;
- (void)session:(WCSession * _Nonnull)session activationDidCompleteWithState:(WCSessionActivationState)activationState error:(NSError * _Nullable)error;
- (void)session:(WCSession * _Nonnull)session didReceiveUserInfo:(NSDictionary<NSString *, id> * _Nonnull)userInfo;
- (void)session:(WCSession * _Nonnull)session didReceiveMessage:(NSDictionary<NSString *, id> * _Nonnull)message replyHandler:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nonnull))replyHandler;
@end


/// STORAGE.class This struct contains the steps derived data that can be calculated on the
/// Equation class  hr ,calories,effort  and the  timestamp of this data
SWIFT_CLASS("_TtC13RookMotionSDK22RMHeartRateDataRecords")
@interface RMHeartRateDataRecords : RealmSwiftObject
@property (nonatomic, copy) NSString * _Nonnull timestamp;
@property (nonatomic) NSInteger heartRate;
@property (nonatomic) float calories;
@property (nonatomic) float effort;
@property (nonatomic, copy) NSString * _Nonnull start;
@property (nonatomic) float heart_rate_variability;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface RMHeartRateDataRecords (SWIFT_EXTENSION(RookMotionSDK))
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@end


SWIFT_CLASS("_TtC13RookMotionSDK13RMRemoteClass")
@interface RMRemoteClass : RealmSwiftObject
@property (nonatomic) NSInteger id;
@property (nonatomic, copy) NSString * _Nonnull classUUID;
@property (nonatomic, copy) NSString * _Nonnull roomUUID;
@property (nonatomic, copy) NSString * _Nonnull trainingName;
@property (nonatomic) NSInteger classDelay;
@property (nonatomic) NSInteger useSteps;
@property (nonatomic, copy) NSString * _Nonnull stepOptions;
+ (NSString * _Nullable)primaryKey SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13RookMotionSDK14RMRewardRecord")
@interface RMRewardRecord : RealmSwiftObject
@property (nonatomic, copy) NSString * _Nonnull rewardTypeUUID;
@property (nonatomic) float value;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface RMRewardRecord (SWIFT_EXTENSION(RookMotionSDK))
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@end


/// This is model is used to store the sensors retrieved from the web service.
SWIFT_CLASS("_TtC13RookMotionSDK11RMSensorAPI")
@interface RMSensorAPI : RealmSwiftObject
@property (nonatomic, copy) NSString * _Nullable sensorName;
@property (nonatomic, copy) NSString * _Nullable sensorUUID;
@property (nonatomic, copy) NSString * _Nullable sensorMAC;
@property (nonatomic, copy) NSString * _Nullable updatedAt;
@property (nonatomic, copy) NSString * _Nullable ownershipType;
+ (NSString * _Nullable)primaryKey SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// STORAGE.class This struct contains the steps derived data that can be calculated on the
/// Equation class  cadence ,steps  and the  timestamp of this data
SWIFT_CLASS("_TtC13RookMotionSDK17RMStepDataRecords")
@interface RMStepDataRecords : RealmSwiftObject
@property (nonatomic, copy) NSString * _Nonnull timestamp;
@property (nonatomic) float cadence;
@property (nonatomic) NSInteger steps;
@property (nonatomic, copy) NSString * _Nonnull start;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface RMStepDataRecords (SWIFT_EXTENSION(RookMotionSDK))
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@end


SWIFT_CLASS("_TtC13RookMotionSDK16RMStorageManager")
@interface RMStorageManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@class RMTrainingSummaries;
@class RMTrainingStoragedRecords;

/// RMTrainingInfo model is used to store the workout data, it can help to recover the information, if the app terminates.
/// <h1>Properties:</h1>
/// <ul>
///   <li>
///     start
///   </li>
///   <li>
///     end
///   </li>
///   <li>
///     trainingTypeUUID
///   </li>
///   <li>
///     sensorUUID
///   </li>
///   <li>
///     sensorName
///   </li>
///   <li>
///     deviceType
///   </li>
///   <li>
///     uploadedAt
///   </li>
///   <li>
///     groupalMode
///   </li>
///   <li>
///     auxSummary
///   </li>
///   <li>
///     summary
///   </li>
///   <li>
///     records
///   </li>
///   <li>
///     summaries
///   </li>
/// </ul>
SWIFT_CLASS("_TtC13RookMotionSDK14RMTrainingInfo")
@interface RMTrainingInfo : RealmSwiftObject
/// Start time of the training “YYYY-MM-dd  HH:mm:ss”
@property (nonatomic, copy) NSString * _Nullable start;
/// End time of the training “YYYY-MM-dd  HH:mm:ss”
@property (nonatomic, copy) NSString * _Nullable end;
/// uuid of the training
@property (nonatomic, copy) NSString * _Nullable trainingTypeUUID;
/// uuid od the sensor used in the wotkout
@property (nonatomic, copy) NSString * _Nullable sensorUUID;
/// sensor name of the training
@property (nonatomic, copy) NSString * _Nullable sensorName;
@property (nonatomic, copy) NSString * _Nullable deviceType;
@property (nonatomic, copy) NSString * _Nonnull uploadedAt;
@property (nonatomic) NSInteger groupalMode;
@property (nonatomic, strong) RMAuxiliarSummary * _Nullable auxSummary;
@property (nonatomic, strong) RMTrainingSummaries * _Nullable summary;
@property (nonatomic, strong) RMTrainingStoragedRecords * _Nullable records;
@property (nonatomic, strong) RMRemoteClass * _Nullable remoteClass;
@property (nonatomic, copy) NSString * _Nullable offset;
+ (NSString * _Nullable)primaryKey SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC13RookMotionSDK17RMTrainingManager")
@interface RMTrainingManager : UIViewController
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end



@class RMTrainingType;

SWIFT_CLASS("_TtC13RookMotionSDK21RMTrainingPreferences")
@interface RMTrainingPreferences : RealmSwiftObject
@property (nonatomic) NSInteger id;
@property (nonatomic, strong) RMTrainingType * _Nullable trainingType;
@property (nonatomic, strong) RMSensorAPI * _Nullable sensor;
+ (NSString * _Nullable)primaryKey SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13RookMotionSDK25RMTrainingStoragedRecords")
@interface RMTrainingStoragedRecords : RealmSwiftObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// STORAGE.class this struct contains the training summaries on realtime
SWIFT_CLASS("_TtC13RookMotionSDK19RMTrainingSummaries")
@interface RMTrainingSummaries : RealmSwiftObject
@property (nonatomic) NSInteger id;
@property (nonatomic) NSInteger duration_time_tot;
@property (nonatomic) float z1_time;
@property (nonatomic) float z2_time;
@property (nonatomic) float z3_time;
@property (nonatomic) float z4_time;
@property (nonatomic) float z5_time;
@property (nonatomic) NSInteger hr_max;
@property (nonatomic) NSInteger hr_min;
@property (nonatomic) NSInteger hr_avg;
@property (nonatomic) NSInteger effort_max;
@property (nonatomic) NSInteger effort_min;
@property (nonatomic) NSInteger effort_avg;
@property (nonatomic) NSInteger calories;
@property (nonatomic) float z1_calories_tot;
@property (nonatomic) float z2_calories_tot;
@property (nonatomic) float z3_calories_tot;
@property (nonatomic) float z4_calories_tot;
@property (nonatomic) float z5_calories_tot;
@property (nonatomic) NSInteger steptsTotal;
@property (nonatomic) NSInteger z1_steps_tot;
@property (nonatomic) NSInteger z2_steps_tot;
@property (nonatomic) NSInteger z3_steps_tot;
@property (nonatomic) NSInteger z4_steps_tot;
@property (nonatomic) NSInteger z5_steps_tot;
@property (nonatomic) float cadence_max;
@property (nonatomic) float cadence_min;
@property (nonatomic) float cadence_avg;
@property (nonatomic) NSInteger z1_cadence_tot;
@property (nonatomic) NSInteger z2_cadence_tot;
@property (nonatomic) NSInteger z3_cadence_tot;
@property (nonatomic) NSInteger z4_cadence_tot;
@property (nonatomic) NSInteger z5_cadence_tot;
+ (NSString * _Nullable)primaryKey SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



/// This model helps to store the summary id and its value
SWIFT_CLASS("_TtC13RookMotionSDK17RMTrainingSummary")
@interface RMTrainingSummary : RealmSwiftObject
@property (nonatomic) NSInteger summaryTypeID;
@property (nonatomic) NSInteger value;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UseSteps;

SWIFT_CLASS("_TtC13RookMotionSDK14RMTrainingType")
@interface RMTrainingType : RealmSwiftObject
@property (nonatomic, copy) NSString * _Nullable trainingTypeUUID;
@property (nonatomic, copy) NSString * _Nullable trainigName;
@property (nonatomic, strong) OptionalInt * _Nullable useHeartRate;
@property (nonatomic, strong) OptionalInt * _Nullable useCycling;
@property (nonatomic, strong) OptionalInt * _Nullable useGps;
@property (nonatomic, strong) UseSteps * _Nullable useSteps;
+ (NSString * _Nullable)primaryKey SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class RMUserPhysiologicalVariables;

/// The RMUser class is a realm model that conform the Codable protocol, this model is used to store the information of a user.
/// <ul>
///   <li>
///     Properties:
///   </li>
/// </ul>
/// <ol>
///   <li>
///     userUUID : String
///   </li>
///   <li>
///     token_user : String
///   </li>
///   <li>
///     name : String
///   </li>
///   <li>
///     lastName1: String
///   </li>
///   <li>
///     lastName2: String
///   </li>
///   <li>
///     email: String
///   </li>
///   <li>
///     phone : String
///   </li>
///   <li>
///     birthday: String YYYY/MM/dd
///   </li>
///   <li>
///     sex: String (male or female)
///   </li>
///   <li>
///     pseudonym: String
///   </li>
///   <li>
///     physiologicalVariables
///   </li>
/// </ol>
/// <ul>
///   <li>
///     weight: String number from 30 to 200
///   </li>
///   <li>
///     height: String number  from 120 to 220
///   </li>
///   <li>
///     restingHeartRate: String number from 40 to 100
///   </li>
/// </ul>
/// Methods:
/// <ul>
///   <li>
///     updatePhysiologicalVariables
///   </li>
///   <li>
///     updateUserProperties
///   </li>
/// </ul>
SWIFT_CLASS("_TtC13RookMotionSDK6RMUser")
@interface RMUser : RealmSwiftObject
@property (nonatomic) NSInteger id;
@property (nonatomic, copy) NSString * _Nullable userUUID;
@property (nonatomic, copy) NSString * _Nullable token_user;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, copy) NSString * _Nullable lastName1;
@property (nonatomic, copy) NSString * _Nullable lastName2;
@property (nonatomic, copy) NSString * _Nullable email;
@property (nonatomic, copy) NSString * _Nullable phone;
@property (nonatomic, copy) NSString * _Nullable birthday;
@property (nonatomic, copy) NSString * _Nullable sex;
@property (nonatomic, copy) NSString * _Nullable pseudonym;
@property (nonatomic, strong) RMUserPhysiologicalVariables * _Nullable physiologicalVariables;
@property (nonatomic) BOOL updatePending;
+ (NSString * _Nullable)primaryKey SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13RookMotionSDK28RMUserPhysiologicalVariables")
@interface RMUserPhysiologicalVariables : RealmSwiftObject
@property (nonatomic, copy) NSString * _Nullable weight;
@property (nonatomic, copy) NSString * _Nullable height;
@property (nonatomic, copy) NSString * _Nullable restingHeartRate;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC13RookMotionSDK8UseSteps")
@interface UseSteps : RealmSwiftObject
@property (nonatomic, strong) OptionalInt * _Nullable enabled;
@property (nonatomic, copy) NSString * _Nullable stepsTypes;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
