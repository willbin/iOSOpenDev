/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"

@class NSString;

@interface SBPluginManager : SBUnknownSuperclass {
	NSString *_pluginsDirectory;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x12a6a1
- (id)springBoardPluginsDirectory;	// 0x12a6dd
- (void)loadAllLaunchPlugins;	// 0x12a781
- (Class)loadPluginNamed:(id)named;	// 0x12a939
- (Class)loadPluginBundle:(id)bundle;	// 0x12a9d9
@end