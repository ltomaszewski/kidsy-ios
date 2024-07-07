#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedScreenModel, SharedOnboardingModelCompanion, SharedOnboardingModel, SharedDependencyContainer, SharedRealmHelper, SharedSleepTrackerManager, SharedUserSession, SharedCStateFlow<T>, SharedCollectedOptionCompanion, SharedKbsonBsonObjectId, SharedUserSessionOption, SharedOnboardingScreenDataCompanion, SharedPlanDataCompanion, SharedCollectedOption, SharedUserSessionModel, SharedUserSessionModelCompanion, SharedOnboardingScreenData, SharedPlanData, SharedUserSessionOptionCompanion, SharedKotlinEnumCompanion, SharedKotlinEnum<E>, SharedScreenName, SharedKotlinArray<T>, SharedCreateAnAccountScreenStateState, SharedCreateAnAccountScreenState, SharedCreateAnAccountScreenStateActionType, SharedCreateAnAccountScreenStateSocialLoginAction, SharedIntroScreenStateState, SharedIntroScreenState, SharedIntroScreenStateAction, SharedPlanModel, SharedLetsBeginWithPlanScreenStateState, SharedLetsBeginWithPlanScreenState, SharedLetsBeginWithPlanScreenStateAction, SharedOptionCompanion, SharedOption, SharedScreenType, SharedScreenModelCompanion, SharedScreenTypeCompanion, SharedHomeTabBarScreenStateState, SharedHomeTabBarScreenState, SharedHomeTabBarScreenStateTabScreenState, SharedHomeTabBarScreenStateTabBarItem, SharedHomeTabBarScreenStateActionType, SharedAddSleepSessionScreenStateState, SharedAddSleepSessionScreenState, SharedAddSleepSessionScreenStateActionType, SharedSleepSessionType, SharedEditSleepSessionScreenStateState, SharedEditSleepSessionScreenState, SharedEditSleepSessionScreenStateActionType, SharedTodayScreenState, SharedSleepSession, SharedTodayScreenStateActionType, SharedTodayScreenStateState, SharedOnboardingProcessingScreenStateState, SharedOnboardingProcessingScreenState, SharedOnboardingProcessingScreenStateAction, SharedOnboardingScreenStateState, SharedOnboardingScreenState, SharedOnboardingScreenStateActionType, SharedOnboardingSuccessScreenStateState, SharedOnboardingSuccessScreenState, SharedOnboardingSuccessScreenStateAction, SharedPlanModelCompanion, SharedPlanScreenStateState, SharedPlanScreenState, SharedPlaceholderReplacer, SharedPlanScreenStateActionType, SharedPlansCompanion, SharedSleepSessionCompanion, SharedHomeTabBarScreenStateAction, SharedOnboardingScreenStateAction, SharedPlanScreenStateAction, SharedAddSleepSessionScreenStateAction, SharedEditSleepSessionScreenStateAction, SharedTodayScreenStateAction, SharedKbsonBsonValueCompanion, SharedKbsonBsonValue, SharedKbsonBsonBinary, SharedKbsonBsonBoolean, SharedKbsonBsonMaxKey, SharedKbsonBsonMinKey, SharedKbsonBsonNull, SharedKbsonBsonUndefined, SharedKbsonBsonDBPointer, SharedKbsonBsonDateTime, SharedKbsonBsonDecimal128, SharedKbsonBsonDouble, SharedKbsonBsonInt32, SharedKbsonBsonInt64, SharedKbsonBsonJavaScript, SharedKbsonBsonJavaScriptWithScope, SharedKbsonBsonNumber, SharedKbsonBsonRegularExpression, SharedKbsonBsonString, SharedKbsonBsonSymbol, SharedKbsonBsonTimestamp, SharedKbsonBsonType, SharedKbsonBsonObjectIdCompanion, SharedKotlinByteArray, SharedKotlinThrowable, SharedKotlinException, SharedKotlinRuntimeException, SharedKotlinIllegalStateException, SharedLibrary_baseVersionId, SharedKotlinx_serialization_coreSerializersModule, SharedKotlinx_serialization_coreSerialKind, SharedKotlinNothing, SharedKbsonBsonBinarySubType, SharedKbsonBsonBinaryCompanion, SharedKbsonBsonBooleanCompanion, SharedKbsonBsonDBPointerCompanion, SharedKbsonBsonDateTimeCompanion, SharedKbsonBsonDecimal128Companion, SharedKbsonBsonDoubleCompanion, SharedKbsonBsonInt32Companion, SharedKbsonBsonInt64Companion, SharedKbsonBsonJavaScriptCompanion, SharedKbsonBsonJavaScriptWithScopeCompanion, SharedKbsonBsonRegularExpressionCompanion, SharedKbsonBsonStringCompanion, SharedKbsonBsonSymbolCompanion, SharedKbsonBsonTimestampCompanion, SharedKotlinByteIterator, SharedLibrary_baseUpdatePolicy, SharedLibrary_baseInitialRealmFileConfiguration, SharedLibrary_baseLogConfiguration, SharedLibrary_baseSort, SharedKotlinPair<__covariant A, __covariant B>, SharedLibrary_baseLogLevel, SharedLibrary_baseRealmClassKind, SharedLibrary_baseRealmStorageType;

@protocol SharedKotlinx_serialization_coreKSerializer, SharedPlatform, SharedUserAction, SharedScreenState, SharedLibrary_baseDeleteable, SharedLibrary_baseBaseRealmObject, SharedLibrary_baseTypedRealmObject, SharedLibrary_baseRealmObject, SharedKotlinComparable, SharedStateHandler, SharedKotlinx_coroutines_coreFlowCollector, SharedKotlinx_coroutines_coreFlow, SharedKotlinx_coroutines_coreSharedFlow, SharedKotlinx_coroutines_coreStateFlow, SharedCloseable, SharedLibrary_baseRealm, SharedKotlinx_serialization_coreEncoder, SharedKotlinx_serialization_coreSerialDescriptor, SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDecoder, SharedKotlinx_serialization_coreDeserializationStrategy, SharedKotlinIterator, SharedLibrary_baseMutableRealm, SharedLibrary_baseConfiguration, SharedLibrary_baseRealmQuery, SharedKotlinKClass, SharedLibrary_baseRealmSchema, SharedLibrary_baseVersioned, SharedLibrary_baseBaseRealm, SharedLibrary_baseTypedRealm, SharedKotlinx_serialization_coreCompositeEncoder, SharedKotlinAnnotation, SharedKotlinx_serialization_coreCompositeDecoder, SharedLibrary_baseCompactOnLaunchCallback, SharedLibrary_baseInitialDataCallback, SharedLibrary_baseRealmScalarQuery, SharedLibrary_baseRealmSingleQuery, SharedLibrary_baseRealmScalarNullableQuery, SharedLibrary_baseRealmElementQuery, SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier, SharedLibrary_baseRealmClass, SharedKotlinx_serialization_coreSerializersModuleCollector, SharedLibrary_baseRealmLogger, SharedLibrary_baseRealmProperty, SharedLibrary_baseRealmPropertyType;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingModel")))
@interface SharedOnboardingModel : SharedBase
- (instancetype)initWithScreens:(NSArray<SharedScreenModel *> *)screens __attribute__((swift_name("init(screens:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedOnboardingModelCompanion *companion __attribute__((swift_name("companion")));
- (SharedOnboardingModel *)doCopyScreens:(NSArray<SharedScreenModel *> *)screens __attribute__((swift_name("doCopy(screens:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedScreenModel *> *screens __attribute__((swift_name("screens")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingModel.Companion")))
@interface SharedOnboardingModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedOnboardingModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DependencyContainer")))
@interface SharedDependencyContainer : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dependencyContainer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDependencyContainer *shared __attribute__((swift_name("shared")));
@property (readonly) SharedRealmHelper *realmHelper __attribute__((swift_name("realmHelper")));
@property (readonly) SharedSleepTrackerManager *sleepTrackerManager __attribute__((swift_name("sleepTrackerManager")));
@property (readonly) SharedUserSession *userSession __attribute__((swift_name("userSession")));
@end

__attribute__((swift_name("Platform")))
@protocol SharedPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface SharedIOSPlatform : SharedBase <SharedPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KidsyStateManager")))
@interface SharedKidsyStateManager : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)executeActionAction:(id<SharedUserAction>)action __attribute__((swift_name("executeAction(action:)")));
@property (readonly) SharedCStateFlow<id<SharedScreenState>> *screenState __attribute__((swift_name("screenState")));
@end

__attribute__((swift_name("Library_baseDeleteable")))
@protocol SharedLibrary_baseDeleteable
@required
@end

__attribute__((swift_name("Library_baseBaseRealmObject")))
@protocol SharedLibrary_baseBaseRealmObject <SharedLibrary_baseDeleteable>
@required
@end

__attribute__((swift_name("Library_baseTypedRealmObject")))
@protocol SharedLibrary_baseTypedRealmObject <SharedLibrary_baseBaseRealmObject>
@required
@end

__attribute__((swift_name("Library_baseRealmObject")))
@protocol SharedLibrary_baseRealmObject <SharedLibrary_baseTypedRealmObject>
@required
@end

__attribute__((swift_name("CollectedOption")))
@interface SharedCollectedOption : SharedBase <SharedLibrary_baseRealmObject>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedCollectedOptionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedKbsonBsonObjectId *_id __attribute__((swift_name("_id")));
@property SharedUserSessionOption * _Nullable option __attribute__((swift_name("option")));
@property NSString *screenId __attribute__((swift_name("screenId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CollectedOption.Companion")))
@interface SharedCollectedOptionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCollectedOptionCompanion *shared __attribute__((swift_name("shared")));
- (id)io_realm_kotlin_newInstance __attribute__((swift_name("io_realm_kotlin_newInstance()")));
- (id)io_realm_kotlin_schema __attribute__((swift_name("io_realm_kotlin_schema()")));
@end

__attribute__((swift_name("OnboardingScreenData")))
@interface SharedOnboardingScreenData : SharedBase <SharedLibrary_baseRealmObject>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedOnboardingScreenDataCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedKbsonBsonObjectId *_id __attribute__((swift_name("_id")));
@property NSMutableArray<SharedUserSessionOption *> *options __attribute__((swift_name("options")));
@property NSString *screenId __attribute__((swift_name("screenId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingScreenData.Companion")))
@interface SharedOnboardingScreenDataCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedOnboardingScreenDataCompanion *shared __attribute__((swift_name("shared")));
- (id)io_realm_kotlin_newInstance __attribute__((swift_name("io_realm_kotlin_newInstance()")));
- (id)io_realm_kotlin_schema __attribute__((swift_name("io_realm_kotlin_schema()")));
@end

__attribute__((swift_name("PlanData")))
@interface SharedPlanData : SharedBase <SharedLibrary_baseRealmObject>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedPlanDataCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedKbsonBsonObjectId *_id __attribute__((swift_name("_id")));
@property NSMutableArray<SharedCollectedOption *> *collectedData __attribute__((swift_name("collectedData")));
@property NSString * _Nullable planId __attribute__((swift_name("planId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlanData.Companion")))
@interface SharedPlanDataCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedPlanDataCompanion *shared __attribute__((swift_name("shared")));
- (id)io_realm_kotlin_newInstance __attribute__((swift_name("io_realm_kotlin_newInstance()")));
- (id)io_realm_kotlin_schema __attribute__((swift_name("io_realm_kotlin_schema()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserSession")))
@interface SharedUserSession : SharedBase
- (instancetype)initWithRealmHelper:(SharedRealmHelper *)realmHelper __attribute__((swift_name("init(realmHelper:)"))) __attribute__((objc_designated_initializer));
- (void)addOrUpdateOnboardingDataScreenId:(NSString *)screenId option:(SharedUserSessionOption *)option __attribute__((swift_name("addOrUpdateOnboardingData(screenId:option:)")));
- (void)addOrUpdatePlanPlanId:(NSString *)planId __attribute__((swift_name("addOrUpdatePlan(planId:)")));
- (void)setUserInfoUserIdentifier:(NSString *)userIdentifier fullName:(NSString *)fullName email:(NSString *)email __attribute__((swift_name("setUserInfo(userIdentifier:fullName:email:)")));
- (void)updateCollectedDataPlanId:(NSString *)planId screenId:(NSString *)screenId option:(SharedUserSessionOption *)option __attribute__((swift_name("updateCollectedData(planId:screenId:option:)")));
@property (readonly) BOOL hasFinishedOnboarding __attribute__((swift_name("hasFinishedOnboarding")));
@property (readonly) SharedUserSessionModel *userSessionModel __attribute__((swift_name("userSessionModel")));
@end

__attribute__((swift_name("UserSessionModel")))
@interface SharedUserSessionModel : SharedBase <SharedLibrary_baseRealmObject>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedUserSessionModelCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *email __attribute__((swift_name("email")));
@property NSString *fullName __attribute__((swift_name("fullName")));
@property NSString *id __attribute__((swift_name("id")));
@property NSMutableArray<SharedOnboardingScreenData *> *onboardingData __attribute__((swift_name("onboardingData")));
@property NSMutableArray<SharedPlanData *> *plans __attribute__((swift_name("plans")));
@property NSString *userIdentifier __attribute__((swift_name("userIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserSessionModel.Companion")))
@interface SharedUserSessionModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserSessionModelCompanion *shared __attribute__((swift_name("shared")));
- (id)io_realm_kotlin_newInstance __attribute__((swift_name("io_realm_kotlin_newInstance()")));
- (id)io_realm_kotlin_schema __attribute__((swift_name("io_realm_kotlin_schema()")));
@end

__attribute__((swift_name("UserSessionOption")))
@interface SharedUserSessionOption : SharedBase <SharedLibrary_baseRealmObject>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedUserSessionOptionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedKbsonBsonObjectId *_id __attribute__((swift_name("_id")));
@property NSString *jsonId __attribute__((swift_name("jsonId")));
@property NSString *text __attribute__((swift_name("text")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserSessionOption.Companion")))
@interface SharedUserSessionOptionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserSessionOptionCompanion *shared __attribute__((swift_name("shared")));
- (id)io_realm_kotlin_newInstance __attribute__((swift_name("io_realm_kotlin_newInstance()")));
- (id)io_realm_kotlin_schema __attribute__((swift_name("io_realm_kotlin_schema()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenName")))
@interface SharedScreenName : SharedKotlinEnum<SharedScreenName *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedScreenName *intro __attribute__((swift_name("intro")));
@property (class, readonly) SharedScreenName *onboarding __attribute__((swift_name("onboarding")));
@property (class, readonly) SharedScreenName *onboardingProcessing __attribute__((swift_name("onboardingProcessing")));
@property (class, readonly) SharedScreenName *onboardingSuccess __attribute__((swift_name("onboardingSuccess")));
@property (class, readonly) SharedScreenName *createAnAccount __attribute__((swift_name("createAnAccount")));
@property (class, readonly) SharedScreenName *letsBeginWithPlan __attribute__((swift_name("letsBeginWithPlan")));
@property (class, readonly) SharedScreenName *plan __attribute__((swift_name("plan")));
@property (class, readonly) SharedScreenName *home __attribute__((swift_name("home")));
@property (class, readonly) SharedScreenName *today __attribute__((swift_name("today")));
@property (class, readonly) SharedScreenName *plans __attribute__((swift_name("plans")));
@property (class, readonly) SharedScreenName *singles __attribute__((swift_name("singles")));
@property (class, readonly) SharedScreenName *schedule __attribute__((swift_name("schedule")));
@property (class, readonly) SharedScreenName *profile __attribute__((swift_name("profile")));
@property (class, readonly) SharedScreenName *sleepSessionAdd __attribute__((swift_name("sleepSessionAdd")));
@property (class, readonly) SharedScreenName *sleepSessionEdit __attribute__((swift_name("sleepSessionEdit")));
+ (SharedKotlinArray<SharedScreenName *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedScreenName *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("ScreenState")))
@protocol SharedScreenState
@required
@property (readonly) SharedScreenName *screenName __attribute__((swift_name("screenName")));
@end

__attribute__((swift_name("UserAction")))
@protocol SharedUserAction
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateAnAccountScreenState")))
@interface SharedCreateAnAccountScreenState : SharedBase <SharedScreenState>
- (instancetype)initWithState:(SharedCreateAnAccountScreenStateState *)state __attribute__((swift_name("init(state:)"))) __attribute__((objc_designated_initializer));
- (SharedCreateAnAccountScreenState *)doCopyState:(SharedCreateAnAccountScreenStateState *)state __attribute__((swift_name("doCopy(state:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *appleLogin __attribute__((swift_name("appleLogin")));
@property (readonly) NSString *bottomDescription __attribute__((swift_name("bottomDescription")));
@property (readonly) NSString *emailLogin __attribute__((swift_name("emailLogin")));
@property (readonly) NSString *facebookLogin __attribute__((swift_name("facebookLogin")));
@property (readonly) NSString *googleLogin __attribute__((swift_name("googleLogin")));
@property (readonly) SharedScreenName *screenName __attribute__((swift_name("screenName")));
@property (readonly) SharedCreateAnAccountScreenStateState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateAnAccountScreenState.Action")))
@interface SharedCreateAnAccountScreenStateAction : SharedBase <SharedUserAction>
- (instancetype)initWithType:(SharedCreateAnAccountScreenStateActionType *)type socialMedia:(SharedCreateAnAccountScreenStateSocialLoginAction *)socialMedia userIdentifier:(NSString * _Nullable)userIdentifier fullName:(NSString * _Nullable)fullName email:(NSString * _Nullable)email __attribute__((swift_name("init(type:socialMedia:userIdentifier:fullName:email:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) NSString * _Nullable fullName __attribute__((swift_name("fullName")));
@property (readonly) SharedCreateAnAccountScreenStateSocialLoginAction *socialMedia __attribute__((swift_name("socialMedia")));
@property (readonly) SharedCreateAnAccountScreenStateActionType *type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable userIdentifier __attribute__((swift_name("userIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateAnAccountScreenState.ActionType")))
@interface SharedCreateAnAccountScreenStateActionType : SharedKotlinEnum<SharedCreateAnAccountScreenStateActionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedCreateAnAccountScreenStateActionType *loggedin __attribute__((swift_name("loggedin")));
+ (SharedKotlinArray<SharedCreateAnAccountScreenStateActionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedCreateAnAccountScreenStateActionType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateAnAccountScreenState.SocialLoginAction")))
@interface SharedCreateAnAccountScreenStateSocialLoginAction : SharedKotlinEnum<SharedCreateAnAccountScreenStateSocialLoginAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedCreateAnAccountScreenStateSocialLoginAction *apple __attribute__((swift_name("apple")));
@property (class, readonly) SharedCreateAnAccountScreenStateSocialLoginAction *google __attribute__((swift_name("google")));
@property (class, readonly) SharedCreateAnAccountScreenStateSocialLoginAction *facebook __attribute__((swift_name("facebook")));
@property (class, readonly) SharedCreateAnAccountScreenStateSocialLoginAction *email __attribute__((swift_name("email")));
+ (SharedKotlinArray<SharedCreateAnAccountScreenStateSocialLoginAction *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedCreateAnAccountScreenStateSocialLoginAction *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateAnAccountScreenState.State")))
@interface SharedCreateAnAccountScreenStateState : SharedKotlinEnum<SharedCreateAnAccountScreenStateState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedCreateAnAccountScreenStateState *start __attribute__((swift_name("start")));
@property (class, readonly) SharedCreateAnAccountScreenStateState *creatingViaSocial __attribute__((swift_name("creatingViaSocial")));
@property (class, readonly) SharedCreateAnAccountScreenStateState *done __attribute__((swift_name("done")));
+ (SharedKotlinArray<SharedCreateAnAccountScreenStateState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedCreateAnAccountScreenStateState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IntroScreenState")))
@interface SharedIntroScreenState : SharedBase <SharedScreenState>
- (instancetype)initWithState:(SharedIntroScreenStateState *)state __attribute__((swift_name("init(state:)"))) __attribute__((objc_designated_initializer));
- (SharedIntroScreenState *)doCopyState:(SharedIntroScreenStateState *)state __attribute__((swift_name("doCopy(state:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *alreadyHaveAnAccount __attribute__((swift_name("alreadyHaveAnAccount")));
@property (readonly) NSString *alreadyHaveAnAccountBolt __attribute__((swift_name("alreadyHaveAnAccountBolt")));
@property (readonly) NSString *backgroundColor __attribute__((swift_name("backgroundColor")));
@property (readonly) NSString *headline __attribute__((swift_name("headline")));
@property (readonly) NSString *headlineBolt __attribute__((swift_name("headlineBolt")));
@property (readonly) NSString *imageName __attribute__((swift_name("imageName")));
@property (readonly) SharedScreenName *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *startForFree __attribute__((swift_name("startForFree")));
@property (readonly) SharedIntroScreenStateState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IntroScreenState.Action")))
@interface SharedIntroScreenStateAction : SharedKotlinEnum<SharedIntroScreenStateAction *> <SharedUserAction>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedIntroScreenStateAction *startForFree __attribute__((swift_name("startForFree")));
@property (class, readonly) SharedIntroScreenStateAction *logIn __attribute__((swift_name("logIn")));
+ (SharedKotlinArray<SharedIntroScreenStateAction *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedIntroScreenStateAction *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IntroScreenState.State")))
@interface SharedIntroScreenStateState : SharedKotlinEnum<SharedIntroScreenStateState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedIntroScreenStateState *start __attribute__((swift_name("start")));
@property (class, readonly) SharedIntroScreenStateState *loading __attribute__((swift_name("loading")));
+ (SharedKotlinArray<SharedIntroScreenStateState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedIntroScreenStateState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LetsBeginWithPlanScreenState")))
@interface SharedLetsBeginWithPlanScreenState : SharedBase <SharedScreenState>
- (instancetype)initWithPlan:(SharedPlanModel *)plan state:(SharedLetsBeginWithPlanScreenStateState *)state __attribute__((swift_name("init(plan:state:)"))) __attribute__((objc_designated_initializer));
- (SharedLetsBeginWithPlanScreenState *)doCopyPlan:(SharedPlanModel *)plan state:(SharedLetsBeginWithPlanScreenStateState *)state __attribute__((swift_name("doCopy(plan:state:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *header __attribute__((swift_name("header")));
@property (readonly) SharedPlanModel *plan __attribute__((swift_name("plan")));
@property (readonly) NSString *program_card_decorative_graphic __attribute__((swift_name("program_card_decorative_graphic")));
@property (readonly) NSString *program_card_subTitle __attribute__((swift_name("program_card_subTitle")));
@property (readonly) NSString *program_card_submit __attribute__((swift_name("program_card_submit")));
@property (readonly) NSString *program_card_title __attribute__((swift_name("program_card_title")));
@property (readonly) SharedScreenName *screenName __attribute__((swift_name("screenName")));
@property (readonly) SharedLetsBeginWithPlanScreenStateState *state __attribute__((swift_name("state")));
@property (readonly) NSString *subtitle __attribute__((swift_name("subtitle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LetsBeginWithPlanScreenState.Action")))
@interface SharedLetsBeginWithPlanScreenStateAction : SharedKotlinEnum<SharedLetsBeginWithPlanScreenStateAction *> <SharedUserAction>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedLetsBeginWithPlanScreenStateAction *begin __attribute__((swift_name("begin")));
@property (class, readonly) SharedLetsBeginWithPlanScreenStateAction *close __attribute__((swift_name("close")));
+ (SharedKotlinArray<SharedLetsBeginWithPlanScreenStateAction *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedLetsBeginWithPlanScreenStateAction *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LetsBeginWithPlanScreenState.State")))
@interface SharedLetsBeginWithPlanScreenStateState : SharedKotlinEnum<SharedLetsBeginWithPlanScreenStateState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedLetsBeginWithPlanScreenStateState *start __attribute__((swift_name("start")));
+ (SharedKotlinArray<SharedLetsBeginWithPlanScreenStateState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedLetsBeginWithPlanScreenStateState *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Option")))
@interface SharedOption : SharedBase
- (instancetype)initWithId:(int32_t)id text:(NSString *)text imageName:(NSString * _Nullable)imageName __attribute__((swift_name("init(id:text:imageName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedOptionCompanion *companion __attribute__((swift_name("companion")));
- (SharedOption *)doCopyId:(int32_t)id text:(NSString *)text imageName:(NSString * _Nullable)imageName __attribute__((swift_name("doCopy(id:text:imageName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable imageName __attribute__((swift_name("imageName")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Option.Companion")))
@interface SharedOptionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedOptionCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenModel")))
@interface SharedScreenModel : SharedBase
- (instancetype)initWithType:(SharedScreenType *)type id:(NSString *)id navigationBarTitle:(NSString * _Nullable)navigationBarTitle headline:(NSString *)headline headlineImageName:(NSString * _Nullable)headlineImageName headlineTop:(NSString * _Nullable)headlineTop headlineBottom:(NSString * _Nullable)headlineBottom headlineBottomImageName:(NSString * _Nullable)headlineBottomImageName options:(NSArray<SharedOption *> *)options submitTop:(NSString * _Nullable)submitTop submit:(NSString * _Nullable)submit textInputPlaceholder:(NSString * _Nullable)textInputPlaceholder __attribute__((swift_name("init(type:id:navigationBarTitle:headline:headlineImageName:headlineTop:headlineBottom:headlineBottomImageName:options:submitTop:submit:textInputPlaceholder:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedScreenModelCompanion *companion __attribute__((swift_name("companion")));
- (SharedScreenModel *)doCopyType:(SharedScreenType *)type id:(NSString *)id navigationBarTitle:(NSString * _Nullable)navigationBarTitle headline:(NSString *)headline headlineImageName:(NSString * _Nullable)headlineImageName headlineTop:(NSString * _Nullable)headlineTop headlineBottom:(NSString * _Nullable)headlineBottom headlineBottomImageName:(NSString * _Nullable)headlineBottomImageName options:(NSArray<SharedOption *> *)options submitTop:(NSString * _Nullable)submitTop submit:(NSString * _Nullable)submit textInputPlaceholder:(NSString * _Nullable)textInputPlaceholder __attribute__((swift_name("doCopy(type:id:navigationBarTitle:headline:headlineImageName:headlineTop:headlineBottom:headlineBottomImageName:options:submitTop:submit:textInputPlaceholder:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *headline __attribute__((swift_name("headline")));
@property (readonly) NSString * _Nullable headlineBottom __attribute__((swift_name("headlineBottom")));
@property (readonly) NSString * _Nullable headlineBottomImageName __attribute__((swift_name("headlineBottomImageName")));
@property (readonly) NSString * _Nullable headlineImageName __attribute__((swift_name("headlineImageName")));
@property (readonly) NSString * _Nullable headlineTop __attribute__((swift_name("headlineTop")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable navigationBarTitle __attribute__((swift_name("navigationBarTitle")));
@property (readonly) NSArray<SharedOption *> *options __attribute__((swift_name("options")));
@property (readonly) NSString * _Nullable submit __attribute__((swift_name("submit")));
@property (readonly) NSString * _Nullable submitTop __attribute__((swift_name("submitTop")));
@property (readonly) NSString * _Nullable textInputPlaceholder __attribute__((swift_name("textInputPlaceholder")));
@property (readonly) SharedScreenType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenModel.Companion")))
@interface SharedScreenModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedScreenModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenType")))
@interface SharedScreenType : SharedKotlinEnum<SharedScreenType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedScreenTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedScreenType *question __attribute__((swift_name("question")));
@property (class, readonly) SharedScreenType *questionmultiselect __attribute__((swift_name("questionmultiselect")));
@property (class, readonly) SharedScreenType *textinput __attribute__((swift_name("textinput")));
@property (class, readonly) SharedScreenType *timeinput __attribute__((swift_name("timeinput")));
@property (class, readonly) SharedScreenType *prompt __attribute__((swift_name("prompt")));
@property (class, readonly) SharedScreenType *promptwithdescriptionpoints __attribute__((swift_name("promptwithdescriptionpoints")));
@property (class, readonly) SharedScreenType *askfornotification __attribute__((swift_name("askfornotification")));
+ (SharedKotlinArray<SharedScreenType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedScreenType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenType.Companion")))
@interface SharedScreenTypeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedScreenTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeTabBarScreenState")))
@interface SharedHomeTabBarScreenState : SharedBase <SharedScreenState>
- (instancetype)initWithState:(SharedHomeTabBarScreenStateState *)state __attribute__((swift_name("init(state:)"))) __attribute__((objc_designated_initializer));
- (SharedHomeTabBarScreenState *)doCopyState:(SharedHomeTabBarScreenStateState *)state __attribute__((swift_name("doCopy(state:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedHomeTabBarScreenStateTabScreenState *currentTabScreenState __attribute__((swift_name("currentTabScreenState")));
@property (readonly) SharedScreenName *screenName __attribute__((swift_name("screenName")));
@property (readonly) SharedHomeTabBarScreenStateState *state __attribute__((swift_name("state")));
@property (readonly) NSArray<SharedHomeTabBarScreenStateTabBarItem *> *tabBarItems __attribute__((swift_name("tabBarItems")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeTabBarScreenState.Action")))
@interface SharedHomeTabBarScreenStateAction : SharedBase <SharedUserAction>
- (instancetype)initWithType:(SharedHomeTabBarScreenStateActionType *)type newTabBarIndex:(int32_t)newTabBarIndex __attribute__((swift_name("init(type:newTabBarIndex:)"))) __attribute__((objc_designated_initializer));
@property (readonly, getter=doNewTabBarIndex) int32_t newTabBarIndex __attribute__((swift_name("newTabBarIndex")));
@property (readonly) SharedHomeTabBarScreenStateActionType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeTabBarScreenState.ActionType")))
@interface SharedHomeTabBarScreenStateActionType : SharedKotlinEnum<SharedHomeTabBarScreenStateActionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedHomeTabBarScreenStateActionType *openTab __attribute__((swift_name("openTab")));
+ (SharedKotlinArray<SharedHomeTabBarScreenStateActionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedHomeTabBarScreenStateActionType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeTabBarScreenState.State")))
@interface SharedHomeTabBarScreenStateState : SharedKotlinEnum<SharedHomeTabBarScreenStateState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedHomeTabBarScreenStateState *today __attribute__((swift_name("today")));
@property (class, readonly) SharedHomeTabBarScreenStateState *plans __attribute__((swift_name("plans")));
@property (class, readonly) SharedHomeTabBarScreenStateState *single __attribute__((swift_name("single")));
@property (class, readonly) SharedHomeTabBarScreenStateState *schedule __attribute__((swift_name("schedule")));
@property (class, readonly) SharedHomeTabBarScreenStateState *profile __attribute__((swift_name("profile")));
+ (SharedKotlinArray<SharedHomeTabBarScreenStateState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedHomeTabBarScreenStateState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeTabBarScreenState.TabBarItem")))
@interface SharedHomeTabBarScreenStateTabBarItem : SharedBase
- (instancetype)initWithTabState:(SharedHomeTabBarScreenStateState *)tabState name:(NSString *)name imageName:(NSString *)imageName __attribute__((swift_name("init(tabState:name:imageName:)"))) __attribute__((objc_designated_initializer));
- (SharedHomeTabBarScreenStateTabBarItem *)doCopyTabState:(SharedHomeTabBarScreenStateState *)tabState name:(NSString *)name imageName:(NSString *)imageName __attribute__((swift_name("doCopy(tabState:name:imageName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *imageName __attribute__((swift_name("imageName")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) SharedHomeTabBarScreenStateState *tabState __attribute__((swift_name("tabState")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeTabBarScreenState.TabScreenState")))
@interface SharedHomeTabBarScreenStateTabScreenState : SharedBase
- (instancetype)initWithScreenState:(id<SharedScreenState>)screenState tabBarItem:(SharedHomeTabBarScreenStateTabBarItem *)tabBarItem __attribute__((swift_name("init(screenState:tabBarItem:)"))) __attribute__((objc_designated_initializer));
- (SharedHomeTabBarScreenStateTabScreenState *)doCopyScreenState:(id<SharedScreenState>)screenState tabBarItem:(SharedHomeTabBarScreenStateTabBarItem *)tabBarItem __attribute__((swift_name("doCopy(screenState:tabBarItem:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedScreenState> screenState __attribute__((swift_name("screenState")));
@property (readonly) SharedHomeTabBarScreenStateTabBarItem *tabBarItem __attribute__((swift_name("tabBarItem")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlansTabScreenState")))
@interface SharedPlansTabScreenState : SharedBase <SharedScreenState>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *headlineText __attribute__((swift_name("headlineText")));
@property (readonly) SharedScreenName *screenName __attribute__((swift_name("screenName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProfileTabScreenState")))
@interface SharedProfileTabScreenState : SharedBase <SharedScreenState>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *headlineText __attribute__((swift_name("headlineText")));
@property (readonly) SharedScreenName *screenName __attribute__((swift_name("screenName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleTabScreenState")))
@interface SharedScheduleTabScreenState : SharedBase <SharedScreenState>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *headlineText __attribute__((swift_name("headlineText")));
@property (readonly) SharedScreenName *screenName __attribute__((swift_name("screenName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SinglesTabScreenState")))
@interface SharedSinglesTabScreenState : SharedBase <SharedScreenState>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *headlineText __attribute__((swift_name("headlineText")));
@property (readonly) SharedScreenName *screenName __attribute__((swift_name("screenName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddSleepSessionScreenState")))
@interface SharedAddSleepSessionScreenState : SharedBase <SharedScreenState>
- (instancetype)initWithState:(SharedAddSleepSessionScreenStateState *)state __attribute__((swift_name("init(state:)"))) __attribute__((objc_designated_initializer));
- (SharedAddSleepSessionScreenState *)doCopyState:(SharedAddSleepSessionScreenStateState *)state __attribute__((swift_name("doCopy(state:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cancel __attribute__((swift_name("cancel")));
@property (readonly) NSString *endTime __attribute__((swift_name("endTime")));
@property (readonly) NSString *headline __attribute__((swift_name("headline")));
@property (readonly) NSString *save __attribute__((swift_name("save")));
@property (readonly) SharedScreenName *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *startTime __attribute__((swift_name("startTime")));
@property (readonly) SharedAddSleepSessionScreenStateState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddSleepSessionScreenState.Action")))
@interface SharedAddSleepSessionScreenStateAction : SharedBase <SharedUserAction>
- (instancetype)initWithType:(SharedAddSleepSessionScreenStateActionType *)type startTime:(int64_t)startTime endTime:(int64_t)endTime sleepSessionType:(SharedSleepSessionType *)sleepSessionType __attribute__((swift_name("init(type:startTime:endTime:sleepSessionType:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int64_t endTime __attribute__((swift_name("endTime")));
@property (readonly) SharedSleepSessionType *sleepSessionType __attribute__((swift_name("sleepSessionType")));
@property (readonly) int64_t startTime __attribute__((swift_name("startTime")));
@property (readonly) SharedAddSleepSessionScreenStateActionType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddSleepSessionScreenState.ActionType")))
@interface SharedAddSleepSessionScreenStateActionType : SharedKotlinEnum<SharedAddSleepSessionScreenStateActionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedAddSleepSessionScreenStateActionType *save __attribute__((swift_name("save")));
+ (SharedKotlinArray<SharedAddSleepSessionScreenStateActionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedAddSleepSessionScreenStateActionType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddSleepSessionScreenState.State")))
@interface SharedAddSleepSessionScreenStateState : SharedKotlinEnum<SharedAddSleepSessionScreenStateState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedAddSleepSessionScreenStateState *start __attribute__((swift_name("start")));
@property (class, readonly) SharedAddSleepSessionScreenStateState *saved __attribute__((swift_name("saved")));
+ (SharedKotlinArray<SharedAddSleepSessionScreenStateState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedAddSleepSessionScreenStateState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EditSleepSessionScreenState")))
@interface SharedEditSleepSessionScreenState : SharedBase <SharedScreenState>
- (instancetype)initWithSessionId:(NSString *)sessionId state:(SharedEditSleepSessionScreenStateState *)state __attribute__((swift_name("init(sessionId:state:)"))) __attribute__((objc_designated_initializer));
- (SharedEditSleepSessionScreenState *)doCopySessionId:(NSString *)sessionId state:(SharedEditSleepSessionScreenStateState *)state __attribute__((swift_name("doCopy(sessionId:state:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cancel __attribute__((swift_name("cancel")));
@property (readonly) NSString *endTime __attribute__((swift_name("endTime")));
@property (readonly) NSString *headline __attribute__((swift_name("headline")));
@property (readonly) NSString *save __attribute__((swift_name("save")));
@property (readonly) SharedScreenName *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) NSString *startTime __attribute__((swift_name("startTime")));
@property (readonly) SharedEditSleepSessionScreenStateState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EditSleepSessionScreenState.Action")))
@interface SharedEditSleepSessionScreenStateAction : SharedBase <SharedUserAction>
- (instancetype)initWithType:(SharedEditSleepSessionScreenStateActionType *)type startTime:(int64_t)startTime endTime:(int64_t)endTime sleepSessionType:(SharedSleepSessionType *)sleepSessionType __attribute__((swift_name("init(type:startTime:endTime:sleepSessionType:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int64_t endTime __attribute__((swift_name("endTime")));
@property (readonly) SharedSleepSessionType *sleepSessionType __attribute__((swift_name("sleepSessionType")));
@property (readonly) int64_t startTime __attribute__((swift_name("startTime")));
@property (readonly) SharedEditSleepSessionScreenStateActionType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EditSleepSessionScreenState.ActionType")))
@interface SharedEditSleepSessionScreenStateActionType : SharedKotlinEnum<SharedEditSleepSessionScreenStateActionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedEditSleepSessionScreenStateActionType *edit __attribute__((swift_name("edit")));
+ (SharedKotlinArray<SharedEditSleepSessionScreenStateActionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedEditSleepSessionScreenStateActionType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EditSleepSessionScreenState.State")))
@interface SharedEditSleepSessionScreenStateState : SharedKotlinEnum<SharedEditSleepSessionScreenStateState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedEditSleepSessionScreenStateState *start __attribute__((swift_name("start")));
@property (class, readonly) SharedEditSleepSessionScreenStateState *saved __attribute__((swift_name("saved")));
+ (SharedKotlinArray<SharedEditSleepSessionScreenStateState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedEditSleepSessionScreenStateState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TodayScreenState")))
@interface SharedTodayScreenState : SharedBase <SharedScreenState>
- (instancetype)initWithSelectedDate:(int64_t)selectedDate __attribute__((swift_name("init(selectedDate:)"))) __attribute__((objc_designated_initializer));
- (SharedTodayScreenState *)doCopySelectedDate:(int64_t)selectedDate __attribute__((swift_name("doCopy(selectedDate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (SharedTodayScreenState *)updateWithSelectedDateDate:(int64_t)date __attribute__((swift_name("updateWithSelectedDate(date:)")));
@property (readonly) SharedScreenName *screenName __attribute__((swift_name("screenName")));
@property (readonly) int64_t selectedDate __attribute__((swift_name("selectedDate")));
@property (readonly) NSArray<SharedSleepSession *> *sessions __attribute__((swift_name("sessions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TodayScreenState.Action")))
@interface SharedTodayScreenStateAction : SharedBase <SharedUserAction>
- (instancetype)initWithType:(SharedTodayScreenStateActionType *)type date:(SharedLong * _Nullable)date sessionId:(NSString * _Nullable)sessionId __attribute__((swift_name("init(type:date:sessionId:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedLong * _Nullable date __attribute__((swift_name("date")));
@property (readonly) NSString * _Nullable sessionId __attribute__((swift_name("sessionId")));
@property (readonly) SharedTodayScreenStateActionType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TodayScreenState.ActionType")))
@interface SharedTodayScreenStateActionType : SharedKotlinEnum<SharedTodayScreenStateActionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedTodayScreenStateActionType *add __attribute__((swift_name("add")));
@property (class, readonly) SharedTodayScreenStateActionType *edit __attribute__((swift_name("edit")));
@property (class, readonly) SharedTodayScreenStateActionType *selectDate __attribute__((swift_name("selectDate")));
+ (SharedKotlinArray<SharedTodayScreenStateActionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedTodayScreenStateActionType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TodayScreenState.State")))
@interface SharedTodayScreenStateState : SharedKotlinEnum<SharedTodayScreenStateState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedTodayScreenStateState *start __attribute__((swift_name("start")));
+ (SharedKotlinArray<SharedTodayScreenStateState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedTodayScreenStateState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingProcessingScreenState")))
@interface SharedOnboardingProcessingScreenState : SharedBase <SharedScreenState>
- (instancetype)initWithState:(SharedOnboardingProcessingScreenStateState *)state __attribute__((swift_name("init(state:)"))) __attribute__((objc_designated_initializer));
- (SharedOnboardingProcessingScreenState *)doCopyState:(SharedOnboardingProcessingScreenStateState *)state __attribute__((swift_name("doCopy(state:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedOnboardingProcessingScreenState *)nextScreen __attribute__((swift_name("nextScreen()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *createAnAccount __attribute__((swift_name("createAnAccount")));
@property (readonly) NSString *currentText __attribute__((swift_name("currentText")));
@property (readonly) NSString *doneText __attribute__((swift_name("doneText")));
@property (readonly) NSString *prefixText __attribute__((swift_name("prefixText")));
@property (readonly) SharedScreenName *screenName __attribute__((swift_name("screenName")));
@property (readonly) SharedOnboardingProcessingScreenStateState *state __attribute__((swift_name("state")));
@property (readonly) NSString *text1 __attribute__((swift_name("text1")));
@property (readonly) NSString *text2 __attribute__((swift_name("text2")));
@property (readonly) NSString *text3 __attribute__((swift_name("text3")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingProcessingScreenState.Action")))
@interface SharedOnboardingProcessingScreenStateAction : SharedKotlinEnum<SharedOnboardingProcessingScreenStateAction *> <SharedUserAction>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedOnboardingProcessingScreenStateAction *createAnAccount __attribute__((swift_name("createAnAccount")));
@property (class, readonly) SharedOnboardingProcessingScreenStateAction *moveToNextStep __attribute__((swift_name("moveToNextStep")));
@property (class, readonly) SharedOnboardingProcessingScreenStateAction *loginIn __attribute__((swift_name("loginIn")));
+ (SharedKotlinArray<SharedOnboardingProcessingScreenStateAction *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedOnboardingProcessingScreenStateAction *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingProcessingScreenState.State")))
@interface SharedOnboardingProcessingScreenStateState : SharedKotlinEnum<SharedOnboardingProcessingScreenStateState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedOnboardingProcessingScreenStateState *text1 __attribute__((swift_name("text1")));
@property (class, readonly) SharedOnboardingProcessingScreenStateState *text2 __attribute__((swift_name("text2")));
@property (class, readonly) SharedOnboardingProcessingScreenStateState *text3 __attribute__((swift_name("text3")));
@property (class, readonly) SharedOnboardingProcessingScreenStateState *done __attribute__((swift_name("done")));
+ (SharedKotlinArray<SharedOnboardingProcessingScreenStateState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedOnboardingProcessingScreenStateState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingScreenState")))
@interface SharedOnboardingScreenState : SharedBase <SharedScreenState>
- (instancetype)initWithJsonInput:(NSString *)jsonInput state:(SharedOnboardingScreenStateState *)state index:(int32_t)index selectedOptions:(NSArray<SharedOption *> *)selectedOptions __attribute__((swift_name("init(jsonInput:state:index:selectedOptions:)"))) __attribute__((objc_designated_initializer));
- (SharedOnboardingScreenState *)doCopyJsonInput:(NSString *)jsonInput state:(SharedOnboardingScreenStateState *)state index:(int32_t)index selectedOptions:(NSArray<SharedOption *> *)selectedOptions __attribute__((swift_name("doCopy(jsonInput:state:index:selectedOptions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedOnboardingScreenState *)nextScreen __attribute__((swift_name("nextScreen()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (SharedOnboardingScreenState *)updateWithSelectedOptionOptionId:(int32_t)optionId __attribute__((swift_name("updateWithSelectedOption(optionId:)")));
@property (readonly) SharedScreenModel *currentScreenModel __attribute__((swift_name("currentScreenModel")));
@property (readonly) int32_t index __attribute__((swift_name("index")));
@property (readonly) NSString *jsonInput __attribute__((swift_name("jsonInput")));
@property (readonly) SharedOnboardingModel *onboarding __attribute__((swift_name("onboarding")));
@property (readonly) SharedScreenName *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSArray<SharedOption *> *selectedOptions __attribute__((swift_name("selectedOptions")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@property (readonly) SharedOnboardingScreenStateState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingScreenState.Action")))
@interface SharedOnboardingScreenStateAction : SharedBase <SharedUserAction>
- (instancetype)initWithType:(SharedOnboardingScreenStateActionType *)type option:(SharedInt * _Nullable)option text:(NSString * _Nullable)text __attribute__((swift_name("init(type:option:text:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedInt * _Nullable option __attribute__((swift_name("option")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) SharedOnboardingScreenStateActionType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingScreenState.ActionType")))
@interface SharedOnboardingScreenStateActionType : SharedKotlinEnum<SharedOnboardingScreenStateActionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedOnboardingScreenStateActionType *submit __attribute__((swift_name("submit")));
@property (class, readonly) SharedOnboardingScreenStateActionType *select __attribute__((swift_name("select")));
@property (class, readonly) SharedOnboardingScreenStateActionType *textInput __attribute__((swift_name("textInput")));
+ (SharedKotlinArray<SharedOnboardingScreenStateActionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedOnboardingScreenStateActionType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingScreenState.State")))
@interface SharedOnboardingScreenStateState : SharedKotlinEnum<SharedOnboardingScreenStateState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedOnboardingScreenStateState *onboarding __attribute__((swift_name("onboarding")));
@property (class, readonly) SharedOnboardingScreenStateState *done __attribute__((swift_name("done")));
+ (SharedKotlinArray<SharedOnboardingScreenStateState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedOnboardingScreenStateState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingSuccessScreenState")))
@interface SharedOnboardingSuccessScreenState : SharedBase <SharedScreenState>
- (instancetype)initWithState:(SharedOnboardingSuccessScreenStateState *)state __attribute__((swift_name("init(state:)"))) __attribute__((objc_designated_initializer));
- (SharedOnboardingSuccessScreenState *)doCopyState:(SharedOnboardingSuccessScreenStateState *)state __attribute__((swift_name("doCopy(state:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *alreadyHaveAnAccount __attribute__((swift_name("alreadyHaveAnAccount")));
@property (readonly) NSString *alreadyHaveAnAccountBolt __attribute__((swift_name("alreadyHaveAnAccountBolt")));
@property (readonly) NSString *backgroundColor __attribute__((swift_name("backgroundColor")));
@property (readonly) NSString *createAnAccount __attribute__((swift_name("createAnAccount")));
@property (readonly) NSString *headline __attribute__((swift_name("headline")));
@property (readonly) NSString *imageName __attribute__((swift_name("imageName")));
@property (readonly) SharedScreenName *screenName __attribute__((swift_name("screenName")));
@property (readonly) SharedOnboardingSuccessScreenStateState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingSuccessScreenState.Action")))
@interface SharedOnboardingSuccessScreenStateAction : SharedKotlinEnum<SharedOnboardingSuccessScreenStateAction *> <SharedUserAction>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedOnboardingSuccessScreenStateAction *createAccount __attribute__((swift_name("createAccount")));
@property (class, readonly) SharedOnboardingSuccessScreenStateAction *logIn __attribute__((swift_name("logIn")));
+ (SharedKotlinArray<SharedOnboardingSuccessScreenStateAction *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedOnboardingSuccessScreenStateAction *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingSuccessScreenState.State")))
@interface SharedOnboardingSuccessScreenStateState : SharedKotlinEnum<SharedOnboardingSuccessScreenStateState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedOnboardingSuccessScreenStateState *normal __attribute__((swift_name("normal")));
+ (SharedKotlinArray<SharedOnboardingSuccessScreenStateState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedOnboardingSuccessScreenStateState *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlanModel")))
@interface SharedPlanModel : SharedBase
- (instancetype)initWithId:(NSString *)id navigationBarTitle:(NSString * _Nullable)navigationBarTitle headlineImageName:(NSString *)headlineImageName headline:(NSString *)headline headlineBottom:(NSString *)headlineBottom submit:(NSString *)submit screens:(NSArray<SharedScreenModel *> *)screens __attribute__((swift_name("init(id:navigationBarTitle:headlineImageName:headline:headlineBottom:submit:screens:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedPlanModelCompanion *companion __attribute__((swift_name("companion")));
- (SharedPlanModel *)doCopyId:(NSString *)id navigationBarTitle:(NSString * _Nullable)navigationBarTitle headlineImageName:(NSString *)headlineImageName headline:(NSString *)headline headlineBottom:(NSString *)headlineBottom submit:(NSString *)submit screens:(NSArray<SharedScreenModel *> *)screens __attribute__((swift_name("doCopy(id:navigationBarTitle:headlineImageName:headline:headlineBottom:submit:screens:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *headline __attribute__((swift_name("headline")));
@property (readonly) NSString *headlineBottom __attribute__((swift_name("headlineBottom")));
@property (readonly) NSString *headlineImageName __attribute__((swift_name("headlineImageName")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable navigationBarTitle __attribute__((swift_name("navigationBarTitle")));
@property (readonly) NSArray<SharedScreenModel *> *screens __attribute__((swift_name("screens")));
@property (readonly) NSString *submit __attribute__((swift_name("submit")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlanModel.Companion")))
@interface SharedPlanModelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedPlanModelCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlanScreenState")))
@interface SharedPlanScreenState : SharedBase <SharedScreenState>
- (instancetype)initWithJsonInput:(NSString *)jsonInput state:(SharedPlanScreenStateState *)state index:(int32_t)index selectedOptions:(NSArray<SharedOption *> *)selectedOptions userSession:(SharedUserSession *)userSession __attribute__((swift_name("init(jsonInput:state:index:selectedOptions:userSession:)"))) __attribute__((objc_designated_initializer));
- (SharedPlanScreenState *)doCopyJsonInput:(NSString *)jsonInput state:(SharedPlanScreenStateState *)state index:(int32_t)index selectedOptions:(NSArray<SharedOption *> *)selectedOptions userSession:(SharedUserSession *)userSession __attribute__((swift_name("doCopy(jsonInput:state:index:selectedOptions:userSession:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedPlanScreenState *)nextScreen __attribute__((swift_name("nextScreen()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (SharedPlanScreenState *)updateWithSelectedOptionOptionId:(int32_t)optionId __attribute__((swift_name("updateWithSelectedOption(optionId:)")));
@property (readonly) SharedScreenModel *currentScreen __attribute__((swift_name("currentScreen")));
@property (readonly) int32_t index __attribute__((swift_name("index")));
@property (readonly) NSString *jsonInput __attribute__((swift_name("jsonInput")));
@property (readonly) SharedPlaceholderReplacer *placeholderReplacer __attribute__((swift_name("placeholderReplacer")));
@property (readonly) SharedPlanModel *planModel __attribute__((swift_name("planModel")));
@property (readonly) SharedScreenName *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSArray<SharedOption *> *selectedOptions __attribute__((swift_name("selectedOptions")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@property (readonly) SharedPlanScreenStateState *state __attribute__((swift_name("state")));
@property (readonly) SharedUserSession *userSession __attribute__((swift_name("userSession")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlanScreenState.Action")))
@interface SharedPlanScreenStateAction : SharedBase <SharedUserAction>
- (instancetype)initWithType:(SharedPlanScreenStateActionType *)type option:(SharedInt * _Nullable)option text:(NSString * _Nullable)text __attribute__((swift_name("init(type:option:text:)"))) __attribute__((objc_designated_initializer));
@property (readonly) SharedInt * _Nullable option __attribute__((swift_name("option")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) SharedPlanScreenStateActionType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlanScreenState.ActionType")))
@interface SharedPlanScreenStateActionType : SharedKotlinEnum<SharedPlanScreenStateActionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedPlanScreenStateActionType *submit __attribute__((swift_name("submit")));
@property (class, readonly) SharedPlanScreenStateActionType *select __attribute__((swift_name("select")));
@property (class, readonly) SharedPlanScreenStateActionType *textInput __attribute__((swift_name("textInput")));
+ (SharedKotlinArray<SharedPlanScreenStateActionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedPlanScreenStateActionType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlanScreenState.State")))
@interface SharedPlanScreenStateState : SharedKotlinEnum<SharedPlanScreenStateState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedPlanScreenStateState *start __attribute__((swift_name("start")));
@property (class, readonly) SharedPlanScreenStateState *plan __attribute__((swift_name("plan")));
@property (class, readonly) SharedPlanScreenStateState *done __attribute__((swift_name("done")));
+ (SharedKotlinArray<SharedPlanScreenStateState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedPlanScreenStateState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Plans")))
@interface SharedPlans : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedPlansCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Plans.Companion")))
@interface SharedPlansCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedPlansCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *day0 __attribute__((swift_name("day0")));
@property (readonly) NSString *onboarding __attribute__((swift_name("onboarding")));
@end

__attribute__((swift_name("SleepSession")))
@interface SharedSleepSession : SharedBase <SharedLibrary_baseRealmObject>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedSleepSessionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedKbsonBsonObjectId *_id __attribute__((swift_name("_id")));
@property int64_t endTime __attribute__((swift_name("endTime")));
@property int64_t startTime __attribute__((swift_name("startTime")));
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SleepSession.Companion")))
@interface SharedSleepSessionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSleepSessionCompanion *shared __attribute__((swift_name("shared")));
- (id)io_realm_kotlin_newInstance __attribute__((swift_name("io_realm_kotlin_newInstance()")));
- (id)io_realm_kotlin_schema __attribute__((swift_name("io_realm_kotlin_schema()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SleepSessionType")))
@interface SharedSleepSessionType : SharedKotlinEnum<SharedSleepSessionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSleepSessionType *night __attribute__((swift_name("night")));
@property (class, readonly) SharedSleepSessionType *nap __attribute__((swift_name("nap")));
+ (SharedKotlinArray<SharedSleepSessionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedSleepSessionType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SleepTrackerManager")))
@interface SharedSleepTrackerManager : SharedBase
- (instancetype)initWithRealmHelper:(SharedRealmHelper *)realmHelper __attribute__((swift_name("init(realmHelper:)"))) __attribute__((objc_designated_initializer));
- (SharedSleepSession *)addSessionStartTime:(int64_t)startTime endTime:(int64_t)endTime type:(SharedSleepSessionType *)type __attribute__((swift_name("addSession(startTime:endTime:type:)")));
- (void)deleteSessionId:(NSString *)id __attribute__((swift_name("deleteSession(id:)")));
- (NSArray<SharedSleepSession *> *)getSessionsForDateDate:(int64_t)date __attribute__((swift_name("getSessionsForDate(date:)")));
- (NSArray<SharedSleepSession *> *)getTodaySessions __attribute__((swift_name("getTodaySessions()")));
- (SharedSleepSession *)modifySessionId:(NSString *)id startTime:(SharedLong * _Nullable)startTime endTime:(SharedLong * _Nullable)endTime type:(SharedSleepSessionType * _Nullable)type __attribute__((swift_name("modifySession(id:startTime:endTime:type:)")));
@end

__attribute__((swift_name("StateHandler")))
@protocol SharedStateHandler
@required
- (id<SharedScreenState>)handleState:(id<SharedScreenState>)state action:(id<SharedUserAction>)action __attribute__((swift_name("handle(state:action:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeTabBarStateHandler")))
@interface SharedHomeTabBarStateHandler : SharedBase <SharedStateHandler>
- (instancetype)initWithUserSession:(SharedUserSession *)userSession __attribute__((swift_name("init(userSession:)"))) __attribute__((objc_designated_initializer));
- (id<SharedScreenState>)handleState:(SharedHomeTabBarScreenState *)state action:(SharedHomeTabBarScreenStateAction *)action __attribute__((swift_name("handle(state:action:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LetsBeginWithPlanStateHandler")))
@interface SharedLetsBeginWithPlanStateHandler : SharedBase <SharedStateHandler>
- (instancetype)initWithUserSession:(SharedUserSession *)userSession sleepTrackerManager:(SharedSleepTrackerManager *)sleepTrackerManager __attribute__((swift_name("init(userSession:sleepTrackerManager:)"))) __attribute__((objc_designated_initializer));
- (id<SharedScreenState>)handleState:(SharedLetsBeginWithPlanScreenState *)state action:(SharedLetsBeginWithPlanScreenStateAction *)action __attribute__((swift_name("handle(state:action:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingStateHandler")))
@interface SharedOnboardingStateHandler : SharedBase <SharedStateHandler>
- (instancetype)initWithUserSession:(SharedUserSession *)userSession __attribute__((swift_name("init(userSession:)"))) __attribute__((objc_designated_initializer));
- (id<SharedScreenState>)handleState:(SharedOnboardingScreenState *)state action:(SharedOnboardingScreenStateAction *)action __attribute__((swift_name("handle(state:action:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlaceholderReplacer")))
@interface SharedPlaceholderReplacer : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedScreenModel *)fillPlaceholdersScreenModel:(SharedScreenModel *)screenModel userSession:(SharedUserSessionModel *)userSession __attribute__((swift_name("fillPlaceholders(screenModel:userSession:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlanScreenStateStateHandler")))
@interface SharedPlanScreenStateStateHandler : SharedBase <SharedStateHandler>
- (instancetype)initWithUserSession:(SharedUserSession *)userSession sleepTrackerManager:(SharedSleepTrackerManager *)sleepTrackerManager __attribute__((swift_name("init(userSession:sleepTrackerManager:)"))) __attribute__((objc_designated_initializer));
- (id<SharedScreenState>)handleState:(SharedPlanScreenState *)state action:(SharedPlanScreenStateAction *)action __attribute__((swift_name("handle(state:action:)")));
@property (readonly) SharedSleepTrackerManager *sleepTrackerManager __attribute__((swift_name("sleepTrackerManager")));
@property (readonly) SharedUserSession *userSession __attribute__((swift_name("userSession")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddSleepSessionStateHandler")))
@interface SharedAddSleepSessionStateHandler : SharedBase <SharedStateHandler>
- (instancetype)initWithSleepTrackerManager:(SharedSleepTrackerManager *)sleepTrackerManager __attribute__((swift_name("init(sleepTrackerManager:)"))) __attribute__((objc_designated_initializer));
- (id<SharedScreenState>)handleState:(SharedAddSleepSessionScreenState *)state action:(SharedAddSleepSessionScreenStateAction *)action __attribute__((swift_name("handle(state:action:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EditSleepSessionStateHandler")))
@interface SharedEditSleepSessionStateHandler : SharedBase <SharedStateHandler>
- (instancetype)initWithSleepTrackerManager:(SharedSleepTrackerManager *)sleepTrackerManager __attribute__((swift_name("init(sleepTrackerManager:)"))) __attribute__((objc_designated_initializer));
- (id<SharedScreenState>)handleState:(SharedEditSleepSessionScreenState *)state action:(SharedEditSleepSessionScreenStateAction *)action __attribute__((swift_name("handle(state:action:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TodayStateHandler")))
@interface SharedTodayStateHandler : SharedBase <SharedStateHandler>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<SharedScreenState>)handleState:(SharedTodayScreenState *)state action:(SharedTodayScreenStateAction *)action __attribute__((swift_name("handle(state:action:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol SharedKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol SharedKotlinx_coroutines_coreSharedFlow <SharedKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol SharedKotlinx_coroutines_coreStateFlow <SharedKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CStateFlow")))
@interface SharedCStateFlow<T> : SharedBase <SharedKotlinx_coroutines_coreStateFlow>

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (id<SharedCloseable>)watchBlock:(void (^)(T))block __attribute__((swift_name("watch(block:)")));
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Closeable")))
@protocol SharedCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateHelper")))
@interface SharedDateHelper : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int64_t)getCurrentUnixTimestamp __attribute__((swift_name("getCurrentUnixTimestamp()")));
- (int64_t)getEndOfDayUnixTimestampTimestamp:(int64_t)timestamp __attribute__((swift_name("getEndOfDayUnixTimestamp(timestamp:)")));
- (int64_t)getStartOfDayUnixTimestampTimestamp:(int64_t)timestamp __attribute__((swift_name("getStartOfDayUnixTimestamp(timestamp:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RealmHelper")))
@interface SharedRealmHelper : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)closeRealm __attribute__((swift_name("closeRealm()")));
- (void)resetRealm __attribute__((swift_name("resetRealm()")));
@property (readonly) id<SharedLibrary_baseRealm> realm __attribute__((swift_name("realm")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface SharedPlatform_iosKt : SharedBase
+ (id<SharedPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SharedKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SharedKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SharedKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SharedKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SharedKotlinx_serialization_coreKSerializer <SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDeserializationStrategy>
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=org/mongodb/kbson/serialization/BsonValueSerializer))
*/
__attribute__((swift_name("KbsonBsonValue")))
@interface SharedKbsonBsonValue : SharedBase
@property (class, readonly, getter=companion) SharedKbsonBsonValueCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<SharedKbsonBsonValue *> *)asArray __attribute__((swift_name("asArray()")));
- (SharedKbsonBsonBinary *)asBinary __attribute__((swift_name("asBinary()")));
- (SharedKbsonBsonBoolean *)asBoolean __attribute__((swift_name("asBoolean()")));
- (SharedKbsonBsonMaxKey *)asBsonMaxKey __attribute__((swift_name("asBsonMaxKey()")));
- (SharedKbsonBsonMinKey *)asBsonMinKey __attribute__((swift_name("asBsonMinKey()")));
- (SharedKbsonBsonNull *)asBsonNull __attribute__((swift_name("asBsonNull()")));
- (SharedKbsonBsonUndefined *)asBsonUndefined __attribute__((swift_name("asBsonUndefined()")));
- (SharedKbsonBsonDBPointer *)asDBPointer __attribute__((swift_name("asDBPointer()")));
- (SharedKbsonBsonDateTime *)asDateTime __attribute__((swift_name("asDateTime()")));
- (SharedKbsonBsonDecimal128 *)asDecimal128 __attribute__((swift_name("asDecimal128()")));
- (SharedMutableDictionary<NSString *, SharedKbsonBsonValue *> *)asDocument __attribute__((swift_name("asDocument()")));
- (SharedKbsonBsonDouble *)asDouble __attribute__((swift_name("asDouble()")));
- (SharedKbsonBsonInt32 *)asInt32 __attribute__((swift_name("asInt32()")));
- (SharedKbsonBsonInt64 *)asInt64 __attribute__((swift_name("asInt64()")));
- (SharedKbsonBsonJavaScript *)asJavaScript __attribute__((swift_name("asJavaScript()")));
- (SharedKbsonBsonJavaScriptWithScope *)asJavaScriptWithScope __attribute__((swift_name("asJavaScriptWithScope()")));
- (SharedKbsonBsonNumber *)asNumber __attribute__((swift_name("asNumber()")));
- (SharedKbsonBsonObjectId *)asObjectId __attribute__((swift_name("asObjectId()")));
- (SharedKbsonBsonRegularExpression *)asRegularExpression __attribute__((swift_name("asRegularExpression()")));
- (SharedKbsonBsonString *)asString __attribute__((swift_name("asString()")));
- (SharedKbsonBsonSymbol *)asSymbol __attribute__((swift_name("asSymbol()")));
- (SharedKbsonBsonTimestamp *)asTimestamp __attribute__((swift_name("asTimestamp()")));
- (BOOL)isArray __attribute__((swift_name("isArray()")));
- (BOOL)isBinary __attribute__((swift_name("isBinary()")));
- (BOOL)isBoolean __attribute__((swift_name("isBoolean()")));
- (BOOL)isDBPointer __attribute__((swift_name("isDBPointer()")));
- (BOOL)isDateTime __attribute__((swift_name("isDateTime()")));
- (BOOL)isDecimal128 __attribute__((swift_name("isDecimal128()")));
- (BOOL)isDocument __attribute__((swift_name("isDocument()")));
- (BOOL)isDouble __attribute__((swift_name("isDouble()")));
- (BOOL)isInt32 __attribute__((swift_name("isInt32()")));
- (BOOL)isInt64 __attribute__((swift_name("isInt64()")));
- (BOOL)isJavaScript __attribute__((swift_name("isJavaScript()")));
- (BOOL)isJavaScriptWithScope __attribute__((swift_name("isJavaScriptWithScope()")));
- (BOOL)isMaxKey __attribute__((swift_name("isMaxKey()")));
- (BOOL)isMinKey __attribute__((swift_name("isMinKey()")));
- (BOOL)isNull __attribute__((swift_name("isNull()")));
- (BOOL)isNumber __attribute__((swift_name("isNumber()")));
- (BOOL)isObjectId __attribute__((swift_name("isObjectId()")));
- (BOOL)isRegularExpression __attribute__((swift_name("isRegularExpression()")));
- (BOOL)isString __attribute__((swift_name("isString()")));
- (BOOL)isSymbol __attribute__((swift_name("isSymbol()")));
- (BOOL)isTimestamp __attribute__((swift_name("isTimestamp()")));
- (BOOL)isUndefined __attribute__((swift_name("isUndefined()")));
- (NSString *)toJson __attribute__((swift_name("toJson()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=org/mongodb/kbson/serialization/BsonObjectIdSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonObjectId")))
@interface SharedKbsonBsonObjectId : SharedKbsonBsonValue <SharedKotlinComparable>
- (instancetype)initWithTimestamp:(int32_t)timestamp randomValue1:(int32_t)randomValue1 randomValue2:(int16_t)randomValue2 counter:(int32_t)counter __attribute__((swift_name("init(timestamp:randomValue1:randomValue2:counter:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonObjectIdCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKbsonBsonObjectId *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinByteArray *)toByteArray __attribute__((swift_name("toByteArray()")));
- (NSString *)toHexString __attribute__((swift_name("toHexString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) int32_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SharedKotlinEnumCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol SharedKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Library_baseVersioned")))
@protocol SharedLibrary_baseVersioned
@required
- (SharedLibrary_baseVersionId *)version __attribute__((swift_name("version()")));
@end

__attribute__((swift_name("Library_baseBaseRealm")))
@protocol SharedLibrary_baseBaseRealm <SharedLibrary_baseVersioned>
@required
- (int64_t)getNumberOfActiveVersions __attribute__((swift_name("getNumberOfActiveVersions()")));
- (BOOL)isClosed __attribute__((swift_name("isClosed()")));
- (id<SharedLibrary_baseRealmSchema>)schema __attribute__((swift_name("schema()")));
- (int64_t)schemaVersion __attribute__((swift_name("schemaVersion()")));
@property (readonly) id<SharedLibrary_baseConfiguration> configuration __attribute__((swift_name("configuration")));
@end

__attribute__((swift_name("Library_baseTypedRealm")))
@protocol SharedLibrary_baseTypedRealm <SharedLibrary_baseBaseRealm>
@required
- (id<SharedLibrary_baseTypedRealmObject>)doCopyFromRealmObj:(id<SharedLibrary_baseTypedRealmObject>)obj depth:(uint32_t)depth __attribute__((swift_name("doCopyFromRealm(obj:depth:)")));
- (NSDictionary<NSString *, id> *)doCopyFromRealmDictionary:(SharedMutableDictionary<NSString *, id> *)dictionary depth:(uint32_t)depth __attribute__((swift_name("doCopyFromRealm(dictionary:depth:)")));
- (NSArray<id<SharedLibrary_baseTypedRealmObject>> *)doCopyFromRealmCollection:(id)collection depth:(uint32_t)depth __attribute__((swift_name("doCopyFromRealm(collection:depth:)")));
- (id<SharedLibrary_baseRealmQuery>)queryClazz:(id<SharedKotlinKClass>)clazz query:(NSString *)query args:(SharedKotlinArray<id> *)args __attribute__((swift_name("query(clazz:query:args:)")));
@end

__attribute__((swift_name("Library_baseRealm")))
@protocol SharedLibrary_baseRealm <SharedLibrary_baseTypedRealm>
@required
- (id<SharedKotlinx_coroutines_coreFlow>)asFlow __attribute__((swift_name("asFlow()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeBlock:(id _Nullable (^)(id<SharedLibrary_baseMutableRealm>))block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("write(block:completionHandler:)")));
- (id _Nullable)writeBlockingBlock:(id _Nullable (^)(id<SharedLibrary_baseMutableRealm>))block __attribute__((swift_name("writeBlocking(block:)")));
- (void)writeCopyToTargetConfiguration:(id<SharedLibrary_baseConfiguration>)targetConfiguration __attribute__((swift_name("writeCopyTo(targetConfiguration:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SharedKotlinx_serialization_coreEncoder
@required
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<SharedKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SharedKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<SharedKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<SharedKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) SharedKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SharedKotlinx_serialization_coreDecoder
@required
- (id<SharedKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<SharedKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (SharedKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonValue.Companion")))
@interface SharedKbsonBsonValueCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonValueCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=org/mongodb/kbson/serialization/BsonBinarySerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonBinary")))
@interface SharedKbsonBsonBinary : SharedKbsonBsonValue
- (instancetype)initWithData:(SharedKotlinByteArray *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(int8_t)type data:(SharedKotlinByteArray *)data __attribute__((swift_name("init(type:data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(SharedKbsonBsonBinarySubType *)type data_:(SharedKotlinByteArray *)data __attribute__((swift_name("init(type:data_:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonBinaryCompanion *companion __attribute__((swift_name("companion")));
- (SharedKbsonBsonBinary *)clone __attribute__((swift_name("clone()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) SharedKotlinByteArray *data __attribute__((swift_name("data")));
@property (readonly) int8_t type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=org/mongodb/kbson/serialization/BsonBooleanSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonBoolean")))
@interface SharedKbsonBsonBoolean : SharedKbsonBsonValue <SharedKotlinComparable>
- (instancetype)initWithValue:(BOOL)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonBooleanCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKbsonBsonBoolean *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) BOOL value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=org/mongodb/kbson/serialization/BsonMaxKeySerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonMaxKey")))
@interface SharedKbsonBsonMaxKey : SharedKbsonBsonValue
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bsonMaxKey __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonMaxKey *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=org/mongodb/kbson/serialization/BsonMinKeySerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonMinKey")))
@interface SharedKbsonBsonMinKey : SharedKbsonBsonValue
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bsonMinKey __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonMinKey *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=org/mongodb/kbson/serialization/BsonNullSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonNull")))
@interface SharedKbsonBsonNull : SharedKbsonBsonValue
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bsonNull __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonNull *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
@property (readonly) SharedKbsonBsonNull *VALUE __attribute__((swift_name("VALUE")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=org/mongodb/kbson/serialization/BsonUndefinedSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonUndefined")))
@interface SharedKbsonBsonUndefined : SharedKbsonBsonValue
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bsonUndefined __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonUndefined *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
@property (readonly) SharedKbsonBsonUndefined *UNDEFINED __attribute__((swift_name("UNDEFINED")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=org/mongodb/kbson/serialization/BsonDBPointerSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonDBPointer")))
@interface SharedKbsonBsonDBPointer : SharedKbsonBsonValue
- (instancetype)initWithNamespace:(NSString *)namespace_ id:(SharedKbsonBsonObjectId *)id __attribute__((swift_name("init(namespace:id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonDBPointerCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) SharedKbsonBsonObjectId *id __attribute__((swift_name("id")));
@property (readonly, getter=namespace) NSString *namespace_ __attribute__((swift_name("namespace_")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=org/mongodb/kbson/serialization/BsonDateTimeSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonDateTime")))
@interface SharedKbsonBsonDateTime : SharedKbsonBsonValue <SharedKotlinComparable>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithValue:(int64_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonDateTimeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKbsonBsonDateTime *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) int64_t value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=org/mongodb/kbson/serialization/BsonDecimal128Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonDecimal128")))
@interface SharedKbsonBsonDecimal128 : SharedKbsonBsonValue
@property (class, readonly, getter=companion) SharedKbsonBsonDecimal128Companion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) uint64_t high __attribute__((swift_name("high")));
@property (readonly) BOOL isFinite __attribute__((swift_name("isFinite")));
@property (readonly) BOOL isInfinite __attribute__((swift_name("isInfinite")));
@property (readonly) BOOL isNaN __attribute__((swift_name("isNaN")));
@property (readonly) BOOL isNegative __attribute__((swift_name("isNegative")));
@property (readonly) uint64_t low __attribute__((swift_name("low")));
@end

__attribute__((swift_name("KbsonBsonNumber")))
@interface SharedKbsonBsonNumber : SharedKbsonBsonValue
- (instancetype)initWithNumber:(id)number __attribute__((swift_name("init(number:)"))) __attribute__((objc_designated_initializer));
- (double)doubleValue __attribute__((swift_name("doubleValue()")));
- (int32_t)intValue __attribute__((swift_name("intValue()")));
- (int64_t)longValue __attribute__((swift_name("longValue()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=org/mongodb/kbson/serialization/BsonDoubleSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonDouble")))
@interface SharedKbsonBsonDouble : SharedKbsonBsonNumber <SharedKotlinComparable>
- (instancetype)initWithValue:(double)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNumber:(id)number __attribute__((swift_name("init(number:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKbsonBsonDoubleCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKbsonBsonDouble *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) double value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=org/mongodb/kbson/serialization/BsonInt32Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonInt32")))
@interface SharedKbsonBsonInt32 : SharedKbsonBsonNumber <SharedKotlinComparable>
- (instancetype)initWithValue:(int32_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNumber:(id)number __attribute__((swift_name("init(number:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKbsonBsonInt32Companion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKbsonBsonInt32 *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=org/mongodb/kbson/serialization/BsonInt64Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonInt64")))
@interface SharedKbsonBsonInt64 : SharedKbsonBsonNumber <SharedKotlinComparable>
- (instancetype)initWithValue:(int64_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNumber:(id)number __attribute__((swift_name("init(number:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKbsonBsonInt64Companion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKbsonBsonInt64 *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) int64_t value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=org/mongodb/kbson/serialization/BsonJavaScriptSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonJavaScript")))
@interface SharedKbsonBsonJavaScript : SharedKbsonBsonValue
- (instancetype)initWithCode:(NSString *)code __attribute__((swift_name("init(code:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonJavaScriptCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=org/mongodb/kbson/serialization/BsonJavaScriptWithScopeSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonJavaScriptWithScope")))
@interface SharedKbsonBsonJavaScriptWithScope : SharedKbsonBsonValue
- (instancetype)initWithCode:(NSString *)code scope:(SharedMutableDictionary<NSString *, SharedKbsonBsonValue *> *)scope __attribute__((swift_name("init(code:scope:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonJavaScriptWithScopeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) SharedMutableDictionary<NSString *, SharedKbsonBsonValue *> *scope __attribute__((swift_name("scope")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=org/mongodb/kbson/serialization/BsonRegularExpressionSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonRegularExpression")))
@interface SharedKbsonBsonRegularExpression : SharedKbsonBsonValue
- (instancetype)initWithPattern:(NSString *)pattern __attribute__((swift_name("init(pattern:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPattern:(NSString *)pattern options:(NSString *)options __attribute__((swift_name("init(pattern:options:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonRegularExpressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) NSString *options __attribute__((swift_name("options")));
@property (readonly) NSString *pattern __attribute__((swift_name("pattern")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=org/mongodb/kbson/serialization/BsonStringSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonString")))
@interface SharedKbsonBsonString : SharedKbsonBsonValue <SharedKotlinComparable>
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonStringCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKbsonBsonString *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=org/mongodb/kbson/serialization/BsonSymbolSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonSymbol")))
@interface SharedKbsonBsonSymbol : SharedKbsonBsonValue
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonSymbolCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) NSString *symbol __attribute__((swift_name("symbol")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=org/mongodb/kbson/serialization/BsonTimestampSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonTimestamp")))
@interface SharedKbsonBsonTimestamp : SharedKbsonBsonValue <SharedKotlinComparable>
- (instancetype)initWithValue:(int64_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSeconds:(int32_t)seconds increment:(int32_t)increment __attribute__((swift_name("init(seconds:increment:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKbsonBsonTimestampCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKbsonBsonTimestamp *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKbsonBsonType *bsonType __attribute__((swift_name("bsonType")));
@property (readonly) int32_t inc __attribute__((swift_name("inc")));
@property (readonly) int32_t time __attribute__((swift_name("time")));
@property (readonly) int64_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonType")))
@interface SharedKbsonBsonType : SharedKotlinEnum<SharedKbsonBsonType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKbsonBsonType *endOfDocument __attribute__((swift_name("endOfDocument")));
@property (class, readonly) SharedKbsonBsonType *double_ __attribute__((swift_name("double_")));
@property (class, readonly) SharedKbsonBsonType *string __attribute__((swift_name("string")));
@property (class, readonly) SharedKbsonBsonType *document __attribute__((swift_name("document")));
@property (class, readonly) SharedKbsonBsonType *array __attribute__((swift_name("array")));
@property (class, readonly) SharedKbsonBsonType *binary __attribute__((swift_name("binary")));
@property (class, readonly) SharedKbsonBsonType *undefined __attribute__((swift_name("undefined")));
@property (class, readonly) SharedKbsonBsonType *objectId __attribute__((swift_name("objectId")));
@property (class, readonly) SharedKbsonBsonType *boolean __attribute__((swift_name("boolean")));
@property (class, readonly) SharedKbsonBsonType *dateTime __attribute__((swift_name("dateTime")));
@property (class, readonly) SharedKbsonBsonType *null __attribute__((swift_name("null")));
@property (class, readonly) SharedKbsonBsonType *regularExpression __attribute__((swift_name("regularExpression")));
@property (class, readonly) SharedKbsonBsonType *dbPointer __attribute__((swift_name("dbPointer")));
@property (class, readonly) SharedKbsonBsonType *javascript __attribute__((swift_name("javascript")));
@property (class, readonly) SharedKbsonBsonType *symbol __attribute__((swift_name("symbol")));
@property (class, readonly) SharedKbsonBsonType *javascriptWithScope __attribute__((swift_name("javascriptWithScope")));
@property (class, readonly) SharedKbsonBsonType *int32 __attribute__((swift_name("int32")));
@property (class, readonly) SharedKbsonBsonType *timestamp __attribute__((swift_name("timestamp")));
@property (class, readonly) SharedKbsonBsonType *int64 __attribute__((swift_name("int64")));
@property (class, readonly) SharedKbsonBsonType *decimal128 __attribute__((swift_name("decimal128")));
@property (class, readonly) SharedKbsonBsonType *minKey __attribute__((swift_name("minKey")));
@property (class, readonly) SharedKbsonBsonType *maxKey __attribute__((swift_name("maxKey")));
+ (SharedKotlinArray<SharedKbsonBsonType *> *)values __attribute__((swift_name("values()")));
- (BOOL)isContainer __attribute__((swift_name("isContainer()")));
@property (readonly) uint8_t value_ __attribute__((swift_name("value_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonObjectId.Companion")))
@interface SharedKbsonBsonObjectIdCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonObjectIdCompanion *shared __attribute__((swift_name("shared")));
- (SharedKbsonBsonObjectId *)invoke __attribute__((swift_name("invoke()")));
- (SharedKbsonBsonObjectId *)invokeByteArray:(SharedKotlinByteArray *)byteArray __attribute__((swift_name("invoke(byteArray:)")));
- (SharedKbsonBsonObjectId *)invokeTimestamp:(int64_t)timestamp __attribute__((swift_name("invoke(timestamp:)")));
- (SharedKbsonBsonObjectId *)invokeHexString:(NSString *)hexString __attribute__((swift_name("invoke(hexString:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface SharedKotlinByteArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedByte *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Library_baseMutableRealm")))
@protocol SharedLibrary_baseMutableRealm <SharedLibrary_baseTypedRealm>
@required
- (void)cancelWrite __attribute__((swift_name("cancelWrite()")));
- (id<SharedLibrary_baseRealmObject>)doCopyToRealmInstance:(id<SharedLibrary_baseRealmObject>)instance updatePolicy:(SharedLibrary_baseUpdatePolicy *)updatePolicy __attribute__((swift_name("doCopyToRealm(instance:updatePolicy:)")));
- (void)deleteDeleteable:(id<SharedLibrary_baseDeleteable>)deleteable __attribute__((swift_name("delete(deleteable:)")));
- (void)deleteSchemaClass:(id<SharedKotlinKClass>)schemaClass __attribute__((swift_name("delete(schemaClass:)")));
- (void)deleteAll __attribute__((swift_name("deleteAll()")));
- (id<SharedLibrary_baseBaseRealmObject> _Nullable)findLatestObj:(id<SharedLibrary_baseBaseRealmObject>)obj __attribute__((swift_name("findLatest(obj:)")));
@end

__attribute__((swift_name("Library_baseConfiguration")))
@protocol SharedLibrary_baseConfiguration
@required
@property (readonly) id<SharedLibrary_baseCompactOnLaunchCallback> _Nullable compactOnLaunchCallback __attribute__((swift_name("compactOnLaunchCallback")));
@property (readonly) SharedKotlinByteArray * _Nullable encryptionKey __attribute__((swift_name("encryptionKey")));
@property (readonly) BOOL inMemory __attribute__((swift_name("inMemory")));
@property (readonly) id<SharedLibrary_baseInitialDataCallback> _Nullable initialDataCallback __attribute__((swift_name("initialDataCallback")));
@property (readonly) SharedLibrary_baseInitialRealmFileConfiguration * _Nullable initialRealmFileConfiguration __attribute__((swift_name("initialRealmFileConfiguration")));
@property (readonly) SharedLibrary_baseLogConfiguration *log __attribute__((swift_name("log"))) __attribute__((deprecated("Use io.realm.kotlin.log.RealmLog instead.")));
@property (readonly) int64_t maxNumberOfActiveVersions __attribute__((swift_name("maxNumberOfActiveVersions")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@property (readonly, getter=schema_) NSSet<id<SharedKotlinKClass>> *schema __attribute__((swift_name("schema")));
@property (readonly, getter=schemaVersion_) int64_t schemaVersion __attribute__((swift_name("schemaVersion")));
@end

__attribute__((swift_name("Library_baseRealmElementQuery")))
@protocol SharedLibrary_baseRealmElementQuery <SharedLibrary_baseDeleteable>
@required
- (id<SharedKotlinx_coroutines_coreFlow>)asFlow __attribute__((swift_name("asFlow()")));
- (NSArray<id<SharedLibrary_baseBaseRealmObject>> *)find __attribute__((swift_name("find()")));
@end

__attribute__((swift_name("Library_baseRealmQuery")))
@protocol SharedLibrary_baseRealmQuery <SharedLibrary_baseRealmElementQuery>
@required
- (id<SharedLibrary_baseRealmScalarQuery>)count __attribute__((swift_name("count()")));
- (NSString *)description_ __attribute__((swift_name("description_()")));
- (id<SharedLibrary_baseRealmQuery>)distinctProperty:(NSString *)property extraProperties:(SharedKotlinArray<NSString *> *)extraProperties __attribute__((swift_name("distinct(property:extraProperties:)")));
- (id<SharedLibrary_baseRealmSingleQuery>)first __attribute__((swift_name("first()")));
- (id<SharedLibrary_baseRealmQuery>)limitLimit:(int32_t)limit __attribute__((swift_name("limit(limit:)")));
- (id<SharedLibrary_baseRealmScalarNullableQuery>)maxProperty:(NSString *)property type:(id<SharedKotlinKClass>)type __attribute__((swift_name("max(property:type:)")));
- (id<SharedLibrary_baseRealmScalarNullableQuery>)minProperty:(NSString *)property type:(id<SharedKotlinKClass>)type __attribute__((swift_name("min(property:type:)")));
- (id<SharedLibrary_baseRealmQuery>)queryFilter:(NSString *)filter arguments:(SharedKotlinArray<id> *)arguments __attribute__((swift_name("query(filter:arguments:)")));
- (id<SharedLibrary_baseRealmQuery>)sortPropertyAndSortOrder:(SharedKotlinPair<NSString *, SharedLibrary_baseSort *> *)propertyAndSortOrder additionalPropertiesAndOrders:(SharedKotlinArray<SharedKotlinPair<NSString *, SharedLibrary_baseSort *> *> *)additionalPropertiesAndOrders __attribute__((swift_name("sort(propertyAndSortOrder:additionalPropertiesAndOrders:)")));
- (id<SharedLibrary_baseRealmQuery>)sortProperty:(NSString *)property sortOrder:(SharedLibrary_baseSort *)sortOrder __attribute__((swift_name("sort(property:sortOrder:)")));
- (id<SharedLibrary_baseRealmScalarQuery>)sumProperty:(NSString *)property type:(id<SharedKotlinKClass>)type __attribute__((swift_name("sum(property:type:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol SharedKotlinKClass <SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("Library_baseRealmSchema")))
@protocol SharedLibrary_baseRealmSchema
@required
- (id<SharedLibrary_baseRealmClass> _Nullable)getClassName:(NSString *)className __attribute__((swift_name("get(className:)")));
@property (readonly) id classes __attribute__((swift_name("classes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Library_baseVersionId")))
@interface SharedLibrary_baseVersionId : SharedBase <SharedKotlinComparable>
- (instancetype)initWithVersion:(int64_t)version __attribute__((swift_name("init(version:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(SharedLibrary_baseVersionId *)other __attribute__((swift_name("compareTo(other:)")));
- (SharedLibrary_baseVersionId *)doCopyVersion:(int64_t)version __attribute__((swift_name("doCopy(version:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SharedKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<SharedKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SharedKotlinx_serialization_coreSerializersModule : SharedBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<SharedKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<SharedKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol SharedKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SharedKotlinx_serialization_coreSerialKind : SharedBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SharedKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<SharedKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedKotlinNothing : SharedBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonBinarySubType")))
@interface SharedKbsonBsonBinarySubType : SharedKotlinEnum<SharedKbsonBsonBinarySubType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKbsonBsonBinarySubType *binary __attribute__((swift_name("binary")));
@property (class, readonly) SharedKbsonBsonBinarySubType *function __attribute__((swift_name("function")));
@property (class, readonly) SharedKbsonBsonBinarySubType *oldBinary __attribute__((swift_name("oldBinary")));
@property (class, readonly) SharedKbsonBsonBinarySubType *uuidLegacy __attribute__((swift_name("uuidLegacy")));
@property (class, readonly) SharedKbsonBsonBinarySubType *uuidStandard __attribute__((swift_name("uuidStandard")));
@property (class, readonly) SharedKbsonBsonBinarySubType *md5 __attribute__((swift_name("md5")));
@property (class, readonly) SharedKbsonBsonBinarySubType *encrypted __attribute__((swift_name("encrypted")));
@property (class, readonly) SharedKbsonBsonBinarySubType *column __attribute__((swift_name("column")));
@property (class, readonly) SharedKbsonBsonBinarySubType *userDefined __attribute__((swift_name("userDefined")));
+ (SharedKotlinArray<SharedKbsonBsonBinarySubType *> *)values __attribute__((swift_name("values()")));
@property (readonly) int8_t value_ __attribute__((swift_name("value_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonBinary.Companion")))
@interface SharedKbsonBsonBinaryCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonBinaryCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonBoolean.Companion")))
@interface SharedKbsonBsonBooleanCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonBooleanCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedKbsonBsonBoolean *)valueOfValue:(BOOL)value __attribute__((swift_name("valueOf(value:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
@property (readonly) SharedKbsonBsonBoolean *FALSE_VALUE __attribute__((swift_name("FALSE_VALUE")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
@property (readonly) SharedKbsonBsonBoolean *TRUE_VALUE __attribute__((swift_name("TRUE_VALUE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonDBPointer.Companion")))
@interface SharedKbsonBsonDBPointerCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonDBPointerCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonDateTime.Companion")))
@interface SharedKbsonBsonDateTimeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonDateTimeCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonDecimal128.Companion")))
@interface SharedKbsonBsonDecimal128Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonDecimal128Companion *shared __attribute__((swift_name("shared")));
- (SharedKbsonBsonDecimal128 *)fromIEEE754BIDEncodingHigh:(uint64_t)high low:(uint64_t)low __attribute__((swift_name("fromIEEE754BIDEncoding(high:low:)")));
- (SharedKbsonBsonDecimal128 *)invokeValue:(NSString *)value __attribute__((swift_name("invoke(value:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) SharedKbsonBsonDecimal128 *NEGATIVE_INFINITY __attribute__((swift_name("NEGATIVE_INFINITY")));
@property (readonly) SharedKbsonBsonDecimal128 *NEGATIVE_NaN __attribute__((swift_name("NEGATIVE_NaN")));
@property (readonly) SharedKbsonBsonDecimal128 *NEGATIVE_ZERO __attribute__((swift_name("NEGATIVE_ZERO")));
@property (readonly) SharedKbsonBsonDecimal128 *NaN __attribute__((swift_name("NaN")));
@property (readonly) SharedKbsonBsonDecimal128 *POSITIVE_INFINITY __attribute__((swift_name("POSITIVE_INFINITY")));
@property (readonly) SharedKbsonBsonDecimal128 *POSITIVE_ZERO __attribute__((swift_name("POSITIVE_ZERO")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonDouble.Companion")))
@interface SharedKbsonBsonDoubleCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonDoubleCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonInt32.Companion")))
@interface SharedKbsonBsonInt32Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonInt32Companion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonInt64.Companion")))
@interface SharedKbsonBsonInt64Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonInt64Companion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonJavaScript.Companion")))
@interface SharedKbsonBsonJavaScriptCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonJavaScriptCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonJavaScriptWithScope.Companion")))
@interface SharedKbsonBsonJavaScriptWithScopeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonJavaScriptWithScopeCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonRegularExpression.Companion")))
@interface SharedKbsonBsonRegularExpressionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonRegularExpressionCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonString.Companion")))
@interface SharedKbsonBsonStringCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonStringCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonSymbol.Companion")))
@interface SharedKbsonBsonSymbolCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonSymbolCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KbsonBsonTimestamp.Companion")))
@interface SharedKbsonBsonTimestampCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKbsonBsonTimestampCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface SharedKotlinByteIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Library_baseUpdatePolicy")))
@interface SharedLibrary_baseUpdatePolicy : SharedKotlinEnum<SharedLibrary_baseUpdatePolicy *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedLibrary_baseUpdatePolicy *error __attribute__((swift_name("error")));
@property (class, readonly) SharedLibrary_baseUpdatePolicy *all __attribute__((swift_name("all")));
+ (SharedKotlinArray<SharedLibrary_baseUpdatePolicy *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("Library_baseCompactOnLaunchCallback")))
@protocol SharedLibrary_baseCompactOnLaunchCallback
@required
- (BOOL)shouldCompactTotalBytes:(int64_t)totalBytes usedBytes:(int64_t)usedBytes __attribute__((swift_name("shouldCompact(totalBytes:usedBytes:)")));
@end

__attribute__((swift_name("Library_baseInitialDataCallback")))
@protocol SharedLibrary_baseInitialDataCallback
@required
- (void)write:(id<SharedLibrary_baseMutableRealm>)receiver __attribute__((swift_name("write(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Library_baseInitialRealmFileConfiguration")))
@interface SharedLibrary_baseInitialRealmFileConfiguration : SharedBase
- (instancetype)initWithAssetFile:(NSString *)assetFile checksum:(NSString * _Nullable)checksum __attribute__((swift_name("init(assetFile:checksum:)"))) __attribute__((objc_designated_initializer));
- (SharedLibrary_baseInitialRealmFileConfiguration *)doCopyAssetFile:(NSString *)assetFile checksum:(NSString * _Nullable)checksum __attribute__((swift_name("doCopy(assetFile:checksum:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *assetFile __attribute__((swift_name("assetFile")));
@property (readonly) NSString * _Nullable checksum __attribute__((swift_name("checksum")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Library_baseLogConfiguration")))
@interface SharedLibrary_baseLogConfiguration : SharedBase
- (instancetype)initWithLevel:(SharedLibrary_baseLogLevel *)level loggers:(NSArray<id<SharedLibrary_baseRealmLogger>> *)loggers __attribute__((swift_name("init(level:loggers:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use io.realm.kotlin.log.RealmLog instead.")));
- (SharedLibrary_baseLogConfiguration *)doCopyLevel:(SharedLibrary_baseLogLevel *)level loggers:(NSArray<id<SharedLibrary_baseRealmLogger>> *)loggers __attribute__((swift_name("doCopy(level:loggers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedLibrary_baseLogLevel *level __attribute__((swift_name("level")));
@property (readonly) NSArray<id<SharedLibrary_baseRealmLogger>> *loggers __attribute__((swift_name("loggers")));
@end

__attribute__((swift_name("Library_baseRealmScalarQuery")))
@protocol SharedLibrary_baseRealmScalarQuery
@required
- (id<SharedKotlinx_coroutines_coreFlow>)asFlow __attribute__((swift_name("asFlow()")));
- (id _Nullable)find __attribute__((swift_name("find()")));
@end

__attribute__((swift_name("Library_baseRealmSingleQuery")))
@protocol SharedLibrary_baseRealmSingleQuery <SharedLibrary_baseDeleteable>
@required
- (id<SharedKotlinx_coroutines_coreFlow>)asFlow __attribute__((swift_name("asFlow()")));
- (id<SharedLibrary_baseBaseRealmObject> _Nullable)find __attribute__((swift_name("find()")));
@end

__attribute__((swift_name("Library_baseRealmScalarNullableQuery")))
@protocol SharedLibrary_baseRealmScalarNullableQuery <SharedLibrary_baseRealmScalarQuery>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Library_baseSort")))
@interface SharedLibrary_baseSort : SharedKotlinEnum<SharedLibrary_baseSort *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedLibrary_baseSort *ascending __attribute__((swift_name("ascending")));
@property (class, readonly) SharedLibrary_baseSort *descending __attribute__((swift_name("descending")));
+ (SharedKotlinArray<SharedLibrary_baseSort *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface SharedKotlinPair<__covariant A, __covariant B> : SharedBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

__attribute__((swift_name("Library_baseRealmClass")))
@protocol SharedLibrary_baseRealmClass
@required
- (id<SharedLibrary_baseRealmProperty> _Nullable)getKey:(NSString *)key __attribute__((swift_name("get(key:)")));
@property (readonly) BOOL isEmbedded __attribute__((swift_name("isEmbedded"))) __attribute__((deprecated("This property has been deprecated.")));
@property (readonly) SharedLibrary_baseRealmClassKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) id<SharedLibrary_baseRealmProperty> _Nullable primaryKey __attribute__((swift_name("primaryKey")));
@property (readonly) id properties __attribute__((swift_name("properties")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SharedKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass provider:(id<SharedKotlinx_serialization_coreKSerializer> (^)(NSArray<id<SharedKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass serializer:(id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SharedKotlinKClass>)baseClass actualClass:(id<SharedKotlinKClass>)actualClass actualSerializer:(id<SharedKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<SharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<SharedKotlinKClass>)baseClass defaultSerializerProvider:(id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Library_baseLogLevel")))
@interface SharedLibrary_baseLogLevel : SharedKotlinEnum<SharedLibrary_baseLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedLibrary_baseLogLevel *all __attribute__((swift_name("all")));
@property (class, readonly) SharedLibrary_baseLogLevel *trace __attribute__((swift_name("trace")));
@property (class, readonly) SharedLibrary_baseLogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) SharedLibrary_baseLogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) SharedLibrary_baseLogLevel *warn __attribute__((swift_name("warn")));
@property (class, readonly) SharedLibrary_baseLogLevel *error __attribute__((swift_name("error")));
@property (class, readonly) SharedLibrary_baseLogLevel *wtf __attribute__((swift_name("wtf")));
@property (class, readonly) SharedLibrary_baseLogLevel *none __attribute__((swift_name("none")));
+ (SharedKotlinArray<SharedLibrary_baseLogLevel *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t priority __attribute__((swift_name("priority")));
@end

__attribute__((swift_name("Library_baseRealmLogger")))
@protocol SharedLibrary_baseRealmLogger
@required
- (void)logLevel:(SharedLibrary_baseLogLevel *)level message:(NSString *)message __attribute__((swift_name("log(level:message:)")));
- (void)logLevel:(SharedLibrary_baseLogLevel *)level throwable:(SharedKotlinThrowable * _Nullable)throwable message:(NSString * _Nullable)message args:(SharedKotlinArray<id> *)args __attribute__((swift_name("log(level:throwable:message:args:)")));
@property (readonly) SharedLibrary_baseLogLevel *level __attribute__((swift_name("level")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((swift_name("Library_baseRealmProperty")))
@protocol SharedLibrary_baseRealmProperty
@required
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) id<SharedLibrary_baseRealmPropertyType> type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Library_baseRealmClassKind")))
@interface SharedLibrary_baseRealmClassKind : SharedKotlinEnum<SharedLibrary_baseRealmClassKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedLibrary_baseRealmClassKind *standard __attribute__((swift_name("standard")));
@property (class, readonly) SharedLibrary_baseRealmClassKind *embedded __attribute__((swift_name("embedded")));
@property (class, readonly) SharedLibrary_baseRealmClassKind *asymmetric __attribute__((swift_name("asymmetric")));
+ (SharedKotlinArray<SharedLibrary_baseRealmClassKind *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("Library_baseRealmPropertyType")))
@protocol SharedLibrary_baseRealmPropertyType
@required
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) SharedLibrary_baseRealmStorageType *storageType __attribute__((swift_name("storageType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Library_baseRealmStorageType")))
@interface SharedLibrary_baseRealmStorageType : SharedKotlinEnum<SharedLibrary_baseRealmStorageType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedLibrary_baseRealmStorageType *bool_ __attribute__((swift_name("bool_")));
@property (class, readonly) SharedLibrary_baseRealmStorageType *int_ __attribute__((swift_name("int_")));
@property (class, readonly) SharedLibrary_baseRealmStorageType *string __attribute__((swift_name("string")));
@property (class, readonly) SharedLibrary_baseRealmStorageType *binary __attribute__((swift_name("binary")));
@property (class, readonly) SharedLibrary_baseRealmStorageType *object __attribute__((swift_name("object")));
@property (class, readonly) SharedLibrary_baseRealmStorageType *float_ __attribute__((swift_name("float_")));
@property (class, readonly) SharedLibrary_baseRealmStorageType *double_ __attribute__((swift_name("double_")));
@property (class, readonly) SharedLibrary_baseRealmStorageType *decimal128 __attribute__((swift_name("decimal128")));
@property (class, readonly) SharedLibrary_baseRealmStorageType *timestamp __attribute__((swift_name("timestamp")));
@property (class, readonly) SharedLibrary_baseRealmStorageType *objectId __attribute__((swift_name("objectId")));
@property (class, readonly) SharedLibrary_baseRealmStorageType *uuid __attribute__((swift_name("uuid")));
@property (class, readonly) SharedLibrary_baseRealmStorageType *any __attribute__((swift_name("any")));
+ (SharedKotlinArray<SharedLibrary_baseRealmStorageType *> *)values __attribute__((swift_name("values()")));
@property (readonly) id<SharedKotlinKClass> kClass __attribute__((swift_name("kClass")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
