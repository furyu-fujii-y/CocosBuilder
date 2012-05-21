//
//  ConsoleWindow.h
//  CocosBuilder
//
//  Created by Viktor Lidholt on 5/21/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ConsoleWindow : NSWindowController
{    
    NSPipe* pipe;
    NSFileHandle* pipeReadHandle;
    
    IBOutlet NSTextView* textView;
}

- (void) test;
- (void) writeToConsole:(NSString*) str;


@end
