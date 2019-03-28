// Generated by Apple Swift version 5.0 effective-4.2 (swiftlang-1001.0.69.5 clang-1001.0.46.3)
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
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import ObjectiveC;
@import edgeSDK_iOS;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="edgeSDK_iOS_app_ops",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

/// enum of potential micro service deployment states.
typedef SWIFT_ENUM(NSInteger, DeploymentState, closed) {
  DeploymentStateImageLoaded = 0,
  DeploymentStateContainerLoaded = 1,
  DeploymentStateUnloaded = 2,
  DeploymentStateError = 3,
};

@class DeploymentStatus;

SWIFT_CLASS("_TtC19edgeSDK_iOS_app_ops21DeploymentStateResult")
@interface DeploymentStateResult : NSObject
@property (nonatomic, strong) DeploymentStatus * _Nullable status;
@property (nonatomic) NSError * _Nullable error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// micro service status object. Essentially it provides information about the status of a micro service deployment.
/// <ul>
///   <li>
///     deploymentState: Current micro service deployment state.
///   </li>
/// </ul>
SWIFT_CLASS("_TtC19edgeSDK_iOS_app_ops16DeploymentStatus")
@interface DeploymentStatus : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class EdgeStatus;

/// EdgeAppOpsProtocol protocol for edgeSDK lifecycle change callbacks
/// note:
/// See StateChangingEvent and EdgeState for details.
SWIFT_PROTOCOL("_TtP19edgeSDK_iOS_app_ops18EdgeAppOpsProtocol_")
@protocol EdgeAppOpsProtocol
/// edgeSDK lifecycle change callback to a registered EdgeAppOpsProtocol protocol delegate.
///
/// returns:
/// EdgeStatus object
- (void)edgeStatusChangedWithStatus:(EdgeStatus * _Nonnull)status;
@end

@class EdgeConfig;

SWIFT_CLASS("_TtC19edgeSDK_iOS_app_ops16EdgeConfigResult")
@interface EdgeConfigResult : NSObject
@property (nonatomic, strong) EdgeConfig * _Nullable config;
@property (nonatomic) NSError * _Nullable error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// Provides edgeSDK instance specific EdgeInfo object. Essentially provides a read only EdgeInfo object with edgeSDK instance parameters (nodeId, nodeName, version, accountId) in a completion block.
/// <ul>
///   <li>
///     nodeId: A unique node (device) identifier. It is assigned by the host application during startEdge.
///   </li>
///   <li>
///     nodeName: A node (device) name. It is derived from the device’s system name.
///   </li>
///   <li>
///     _ version: edgeSDK version number.
///   </li>
///   <li>
///     accountId: Currently associated account identifier. It is assigned during account authorization.
///   </li>
///   <li>
///     linkLocalIp: IP address of the interface edgeSDK is currently bound to.
///   </li>
///   <li>
///     supernodeTypeName: A unique supernode type name. It allows nodes to discovered compatible supernodes.
///   </li>
/// </ul>
SWIFT_CLASS("_TtC19edgeSDK_iOS_app_ops8EdgeInfo")
@interface EdgeInfo : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@property (nonatomic, readonly, copy) NSString * _Null_unspecified nodeId;
@property (nonatomic, readonly, copy) NSString * _Null_unspecified nodeName;
@property (nonatomic, readonly, copy) NSString * _Null_unspecified version;
@property (nonatomic, readonly, copy) NSString * _Null_unspecified accountId;
@property (nonatomic, readonly, copy) NSString * _Null_unspecified linkLocalIp;
@property (nonatomic, readonly, copy) NSString * _Null_unspecified supernodeTypeName;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC19edgeSDK_iOS_app_ops14EdgeInfoResult")
@interface EdgeInfoResult : NSObject
@property (nonatomic, strong) EdgeInfo * _Nullable info;
@property (nonatomic) NSError * _Nullable error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

/// enum of potential edgeSDK states.
typedef SWIFT_ENUM(NSInteger, EdgeState, closed) {
  EdgeStateUnknown = 0,
  EdgeStateStarting = 1,
  EdgeStateRunning = 2,
  EdgeStateStopping = 3,
  EdgeStateStopped = 4,
  EdgeStateError = 5,
};


SWIFT_CLASS("_TtC19edgeSDK_iOS_app_ops15EdgeStateResult")
@interface EdgeStateResult : NSObject
@property (nonatomic, strong) EdgeStatus * _Nullable status;
@property (nonatomic) NSError * _Nullable error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

enum StateChangingEvent : NSInteger;

/// edgeSDK status object used for EdgeAppOpsProtocol delegate callbacks. Essentially it provides information about the current edgeSDK lifecycle state and the reason behind the lifecycle state change.
/// <ul>
///   <li>
///     edgeState: Current edgeSDK state.
///   </li>
///   <li>
///     stateChangingEvent: Reason behind the edgeSDK lifecycle change..
///   </li>
/// </ul>
SWIFT_CLASS("_TtC19edgeSDK_iOS_app_ops10EdgeStatus")
@interface EdgeStatus : NSObject
@property (nonatomic) enum EdgeState edgeState;
@property (nonatomic) enum StateChangingEvent stateChangingEvent;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC19edgeSDK_iOS_app_ops20GenericContentResult")
@interface GenericContentResult : NSObject
@property (nonatomic) id _Nullable content;
@property (nonatomic) NSError * _Nullable error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// Micro service configuration object. Used for micro service deployment.
/// <ul>
///   <li>
///     name: Name of your micro service. Used to construct paths.
///   </li>
///   <li>
///     apiRootUrl: A path to deploy your micro service to.
///   </li>
///   <li>
///     imagePath: An file system path to the micro service image tar file. Usually located in the application’s bundle.
///   </li>
///   <li>
///     envVariables: Any extra environment variables for your micro service.
///   </li>
/// </ul>
SWIFT_CLASS("_TtC19edgeSDK_iOS_app_ops28MicroserviceDeploymentConfig")
@interface MicroserviceDeploymentConfig : NSObject
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name apiRootUrl:(NSString * _Nonnull)apiRootUrl imagePath:(NSString * _Nonnull)imagePath envVariables:(NSDictionary<NSString *, NSString *> * _Nonnull)envVariables OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, copy) NSString * _Nonnull name;
@property (nonatomic, copy) NSString * _Nonnull apiRootUrl;
@property (nonatomic, copy) NSString * _Nonnull imagePath;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nonnull envVariables;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

/// enum of potential edgeSDK lifecycle changing events.
typedef SWIFT_ENUM(NSInteger, StateChangingEvent, closed) {
  StateChangingEventUIApplicationDidFinishLaunching = 0,
  StateChangingEventUIApplicationDidBecomeActive = 1,
  StateChangingEventUIApplicationWillEnterForeground = 2,
  StateChangingEventUIApplicationDidEnterBackground = 3,
  StateChangingEventUIApplicationWillTerminate = 4,
  StateChangingEventUIApplicationWillResignActive = 5,
  StateChangingEventStartupRequest = 6,
  StateChangingEventShutdownRequest = 7,
  StateChangingEventUnknown = 8,
};


SWIFT_CLASS("_TtC19edgeSDK_iOS_app_ops19StringContentResult")
@interface StringContentResult : NSObject
@property (nonatomic, copy) NSString * _Nullable content;
@property (nonatomic) NSError * _Nullable error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class CLLocation;

/// edgeSDK_iOS_app_ops wrapper can be used to simplify the following edgeSDK operations:
/// <ul>
///   <li>
///     startEdge and register a protocol delegate. (One call edgeSDK initialization with just one nodeId parameter and a completion block, as well as a protocol delegate registration to receive calls about edgeSDK lifecycle changes)
///   </li>
///   <li>
///     stopEdge (One call edgeSDK shutdown with a completion block)
///   </li>
///   <li>
///     deployMicroservice (One call micro service deployment with a completion block via a simple configuration object; edge access token is required)
///   </li>
///   <li>
///     removeMicroservice (One call deployed micro service removal with a completion block via a simple configuration object; edge access token is required)
///   </li>
///   <li>
///     getDeployedImages (Returns debug information about currently deployed/uploaded images in a completion block)
///   </li>
///   <li>
///     getDeployedContainers (Returns debug information about currently deployed/created containers in a completion block)
///   </li>
///   <li>
///     getInfo (Returns a read only EdgeInfo object with edgeSDK instance parameters (nodeId, nodeName, version, accountId) in a completion block)
///   </li>
///   <li>
///     getConfig (Returns a read only EdgeConfig object with edgeSDK configuration parameters (nodeId, nodeName, edgeServiceLink, workingDir, backend) in a completion block)
///   </li>
/// </ul>
SWIFT_CLASS("_TtC19edgeSDK_iOS_app_ops19edgeSDK_iOS_app_ops")
@interface edgeSDK_iOS_app_ops : NSObject
/// edgeSDK_iOS_app_ops initialization. Keep a strong reference to it.
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Starts edgeSDK and registers an optional EdgeAppOpsProtocol delegate to receive edgeSDK lifecycle change callbacks. Essentially a one call edgeSDK initialization with one parameter (nodeId) and a completion block, as well as a protocol delegate registration to receive callbacks when edgeSDK lifecycle changes.
/// important:
/// Make sure to keep nodeId unique and tied to a specific device. Repeating calls are ignored until stopEdge is called once.
/// warning:
/// It usually takes 3 seconds for the completion block to be called.
/// note:
/// stopEdge does the opposite of this function.
/// \param nodeId Unique node identifier.
///
/// \param delegate An optional EdgeAppOpsProtocol delegate to receive edgeSDK lifecycle change notifications.
///
/// \param optionalLicense For when you have an edgeSDK license for a backend other than the default one.
///
/// \param completion Completion block returning an EdgeStateResult object.
///
- (void)startEdgeWithNodeId:(NSString * _Nonnull)nodeId delegate:(id <EdgeAppOpsProtocol> _Nullable)delegate completion:(void (^ _Nonnull)(EdgeStateResult * _Nonnull))completion;
/// Specifies a custom edgeSDK license to be used for edgeSDK initialization.
/// important:
/// This license needs to be set BEFORE calling the startEdge API (which initalizes edgeSDK with, or without a custom license).
/// \param customLicense Custom license value.
///
- (void)setCustomLicenseWithCustomLicense:(NSString * _Nonnull)customLicense;
/// Stops edgeSDK and removes the EdgeAppOpsProtocol delegate registration. Essentially a one call edgeSDK shutdown with a completion block.
/// important:
/// Repeating calls are ignored until startEdge is called once.
/// warning:
/// It usually takes 3 seconds for the completion block to be called.
/// note:
/// This will stop the edgeSDK lifecycle change notifications.
- (void)stopEdgeWithCompletion:(void (^ _Nonnull)(EdgeStateResult * _Nonnull))completion;
/// Deploys a micro service according to a configuration object. Essentially a one call micro service deployment with a completion block via a simple configuration object; edge access token is required.
/// important:
/// Repeating calls will overwrite already deployed micro services. Connected websockets will be destroyed.
/// note:
/// First the micro service image is uploaded, then the micro service container is created.
/// todo:
/// Comparing deployed micro services using a digest checksum
/// \param edgeAccessToken Token retrieved from a sucessful authorization session.
///
/// \param config Micro service configuration object.
///
/// \param completion Completion block returning a DeploymentStateResult object.
///
- (void)deployMicroserviceWithEdgeAccessToken:(NSString * _Nonnull)edgeAccessToken config:(MicroserviceDeploymentConfig * _Nonnull)config completion:(void (^ _Nonnull)(DeploymentStateResult * _Nonnull))completion;
/// Removes a deployed micro service according to a configuration object. Essentially a one call (previously deployed) micro service removal with a completion block via a simple configuration object; edge access token is required.
/// important:
/// Repeating calls will do nothing.
/// note:
/// First the micro service container is removed, then the micro service image is removed.
/// \param edgeAccessToken Token retrieved from a sucessful authorization session.
///
/// \param config Micro service configuration object.
///
/// \param completion Completion block returning a DeploymentStateResult object.
///
- (void)removeMicroserviceWithEdgeAccessToken:(NSString * _Nonnull)edgeAccessToken config:(MicroserviceDeploymentConfig * _Nonnull)config completion:(void (^ _Nonnull)(DeploymentStateResult * _Nonnull))completion;
/// Provides a list of currently uploaded micro service images. Essentially provides a debug information about currently deployed/uploaded images in a completion block.
/// \param edgeAccessToken Token retrieved from a sucessful authorization session.
///
/// \param completion Completion block returning a GenericContentResult object.
///
- (void)getDeployedImagesWithEdgeAccessToken:(NSString * _Nonnull)edgeAccessToken completion:(void (^ _Nonnull)(GenericContentResult * _Nonnull))completion;
/// Provides a list of created micro service containers. Essentially provides a debug information about currently deployed/created containers in a completion block.
/// \param edgeAccessToken Token retrieved from a sucessful authorization session.
///
/// \param completion Completion block returning a GenericContentResult object.
///
- (void)getDeployedContainersWithEdgeAccessToken:(NSString * _Nonnull)edgeAccessToken completion:(void (^ _Nonnull)(GenericContentResult * _Nonnull))completion;
/// Provides an instance specific edgeSDK parameters EdgeInfo object. Essentially provides a read only EdgeInfo object with edgeSDK instance parameters (nodeId, nodeName, version, accountId) in a completion block.
/// \param completion Completion block returning an EdgeInfoResult object.
///
- (void)getInfo:(void (^ _Nonnull)(EdgeInfoResult * _Nonnull))completion;
/// Provides a generic edgeSDK configuration parameters EdgeConfig object. Essentially provides a read only EdgeConfig object with edgeSDK configuration parameters (nodeId, nodeName, edgeServiceLink, workingDir, backend) in a completion block.
/// \param completion Completion block returning an EdgeConfigResult object.
///
- (void)getConfig:(void (^ _Nonnull)(EdgeConfigResult * _Nonnull))completion;
/// Updates edgeSDK with a CLLocation object containing the geographical location, altitude, speed and bearing of a device.
/// remark:
/// This requires edgeSDK 1.3+
/// \param edgeAccessToken account association token.
///
/// \param location CLLocation object containing the geographical location and altitude of a device
///
/// \param completion Completion block returning a StringContentResult object.
///
- (void)updateGps:(NSString * _Nonnull)edgeAccessToken location:(CLLocation * _Nonnull)location completion:(void (^ _Nonnull)(StringContentResult * _Nonnull))completion;
/// Provides a way to control the amount of logging output. mimik modules are using Apple’s unified logging system and the messages are tagged with [mimik] [module-name] and then the logging level [info] [error] [fault] [debug].
/// note:
/// Default level is info.
/// note:
/// Info level outputs [info] [error] and [fault] messages. It doesn’t output [debug] messages.
/// note:
/// Error level outputs [error] and [fault] messages. It doesn’t output [debug] messages.
/// note:
/// Debug level outputs all messages. [info], [error], [fault] and [debug].
/// note:
/// Off level doesn’t output any messages.
/// \param level Requested logging level.
///
+ (void)changeLoggingLevelToLevel:(enum MMKLogLevel)level;
@end







#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
