//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
// UUID: 3D33954D-B8FF-313D-AE45-05DEC67DD980
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 154.0.0.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol NSCoding
- (id)initWithCoder:(NSCoder *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
@end

@protocol NSCopying
- (id)copyWithZone:(struct _NSZone *)arg1;
@end

@protocol NSKeyedUnarchiverDelegate <NSObject>

@optional
- (void)unarchiverDidFinish:(NSKeyedUnarchiver *)arg1;
- (void)unarchiverWillFinish:(NSKeyedUnarchiver *)arg1;
- (void)unarchiver:(NSKeyedUnarchiver *)arg1 willReplaceObject:(id)arg2 withObject:(id)arg3;
- (id)unarchiver:(NSKeyedUnarchiver *)arg1 didDecodeObject:(id)arg2;
- (Class)unarchiver:(NSKeyedUnarchiver *)arg1 cannotDecodeObjectOfClassName:(NSString *)arg2 originalClasses:(NSArray *)arg3;
@end

@protocol NSObject
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(Protocol *)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (_Bool)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@protocol NSSecureCoding <NSCoding>
+ (_Bool)supportsSecureCoding;
@end

@protocol SUAssetMatcher <NSObject>
@property(readonly, nonatomic) NSString *assetType;
- (ASAsset *)findMatchFromCandidates:(NSArray *)arg1 error:(id *)arg2;
@end

@protocol SUDownloadPolicy <NSObject>
@property(retain, nonatomic) SUDescriptor *descriptor;
- (_Bool)isDownloadableForCurrentNetworkConditions:(long long *)arg1 cellularFeesApply:(_Bool *)arg2 powerRequired:(_Bool *)arg3;
- (_Bool)isDownloadableForCurrentNetworkConditions:(long long *)arg1 cellularFeesApply:(_Bool *)arg2;
- (_Bool)isDownloadAllowableForWiFi;
- (_Bool)isDownloadAllowableForCellularRoaming;
- (_Bool)isDownloadAllowableForCellular2G;
- (_Bool)isDownloadAllowableForCellular;
- (_Bool)isDownloadFreeForCellular;
- (_Bool)isDownloadable;
- (_Bool)isPowerRequired;
- (_Bool)hasEnoughDiskSpace;
- (_Bool)isSamePolicy:(id <SUDownloadPolicy>)arg1;
- (id)initWithDescriptor:(SUDescriptor *)arg1;
@end

@protocol SUManagerClientInterface
- (void)installDidFinish:(SUDescriptor *)arg1;
- (void)installDidFail:(SUDescriptor *)arg1 withError:(NSError *)arg2;
- (void)installDidStart:(SUDescriptor *)arg1;
- (void)downloadDidFinish:(SUDownload *)arg1;
- (void)downloadDidFail:(SUDownload *)arg1 withError:(NSError *)arg2;
- (void)downloadProgressDidChange:(SUDownload *)arg1;
- (void)downloadDidStart:(SUDownload *)arg1;
- (void)downloadWasInvalidatedForNewUpdateAvailable:(SUDescriptor *)arg1;
- (void)automaticDownloadDidFailToStartForNewUpdateAvailable:(SUDescriptor *)arg1 withError:(NSError *)arg2;
- (void)scanDidCompleteWithNewUpdateAvailable:(SUDescriptor *)arg1 error:(NSError *)arg2;
- (void)scanRequestDidFinishForOptions:(SUScanOptions *)arg1 update:(SUDescriptor *)arg2 error:(NSError *)arg3;
- (void)scanRequestDidStartForOptions:(SUScanOptions *)arg1;
@end

@protocol SUManagerServerInterface
- (void)setClientType:(int)arg1 withResult:(void (^)(_Bool, NSError *))arg2;
- (void)installUpdate:(void (^)(_Bool, NSError *))arg1;
- (void)isUpdateReadyForInstallation:(void (^)(_Bool, NSError *))arg1;
- (void)download:(void (^)(SUDownload *, NSError *))arg1;
- (void)updateDownloadMetadata:(SUDownloadMetadata *)arg1 withResult:(void (^)(_Bool, NSError *))arg2;
- (void)resumeDownload:(void (^)(_Bool, NSError *))arg1;
- (void)pauseDownload:(void (^)(_Bool, NSError *))arg1;
- (void)purgeDownload:(void (^)(_Bool, NSError *))arg1;
- (void)cancelDownload:(void (^)(_Bool, NSError *))arg1;
- (void)startDownloadWithMetadata:(SUDownloadMetadata *)arg1 withResult:(void (^)(_Bool, NSError *))arg2;
- (void)startDownload:(void (^)(_Bool, NSError *))arg1;
- (void)isDownloading:(void (^)(_Bool, NSError *))arg1;
- (void)scanForUpdates:(SUScanOptions *)arg1 withResult:(void (^)(SUDescriptor *, NSError *))arg2;
- (void)isScanning:(void (^)(_Bool, NSError *))arg1;
@end

@interface ASAsset (SUS)
- (void)cleanupAsset;
- (void)cancelDownloadIfNecessary;
- (_Bool)isEmergencyUpdate;
- (_Bool)isInstalled;
- (_Bool)isDownloading;
- (_Bool)isDownloadingOrInstalled;
@end

@interface NSDictionary (SU)
- (id)safeObjectForKey:(id)arg1 ofClass:(Class)arg2;
@end

@interface NSMutableDictionary (SU)
- (void)setSafeObject:(id)arg1 forKey:(id)arg2;
@end

@interface NSString (SUS)
- (long long)compareNumerically:(id)arg1;
@end

@interface SUAssetStateMatcher : NSObject <SUAssetMatcher>
{
    NSString *_assetType;
    int _interestedStates;
}

@property(readonly, nonatomic) int interestedStates; // @synthesize interestedStates=_interestedStates;
@property(readonly, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
- (_Bool)_matchesFilterType:(id)arg1;
- (id)_findMatchFromCandidates:(id)arg1 error:(id *)arg2;
- (id)findMatchFromCandidates:(id)arg1 error:(id *)arg2;
- (id)initWithType:(id)arg1 interestedStates:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface SUAssetSupport : NSObject
{
}

+ (id)assetDownloadOptionsFromMetadata:(id)arg1 descriptor:(id)arg2 priority:(int)arg3 forBrain:(_Bool)arg4;
+ (id)assetDownloadOptionsForDocumentation;
+ (id)defaultAssetDownloadOptionsWithPriority:(int)arg1;
+ (id)getInstalledDocumentationAssetFromSoftwareUpdateAssetIfExists:(id)arg1;
+ (id)getLocalDefaultSoftwareUpdateAssetIfExists;
+ (void)purgeMSUUpdate:(CDUnknownBlockType)arg1;
+ (id)findAssetWithMatcher:(id)arg1 localSearch:(_Bool)arg2 error:(id *)arg3;
+ (void)cleanupAllSoftwareUpdateAndRelatedAssets;
+ (void)cleanupAllSoftwareUpdateAssets;
+ (void)_cleanupAllAssetsOfType:(id)arg1;
+ (id)tryCreateDocumentationFromDocumentationAsset:(id)arg1;
+ (id)tryCreateDescriptorFromSoftwareUpdateAsset:(id)arg1;

@end

@interface SUDefaultDownloadPolicy : NSObject <SUDownloadPolicy>
{
    SUDescriptor *_descriptor;
    SUCarrierDownloadPolicyProperties *_carrierPolicy;
    SUNetworkMonitor *_networkMonitor;
    _Bool _cellularCapable;
}

@property(retain, nonatomic) SUNetworkMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property(nonatomic, getter=isCellularCapable) _Bool cellularCapable; // @synthesize cellularCapable=_cellularCapable;
@property(retain, nonatomic) SUCarrierDownloadPolicyProperties *carrierPolicy; // @synthesize carrierPolicy=_carrierPolicy;
@property(retain, nonatomic) SUDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (_Bool)_isDownloadableForNetworkType:(int)arg1 error:(long long *)arg2 cellularFeesApply:(_Bool *)arg3 powerRequired:(_Bool *)arg4;
- (_Bool)isDownloadAllowableForCellular2G;
- (_Bool)isDownloadAllowableForCellular;
- (_Bool)isDownloadableForCurrentNetworkConditions:(long long *)arg1 cellularFeesApply:(_Bool *)arg2 powerRequired:(_Bool *)arg3;
- (_Bool)isDownloadableForCurrentNetworkConditions:(long long *)arg1 cellularFeesApply:(_Bool *)arg2;
- (_Bool)isDownloadFreeForCellular;
- (_Bool)isDownloadAllowableForCellularRoaming;
- (_Bool)isDownloadAllowableForWiFi;
- (_Bool)isDownloadable;
- (_Bool)isPowerRequired;
- (_Bool)hasEnoughDiskSpace;
- (_Bool)isSamePolicy:(id)arg1;
- (_Bool)_isCellularCapable;
- (id)_stringForBool:(_Bool)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithDescriptor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface SUAutoDownloadPolicy : SUDefaultDownloadPolicy
{
}

- (id)computeTimeOfWifiOnlyPeriodEndFromDate:(id)arg1;
- (unsigned long long)wifiOnlyPeriodInDays;
- (_Bool)isDownloadAllowableForCellular;
- (id)initWithDescriptor:(id)arg1;
- (_Bool)isPowerRequired;

@end

@interface SUCarrierDownloadPolicyProperties : NSObject <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_numberForKey:(id)arg1;
- (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (unsigned long long)_unsignedIntegerForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)_longLongForKey:(id)arg1 defaultValue:(long long)arg2;
- (_Bool)_boolForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (id)_carrierSUProperties;
- (_Bool)_isValidHour:(long long)arg1;
- (long long)peakEndHour;
- (long long)peakStartHour;
- (unsigned long long)numberOfDaysToWaitForCellularAutoDownload;
- (long long)maximumDownloadSizeInBytes;
- (_Bool)isAutoDownloadAllowable;
- (_Bool)isDownloadAllowableOver2G;
- (_Bool)isDownloadAllowable;
- (_Bool)isDownloadFree;

@end

@interface SUDefaultRoamingRestrictedDownloadPolicy : SUDefaultDownloadPolicy
{
}

- (_Bool)isDownloadAllowableForCellularRoaming;

@end

@interface SUDefaultWiFiOnlyDownloadPolicy : SUDefaultDownloadPolicy
{
}

+ (unsigned long long)wifiOnlyPeriodInDaysForUpdate:(id)arg1;
- (_Bool)isDownloadAllowableForCellular;
- (id)initWithDescriptor:(id)arg1;

@end

@interface SUDescriptor : NSObject <NSSecureCoding, NSCopying>
{
    SUDocumentation *_documentation;
    NSString *_publisher;
    NSString *_humanReadableUpdateName;
    NSString *_productSystemName;
    NSString *_productVersion;
    NSString *_productBuildVersion;
    unsigned long long _downloadSize;
    unsigned long long _unarchiveSize;
    unsigned long long _msuPrepareSize;
    unsigned long long _installationSize;
    int _updateType;
    _Bool _autoDownloadAllowableForCellular;
    _Bool _downloadAllowableForCellular;
    _Bool _downloadable;
    _Bool _downloadableOverCellular;
    _Bool _streamingZipCapable;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=_isStreamingZipCapable, setter=_setStreamingZipCapable:) _Bool streamingZipCapable; // @synthesize streamingZipCapable=_streamingZipCapable;
@property(nonatomic, getter=isDownloadableOverCellular) _Bool downloadableOverCellular; // @synthesize downloadableOverCellular=_downloadableOverCellular;
@property(nonatomic, getter=isDownloadable) _Bool downloadable; // @synthesize downloadable=_downloadable;
@property(nonatomic) _Bool autoDownloadAllowableForCellular; // @synthesize autoDownloadAllowableForCellular=_autoDownloadAllowableForCellular;
@property(retain, nonatomic) SUDocumentation *documentation; // @synthesize documentation=_documentation;
@property(nonatomic) int updateType; // @synthesize updateType=_updateType;
@property(nonatomic, getter=_msuPrepareSize, setter=_setMsuPrepareSize:) unsigned long long msuPrepareSize; // @synthesize msuPrepareSize=_msuPrepareSize;
@property(nonatomic, getter=_unarchiveSize, setter=_setUnarchiveSize:) unsigned long long unarchiveSize; // @synthesize unarchiveSize=_unarchiveSize;
@property(nonatomic) unsigned long long installationSize; // @synthesize installationSize=_installationSize;
@property(nonatomic) unsigned long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(retain, nonatomic) NSString *productBuildVersion; // @synthesize productBuildVersion=_productBuildVersion;
@property(retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(retain, nonatomic) NSString *productSystemName; // @synthesize productSystemName=_productSystemName;
@property(retain, nonatomic) NSString *publisher; // @synthesize publisher=_publisher;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_buildCompareKey;
- (_Bool)_hasValue:(id)arg1;
- (_Bool)isValidDescriptor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)totalRequiredFreeSpace;
- (unsigned long long)preparationSize;
- (id)humanReadableUpdateName;
- (void)dealloc;
- (id)init;

@end

@interface SUDocumentation : NSObject <NSSecureCoding, NSCopying>
{
    NSURL *_baseDocumentationURL;
    NSString *_releaseNotesSummaryFileName;
    NSString *_releaseNotesFileName;
    NSString *_licenseAgreementFileName;
    NSString *_primaryLanguage;
    NSString *_humanReadableUpdateName;
    NSURL *_releaseNotesSummaryURL;
    NSURL *_releaseNotesURL;
    NSURL *_licenseAgreementURL;
    NSMutableDictionary *_cachedData;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *primaryLanguage; // @synthesize primaryLanguage=_primaryLanguage;
@property(retain, nonatomic) NSString *humanReadableUpdateName; // @synthesize humanReadableUpdateName=_humanReadableUpdateName;
@property(retain, nonatomic) NSURL *licenseAgreementURL; // @synthesize licenseAgreementURL=_licenseAgreementURL;
@property(retain, nonatomic) NSString *licenseAgreementFileName; // @synthesize licenseAgreementFileName=_licenseAgreementFileName;
@property(retain, nonatomic) NSURL *releaseNotesSummaryURL; // @synthesize releaseNotesSummaryURL=_releaseNotesSummaryURL;
@property(retain, nonatomic) NSString *releaseNotesSummaryFileName; // @synthesize releaseNotesSummaryFileName=_releaseNotesSummaryFileName;
@property(retain, nonatomic) NSURL *releaseNotesURL; // @synthesize releaseNotesURL=_releaseNotesURL;
@property(retain, nonatomic) NSString *releaseNotesFileName; // @synthesize releaseNotesFileName=_releaseNotesFileName;
@property(retain, nonatomic) NSURL *baseDocumentationURL; // @synthesize baseDocumentationURL=_baseDocumentationURL;
- (id)localizedDocumentationStringFromBundle:(struct __CFBundle *)arg1 key:(id)arg2;
- (id)_localizedResourceURLForDocumentationAsset:(id)arg1 resource:(id)arg2;
- (id)_cachedDocumentationDataForURL:(id)arg1;
- (void)_resetIfNecessary;
- (id)localizedURLFromBundle:(struct __CFBundle *)arg1 resource:(id)arg2;
- (id)localizedStringFromBundle:(struct __CFBundle *)arg1 key:(id)arg2;
- (void)_clearTransientDocumentationData;
- (id)description;
- (_Bool)hasAnyDocumentation;
- (id)licenseAgreement;
- (id)releaseNotes;
- (id)releaseNotesSummary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentationURL:(id)arg1;
- (id)init;
- (void)dealloc;

@end

@interface SUDocumentationAssetMatcher : SUAssetStateMatcher
{
    ASAsset *_suAsset;
}

+ (id)matcherDocumentationFromAsset:(id)arg1;
+ (id)matcherForInstalledDocumentationFromAsset:(id)arg1;
- (id)_sortedMatcherPredicatesFromSoftwareUpdateAsset:(id)arg1;
- (id)_queryPredicateForProperties:(id)arg1;
- (id)_findMatchFromCandidates:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithSoftwareUpdateAsset:(id)arg1 limitingToStates:(int)arg2;
- (id)initWithSoftwareUpdateAsset:(id)arg1;

@end

@interface SUDownload : NSObject <NSSecureCoding, NSCopying>
{
    SUDescriptor *_descriptor;
    SUOperationProgress *_progress;
    SUDownloadMetadata *_metadata;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) SUDownloadMetadata *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) SUDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(retain, nonatomic) SUOperationProgress *progress; // @synthesize progress=_progress;
- (id)description;
- (unsigned long long)totalSpaceConsumed;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

@interface SUDownloadMetadata : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _autoDownload;
    _Bool _enabledFor2G;
    _Bool _enabledFor3G;
    _Bool _enabledFor4G;
    _Bool _enabledForCellularRoaming;
    _Bool _enabledForWifi;
    _Bool _enabledOnBatteryPower;
    _Bool _enforceWifiOnlyOverride;
    int _activeDownloadPolicyType;
    int _downloadFeeAgreementStatus;
    int _termsAndConditionsAgreementStatus;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool enforceWifiOnlyOverride; // @synthesize enforceWifiOnlyOverride=_enforceWifiOnlyOverride;
@property(nonatomic, getter=isEnabledOnBatteryPower) _Bool enabledOnBatteryPower; // @synthesize enabledOnBatteryPower=_enabledOnBatteryPower;
@property(nonatomic, getter=isEnabledForCellularRoaming) _Bool enabledForCellularRoaming; // @synthesize enabledForCellularRoaming=_enabledForCellularRoaming;
@property(nonatomic, getter=isEnabledForWifi) _Bool enabledForWifi; // @synthesize enabledForWifi=_enabledForWifi;
@property(nonatomic, getter=isEnabledFor4G) _Bool enabledFor4G; // @synthesize enabledFor4G=_enabledFor4G;
@property(nonatomic, getter=isEnabledFor3G) _Bool enabledFor3G; // @synthesize enabledFor3G=_enabledFor3G;
@property(nonatomic, getter=isEnabledFor2G) _Bool enabledFor2G; // @synthesize enabledFor2G=_enabledFor2G;
@property(nonatomic) int activeDownloadPolicyType; // @synthesize activeDownloadPolicyType=_activeDownloadPolicyType;
@property(nonatomic) int termsAndConditionsAgreementStatus; // @synthesize termsAndConditionsAgreementStatus=_termsAndConditionsAgreementStatus;
@property(nonatomic) int downloadFeeAgreementStatus; // @synthesize downloadFeeAgreementStatus=_downloadFeeAgreementStatus;
@property(nonatomic, getter=isAutoDownload) _Bool autoDownload; // @synthesize autoDownload=_autoDownload;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)_stringForBool:(_Bool)arg1;
- (_Bool)isEnabledForNetworkType:(int)arg1;
- (_Bool)matchesDownloadPolicy:(id)arg1;
- (id)availableDownloadPolicyIfDifferentFromActive:(id)arg1;
- (id)activeDownloadPolicy:(id)arg1;
- (void)applyDownloadPolicy:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;

@end

@interface SUDownloadPolicy : SUDefaultDownloadPolicy
{
}

@end

@interface SUDownloadPolicyFactory : NSObject
{
}

+ (int)downloadPolicyTypeForClass:(id)arg1;
+ (id)downloadPolicyForType:(int)arg1 forDescriptor:(id)arg2;
+ (id)userDownloadPolicyForDescriptor:(id)arg1;
+ (id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2;
+ (id)_userDownloadPolicyFromCurrentPolicy:(id)arg1 descriptor:(id)arg2 networkMonitor:(id)arg3;

@end

@interface SUEmptyObject : NSObject <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

@interface SUManagerClient : NSObject <SUManagerClientInterface>
{
    NSXPCConnection *_serverConnection;
    id <SUManagerClientDelegate> _delegate;
    _Bool _connected;
    _Bool _serverIsExiting;
    int _clientType;
    _Bool _installing;
    SUDescriptor *_installDescriptor;
}

+ (_Bool)_shouldDisallowAvailabilityNotifications;
@property(retain, nonatomic) SUDescriptor *installDescriptor; // @synthesize installDescriptor=_installDescriptor;
@property(nonatomic) int clientType; // @synthesize clientType=_clientType;
@property(nonatomic) id <SUManagerClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)installDidFinish:(id)arg1;
- (void)installDidFail:(id)arg1 withError:(id)arg2;
- (void)installDidStart:(id)arg1;
- (void)downloadWasInvalidatedForNewUpdateAvailable:(id)arg1;
- (void)downloadDidFinish:(id)arg1;
- (void)downloadDidFail:(id)arg1 withError:(id)arg2;
- (void)downloadProgressDidChange:(id)arg1;
- (void)downloadDidStart:(id)arg1;
- (void)automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg1 withError:(id)arg2;
- (void)scanDidCompleteWithNewUpdateAvailable:(id)arg1 error:(id)arg2;
- (void)scanRequestDidFinishForOptions:(id)arg1 update:(id)arg2 error:(id)arg3;
- (void)scanRequestDidStartForOptions:(id)arg1;
- (void)noteServerExiting;
- (void)noteConnectionDropped;
- (void)connectToServerIfNecessary;
- (void)_invalidateConnection;
- (id)_remoteInterfaceWithErrorHandler:(CDUnknownBlockType)arg1 connectIfNecessary:(_Bool)arg2;
- (id)_remoteInterfaceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteInterface;
- (_Bool)isInstallationKeybagRequired;
- (_Bool)createInstallationKeybag:(id)arg1;
- (void)installUpdate:(CDUnknownBlockType)arg1;
- (void)isUpdateReadyForInstallation:(CDUnknownBlockType)arg1;
- (void)download:(CDUnknownBlockType)arg1;
- (void)purgeDownload:(CDUnknownBlockType)arg1;
- (void)updateDownloadMetadata:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)resumeDownload:(CDUnknownBlockType)arg1;
- (void)pauseDownload:(CDUnknownBlockType)arg1;
- (void)cancelDownload:(CDUnknownBlockType)arg1;
- (void)startDownloadWithMetadata:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)startDownload:(CDUnknownBlockType)arg1;
- (void)isDownloading:(CDUnknownBlockType)arg1;
- (void)scanForUpdates:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)isScanning:(CDUnknownBlockType)arg1;
- (void)_setClientType;
- (void)dealloc;
- (void)invalidate;
- (id)initWithDelegate:(id)arg1 clientType:(int)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

@interface SUManualDownloadPolicy : SUDefaultDownloadPolicy
{
    _Bool _downloadFreeForCellular;
    _Bool _downloadAllowableForCellular;
    _Bool _downloadAllowableForCellular2G;
    _Bool _downloadAllowableForCellularRoaming;
    _Bool _downloadAllowableForWiFi;
    _Bool _autoDownloadAllowableForCellular;
    _Bool _hasEnoughDiskSpace;
    _Bool _powerRequired;
    _Bool _downloadable;
    Class _fakeClass;
}

@property(nonatomic, getter=isDownloadAllowableForWiFi) _Bool downloadAllowableForWiFi; // @synthesize downloadAllowableForWiFi=_downloadAllowableForWiFi;
@property(nonatomic, getter=isDownloadAllowableForCellularRoaming) _Bool downloadAllowableForCellularRoaming; // @synthesize downloadAllowableForCellularRoaming=_downloadAllowableForCellularRoaming;
@property(nonatomic, getter=isDownloadAllowableForCellular2G) _Bool downloadAllowableForCellular2G; // @synthesize downloadAllowableForCellular2G=_downloadAllowableForCellular2G;
@property(nonatomic, getter=isDownloadAllowableForCellular) _Bool downloadAllowableForCellular; // @synthesize downloadAllowableForCellular=_downloadAllowableForCellular;
@property(nonatomic, getter=isDownloadFreeForCellular) _Bool downloadFreeForCellular; // @synthesize downloadFreeForCellular=_downloadFreeForCellular;
@property(nonatomic, getter=hasEnoughDiskSpace) _Bool hasEnoughDiskSpace; // @synthesize hasEnoughDiskSpace=_hasEnoughDiskSpace;
@property(nonatomic, getter=isPowerRequired) _Bool powerRequired; // @synthesize powerRequired=_powerRequired;
@property(nonatomic, getter=isDownloadable) _Bool downloadable; // @synthesize downloadable=_downloadable;
@property(retain, nonatomic) Class fakeClass; // @synthesize fakeClass=_fakeClass;
- (Class)class;
- (_Bool)superIsDownloadable;
- (id)init;

@end

@interface SUMutableDownloadMetadata : SUDownloadMetadata
{
}

- (void)applyDownloadPolicy:(id)arg1;
- (id)initWithMetadata:(id)arg1;

// Remaining properties
@property(nonatomic) int downloadFeeAgreementStatus; // @dynamic downloadFeeAgreementStatus;
@property(nonatomic) _Bool enforceWifiOnlyOverride; // @dynamic enforceWifiOnlyOverride;
@property(nonatomic) int termsAndConditionsAgreementStatus; // @dynamic termsAndConditionsAgreementStatus;

@end

@interface SUNetworkMonitor : NSObject
{
    struct __SCNetworkReachability *_reachability;
    NSHashTable *_observers;
    int _currentNetworkType;
    _Bool _roaming;
}

+ (void)setHoldsWiFiAssertion:(_Bool)arg1;
+ (_Bool)holdsWiFiAssertion;
+ (id)sharedInstance;
- (void)_operatorBundleChanged;
- (void)_carrierBundleChanged;
- (_Bool)_isCurrentlyRoaming;
- (_Bool)isCellularDataRoamingEnabled;
- (void)setCellularRoaming:(_Bool)arg1;
- (int)_networkTypeFromCurrentCellularData;
- (int)_networkTypeFromFlags:(unsigned int)arg1;
- (void)_initNetworkObservation;
- (void)setCurrentNetworkType:(int)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)isCellularRoaming;
- (_Bool)isNetworkTypeCellular:(int)arg1;
- (int)currentNetworkType;
- (void)dealloc;
- (id)init;

@end

@interface SUOperationProgress : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_phase;
    float _percentComplete;
    float _normalizedPercentComplete;
    double _timeRemaining;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double timeRemaining; // @synthesize timeRemaining=_timeRemaining;
@property(nonatomic) float normalizedPercentComplete; // @synthesize normalizedPercentComplete=_normalizedPercentComplete;
@property(nonatomic) float percentComplete; // @synthesize percentComplete=_percentComplete;
@property(retain, nonatomic) NSString *phase; // @synthesize phase=_phase;
- (id)description;
- (_Bool)isDone;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

@interface SUPreferences : NSObject
{
    int _logLevel;
    _Bool _disableUserWiFiOnlyPeriod;
    _Bool _disableBuildNumberComparison;
    _Bool _allowSameBuildUpdates;
    _Bool _disableAvailabilityAlerts;
    _Bool _disableAutoDownload;
}

+ (id)sharedInstance;
@property(readonly, nonatomic, getter=isAutoDownloadDisabled) _Bool disableAutoDownload; // @synthesize disableAutoDownload=_disableAutoDownload;
@property(readonly, nonatomic) _Bool disableAvailabilityAlerts; // @synthesize disableAvailabilityAlerts=_disableAvailabilityAlerts;
@property(readonly, nonatomic) _Bool allowSameBuildUpdates; // @synthesize allowSameBuildUpdates=_allowSameBuildUpdates;
@property(readonly, nonatomic) _Bool disableBuildNumberComparison; // @synthesize disableBuildNumberComparison=_disableBuildNumberComparison;
@property(readonly, nonatomic) _Bool disableUserWiFiOnlyPeriod; // @synthesize disableUserWiFiOnlyPeriod=_disableUserWiFiOnlyPeriod;
@property(readonly, nonatomic) int logLevel; // @synthesize logLevel=_logLevel;
- (void *)_copyPreferenceForKey:(struct __CFString *)arg1 ofType:(unsigned long long)arg2;
- (_Bool)_getBooleanPreferenceForKey:(id)arg1 withDefaultValue:(_Bool)arg2;
- (void)_loadPreferences;
- (int)_defaultLogLevel;
- (void)reload;
- (void)dealloc;
- (id)init;

@end

@interface SUScanOptions : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    _Bool _forced;
    NSMutableSet *_types;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSSet *types; // @synthesize types=_types;
@property(nonatomic, getter=isForced) _Bool forced; // @synthesize forced=_forced;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (void)clearTypes;
- (_Bool)findsAnyUpdate;
- (_Bool)containsType:(int)arg1;
- (void)removeType:(int)arg1;
- (void)addType:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;

@end

@interface SUSoftwareUpdateAssetMatcher : SUAssetStateMatcher
{
    NSString *_fromBuild;
    NSString *_fromVersion;
    NSString *_fromProductType;
    NSString *_fromReleaseType;
    _Bool _checkTatsu;
    SUPreferences *_preferences;
}

+ (id)matcherForCurrentDeviceWithInterestedStates:(int)arg1;
+ (id)matcherForCurrentDevice;
@property(retain, nonatomic) SUPreferences *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) _Bool compareWithTatsuForEligibility; // @synthesize compareWithTatsuForEligibility=_checkTatsu;
@property(readonly, nonatomic) NSString *fromReleaseType; // @synthesize fromReleaseType=_fromReleaseType;
@property(readonly, nonatomic) NSString *fromProductType; // @synthesize fromProductType=_fromProductType;
@property(readonly, nonatomic) NSString *fromVersion; // @synthesize fromVersion=_fromVersion;
@property(readonly, nonatomic) NSString *fromBuild; // @synthesize fromBuild=_fromBuild;
- (_Bool)_isPossibleSoftwareUpdate:(id)arg1;
- (_Bool)_isDeviceEligibleForUpdate:(id)arg1;
- (id)_copyMatchingAssetsAfterSortingAndFiltering:(id)arg1;
- (id)_createSortedAndFilteredAssetResults:(id)arg1 usingFirstKey:(id)arg2 secondKey:(id)arg3;
- (unsigned long long)_getIndexOfHighestVersionedAsset:(id)arg1 usingFirstKey:(id)arg2 secondKey:(id)arg3;
- (id)_findMatchFromCandidates:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithVersion:(id)arg1 build:(id)arg2 productType:(id)arg3 releaseType:(id)arg4 interestedStates:(int)arg5;

@end

@interface SUState : NSObject <NSKeyedUnarchiverDelegate>
{
    SUDownload *_lastDownload;
    SUDescriptor *_lastScannedDescriptor;
    NSDate *_lastScannedDescriptorTime;
    NSDate *_scheduledManualDownloadWifiPeriodEndTime;
    NSDate *_scheduledAutodownloadWifiPeriodEndTime;
    NSDate *_scheduledAutodownloadPolicyChangeTime;
    _Bool _autodownloadNeedsOneTimeRetry;
    NSString *_lastProductVersion;
    NSString *_lastProductBuild;
    NSString *_lastProductType;
    NSString *_lastReleaseType;
}

+ (id)currentState;
+ (id)statePath;
@property(retain, nonatomic) NSString *lastReleaseType; // @synthesize lastReleaseType=_lastReleaseType;
@property(retain, nonatomic) NSString *lastProductType; // @synthesize lastProductType=_lastProductType;
@property(retain, nonatomic) NSString *lastProductBuild; // @synthesize lastProductBuild=_lastProductBuild;
@property(retain, nonatomic) NSString *lastProductVersion; // @synthesize lastProductVersion=_lastProductVersion;
@property(nonatomic) _Bool autodownloadNeedsOneTimeRetry; // @synthesize autodownloadNeedsOneTimeRetry=_autodownloadNeedsOneTimeRetry;
@property(retain, nonatomic) NSDate *scheduledAutodownloadPolicyChangeTime; // @synthesize scheduledAutodownloadPolicyChangeTime=_scheduledAutodownloadPolicyChangeTime;
@property(retain, nonatomic) NSDate *scheduledAutodownloadWifiPeriodEndTime; // @synthesize scheduledAutodownloadWifiPeriodEndTime=_scheduledAutodownloadWifiPeriodEndTime;
@property(retain, nonatomic) NSDate *scheduledManualDownloadWifiPeriodEndTime; // @synthesize scheduledManualDownloadWifiPeriodEndTime=_scheduledManualDownloadWifiPeriodEndTime;
@property(retain, nonatomic) NSDate *lastScannedDescriptorTime; // @synthesize lastScannedDescriptorTime=_lastScannedDescriptorTime;
@property(copy, nonatomic) SUDescriptor *lastScannedDescriptor; // @synthesize lastScannedDescriptor=_lastScannedDescriptor;
@property(copy, nonatomic) SUDownload *lastDownload; // @synthesize lastDownload=_lastDownload;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
@property(readonly, copy) NSString *description;
- (void)save;
- (void)load;
- (id)_stateAsDictionary;
- (void)resetAllHistory;
- (void)resetDownloadAndScanHistory;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface SUUtility : NSObject
{
}

+ (id)prettyPrintDate:(id)arg1;
+ (id)addToDate:(id)arg1 numberOfDays:(long long)arg2;
+ (id)gregorianCalendar;
+ (id)URLIfFileExists:(id)arg1;
+ (_Bool)hasEnoughDiskSpace:(unsigned long long)arg1;
+ (long long)translateErrorCodeFromError:(id)arg1;
+ (id)translateError:(id)arg1 withAddedUserInfo:(id)arg2;
+ (id)translateError:(id)arg1;
+ (void)assignError:(id *)arg1 withError:(id)arg2 translate:(_Bool)arg3;
+ (void)assignError:(id *)arg1 withCode:(long long)arg2;
+ (id)errorWithCode:(long long)arg1 originalError:(id)arg2;
+ (id)errorWithCode:(long long)arg1;
+ (id)currentReleaseType;
+ (id)currentProductBuild;
+ (id)currentProductVersion;
+ (id)currentProductType;
+ (id)currentProductCategory;
+ (id)serialNumber;
+ (_Bool)cellularDataIsEnabled;
+ (_Bool)hasCellularRadio;
+ (_Bool)isCellularDataCapable;
+ (_Bool)isWiFiCapable;
+ (_Bool)isDaemon;
+ (void)setIsDaemon:(_Bool)arg1;
+ (_Bool)createInstallationKeybag:(id)arg1;
+ (int)installationKeybagState;
+ (_Bool)isPasscodeLocked;
+ (_Bool)isPasswordProtected;
+ (_Bool)isRestoringFromCloud;
+ (id)taskQueue;

@end

