//
//  UMPreferencesPanel.h
//  UniversalMailer
//
//  Created by luca on 25/05/16.
//  Copyright © 2016 noware. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import <Sparkle/Sparkle.h>

// Dummy declaration to silence compiler errors
@interface NSPreferencesModule: NSObject {
IBOutlet NSBox *_preferencesView;
}

+ (id)sharedInstance;
- (void)addPreferenceNamed: (NSString*)name owner: (id)owner;
@end

@interface UMPreferencesPanel : NSPreferencesModule <NSWindowDelegate, SUUpdaterDelegate>

@end
