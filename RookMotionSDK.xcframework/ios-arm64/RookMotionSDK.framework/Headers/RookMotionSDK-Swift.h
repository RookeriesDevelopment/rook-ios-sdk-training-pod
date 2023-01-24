#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7 (swiftlang-5.7.0.127.4 clang-1400.0.29.50)
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

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

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
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreData;
@import Foundation;
@import ObjectiveC;
@import UIKit;
@import WatchConnectivity;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="RookMotionSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class WCSession;
@class NSString;

SWIFT_PROTOCOL("_TtP13RookMotionSDK21CommunicationDelegate_")
@protocol CommunicationDelegate
- (void)session:(WCSession * _Nonnull)session messageData:(NSDictionary<NSString *, id> * _Nonnull)messageData;
- (void)session:(WCSession * _Nonnull)session userInfo:(NSDictionary<NSString *, id> * _Nonnull)userInfo;
@optional
- (void)session:(WCSession * _Nonnull)session message:(NSDictionary<NSString *, id> * _Nonnull)message;
@end



SWIFT_CLASS_NAMED("RMBasalCalculator")
@interface RMBasalCalculator : NSObject
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
- (void)session:(WCSession * _Nonnull)session didReceiveMessage:(NSDictionary<NSString *, id> * _Nonnull)message;
- (void)sessionReachabilityDidChange:(WCSession * _Nonnull)session;
@end

@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS_NAMED("RMPhysiolocalVariables")
@interface RMPhysiolocalVariables : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@class RMUserEntity;

@interface RMPhysiolocalVariables (SWIFT_EXTENSION(RookMotionSDK))
@property (nonatomic, copy) NSString * _Nullable height;
@property (nonatomic, copy) NSString * _Nullable weight;
@property (nonatomic, copy) NSString * _Nullable restingHeartRate;
@property (nonatomic, strong) RMUserEntity * _Nullable user;
@end


SWIFT_CLASS_NAMED("RMSensorEntity")
@interface RMSensorEntity : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@class NSUUID;

@interface RMSensorEntity (SWIFT_EXTENSION(RookMotionSDK))
@property (nonatomic, copy) NSString * _Nullable sensorName;
@property (nonatomic, copy) NSString * _Nullable sensorUUID;
@property (nonatomic, copy) NSString * _Nullable sensorMac;
@property (nonatomic, copy) NSString * _Nullable updatedAt;
@property (nonatomic, copy) NSString * _Nullable ownershipType;
@property (nonatomic, copy) NSUUID * _Nullable deviceUUID;
@end


SWIFT_CLASS("_TtC13RookMotionSDK16RMStorageManager")
@interface RMStorageManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC13RookMotionSDK17RMTrainingManager")
@interface RMTrainingManager : UIViewController
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end




SWIFT_CLASS("_TtC13RookMotionSDK27RMTrainingPreferencesEntity")
@interface RMTrainingPreferencesEntity : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@class RMTrainingTypeEntity;

@interface RMTrainingPreferencesEntity (SWIFT_EXTENSION(RookMotionSDK))
@property (nonatomic) int16_t id;
@property (nonatomic, strong) RMTrainingTypeEntity * _Nullable trainingType;
@property (nonatomic, strong) RMSensorEntity * _Nullable sensor;
@end


SWIFT_CLASS("_TtC13RookMotionSDK20RMTrainingTypeEntity")
@interface RMTrainingTypeEntity : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@class RMUseStepsEntity;

@interface RMTrainingTypeEntity (SWIFT_EXTENSION(RookMotionSDK))
@property (nonatomic, copy) NSString * _Nonnull trainingTypeUUID;
@property (nonatomic, copy) NSString * _Nonnull trainigName;
@property (nonatomic) int32_t useHeartRate;
@property (nonatomic) int32_t useCycling;
@property (nonatomic) int32_t useGps;
@property (nonatomic, strong) RMUseStepsEntity * _Nullable useSteps;
@end


SWIFT_CLASS("_TtC13RookMotionSDK16RMUseStepsEntity")
@interface RMUseStepsEntity : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface RMUseStepsEntity (SWIFT_EXTENSION(RookMotionSDK))
@property (nonatomic) int32_t enabled;
@property (nonatomic, copy) NSString * _Nullable stepsTypes;
@property (nonatomic, strong) RMTrainingTypeEntity * _Nullable trainingType;
@end


SWIFT_CLASS_NAMED("RMUserEntity")
@interface RMUserEntity : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface RMUserEntity (SWIFT_EXTENSION(RookMotionSDK))
@property (nonatomic, copy) NSString * _Nullable lastName1;
@property (nonatomic, copy) NSString * _Nonnull name;
@property (nonatomic, copy) NSString * _Nullable pseudonym;
@property (nonatomic, copy) NSString * _Nonnull userEmail;
@property (nonatomic, copy) NSString * _Nullable userImage;
@property (nonatomic, copy) NSString * _Nullable token_user;
@property (nonatomic, copy) NSString * _Nonnull userUUID;
@property (nonatomic, copy) NSString * _Nullable lastName2;
@property (nonatomic, copy) NSString * _Nullable phone;
@property (nonatomic, copy) NSString * _Nullable birthday;
@property (nonatomic, copy) NSString * _Nullable sex;
@property (nonatomic, strong) RMPhysiolocalVariables * _Nullable physiologicalVariables;
@end


SWIFT_CLASS_NAMED("RMUserIndexes")
@interface RMUserIndexes : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface RMUserIndexes (SWIFT_EXTENSION(RookMotionSDK))
@property (nonatomic) float a;
@property (nonatomic) float b;
@property (nonatomic) float c;
@property (nonatomic) float d;
@property (nonatomic) float e;
@property (nonatomic) float f;
@property (nonatomic) float g;
@property (nonatomic) float h;
@end


SWIFT_CLASS("_TtC13RookMotionSDK19RookAuxiliarSummary")
@interface RookAuxiliarSummary : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@class RookTraining;

@interface RookAuxiliarSummary (SWIFT_EXTENSION(RookMotionSDK))
@property (nonatomic) int64_t cadenceAccumulated;
@property (nonatomic) int32_t cadenceElements;
@property (nonatomic) int64_t effortAccumulated;
@property (nonatomic) int32_t effortElements;
@property (nonatomic) int64_t hrAccumulated;
@property (nonatomic) int32_t hrElements;
@property (nonatomic, strong) RookTraining * _Nullable rookTraining;
@end


SWIFT_CLASS("_TtC13RookMotionSDK20RookHeartRateRecords")
@interface RookHeartRateRecords : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface RookHeartRateRecords (SWIFT_EXTENSION(RookMotionSDK))
@property (nonatomic) float calories;
@property (nonatomic) float effort;
@property (nonatomic) int16_t heartRate;
@property (nonatomic) float heartRateVariability;
@property (nonatomic, copy) NSString * _Nullable start;
@property (nonatomic, copy) NSString * _Nullable timeStamp;
@property (nonatomic, strong) RookTraining * _Nullable rookTraining;
@end


SWIFT_CLASS("_TtC13RookMotionSDK15RookRemoteClass")
@interface RookRemoteClass : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end




@interface RookRemoteClass (SWIFT_EXTENSION(RookMotionSDK))
@property (nonatomic) int32_t classDelay;
@property (nonatomic, copy) NSString * _Nullable classUUID;
@property (nonatomic, copy) NSString * _Nullable roomUUID;
@property (nonatomic, copy) NSString * _Nullable stepOptions;
@property (nonatomic, copy) NSString * _Nullable trainingName;
@property (nonatomic) BOOL useSteps;
@property (nonatomic, strong) RookTraining * _Nullable rookTraining;
@end


SWIFT_CLASS("_TtC13RookMotionSDK15RookStepRecords")
@interface RookStepRecords : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface RookStepRecords (SWIFT_EXTENSION(RookMotionSDK))
@property (nonatomic) float cadence;
@property (nonatomic, copy) NSString * _Nullable start;
@property (nonatomic) int64_t steps;
@property (nonatomic, copy) NSString * _Nullable timeStamp;
@property (nonatomic, strong) RookTraining * _Nullable rookTraining;
@end


SWIFT_CLASS("_TtC13RookMotionSDK12RookTraining")
@interface RookTraining : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@class NSSet;

@interface RookTraining (SWIFT_EXTENSION(RookMotionSDK))
- (void)addStepRecordsObject:(RookStepRecords * _Nonnull)value;
- (void)removeStepRecordsObject:(RookStepRecords * _Nonnull)value;
- (void)addStepRecords:(NSSet * _Nonnull)values;
- (void)removeStepRecords:(NSSet * _Nonnull)values;
@end


@interface RookTraining (SWIFT_EXTENSION(RookMotionSDK))
- (void)addHeartRateRecordsObject:(RookHeartRateRecords * _Nonnull)value;
- (void)removeHeartRateRecordsObject:(RookHeartRateRecords * _Nonnull)value;
- (void)addHeartRateRecords:(NSSet * _Nonnull)values;
- (void)removeHeartRateRecords:(NSSet * _Nonnull)values;
@end

@class RookTrainingSummaryValueEntity;

@interface RookTraining (SWIFT_EXTENSION(RookMotionSDK))
- (void)addSummariesObject:(RookTrainingSummaryValueEntity * _Nonnull)value;
- (void)removeSummariesObject:(RookTrainingSummaryValueEntity * _Nonnull)value;
- (void)addSummaries:(NSSet * _Nonnull)values;
- (void)removeSummaries:(NSSet * _Nonnull)values;
@end

@class RookTrainingSummaryEntity;

@interface RookTraining (SWIFT_EXTENSION(RookMotionSDK))
@property (nonatomic, copy) NSString * _Nullable deviceType;
@property (nonatomic, copy) NSString * _Nullable end;
@property (nonatomic) int16_t grupalMode;
@property (nonatomic, copy) NSString * _Nullable offset;
@property (nonatomic, copy) NSString * _Nullable sensorName;
@property (nonatomic, copy) NSString * _Nullable sensorUUID;
@property (nonatomic, copy) NSString * _Nullable start;
@property (nonatomic, copy) NSString * _Nullable trainingTypeUUID;
@property (nonatomic, copy) NSString * _Nullable uploadedAt;
@property (nonatomic, strong) RookAuxiliarSummary * _Nullable auxiliarSummary;
@property (nonatomic, strong) NSSet * _Nullable heartRateRecords;
@property (nonatomic, strong) RookRemoteClass * _Nullable remoteClass;
@property (nonatomic, strong) NSSet * _Nullable stepRecords;
@property (nonatomic, strong) NSSet * _Nullable summaries;
@property (nonatomic, strong) RookTrainingSummaryEntity * _Nullable trainingSummary;
@end


SWIFT_CLASS("_TtC13RookMotionSDK25RookTrainingSummaryEntity")
@interface RookTrainingSummaryEntity : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end




@interface RookTrainingSummaryEntity (SWIFT_EXTENSION(RookMotionSDK))
@property (nonatomic) float cadenceAvg;
@property (nonatomic) float cadenceMax;
@property (nonatomic) float cadenceMin;
@property (nonatomic) int64_t calories;
@property (nonatomic) int64_t durationTimeTot;
@property (nonatomic) int64_t effortAvg;
@property (nonatomic) int64_t effortMax;
@property (nonatomic) int64_t effortMin;
@property (nonatomic) int64_t hrAvg;
@property (nonatomic) int64_t hrMax;
@property (nonatomic) int64_t hrMin;
@property (nonatomic) int64_t stepsTotal;
@property (nonatomic) int64_t z1Cadence;
@property (nonatomic) float z1Calories;
@property (nonatomic) int64_t z1Steps;
@property (nonatomic) float z1Time;
@property (nonatomic) int64_t z2Cadence;
@property (nonatomic) float z2Calories;
@property (nonatomic) int64_t z2Steps;
@property (nonatomic) float z2Time;
@property (nonatomic) int64_t z3Cadence;
@property (nonatomic) float z3Calories;
@property (nonatomic) int64_t z3Steps;
@property (nonatomic) float z3Time;
@property (nonatomic) int64_t z4Cadence;
@property (nonatomic) float z4Calories;
@property (nonatomic) int64_t z4Steps;
@property (nonatomic) float z4Time;
@property (nonatomic) int64_t z5Cadence;
@property (nonatomic) float z5Calories;
@property (nonatomic) int64_t z5Steps;
@property (nonatomic) float z5Time;
@property (nonatomic, strong) RookTraining * _Nullable rookTraining;
@end


SWIFT_CLASS("_TtC13RookMotionSDK30RookTrainingSummaryValueEntity")
@interface RookTrainingSummaryValueEntity : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface RookTrainingSummaryValueEntity (SWIFT_EXTENSION(RookMotionSDK))
@property (nonatomic, copy) NSString * _Nullable summaryTypeID;
@property (nonatomic) int16_t value;
@property (nonatomic, strong) RookTraining * _Nullable rookTraining;
@end


#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
