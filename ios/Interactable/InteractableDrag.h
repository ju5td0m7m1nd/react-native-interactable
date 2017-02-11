//
//  InteractableDrag.h
//  Interactable
//
//  Created by Tal Kol on 2/9/17.
//  Copyright © 2017 Wix. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface InteractableDrag : NSObject<NSCopying>

@property (nonatomic, assign) CGFloat toss;
@property (nonatomic, assign) CGFloat tension;
@property (nonatomic, assign) CGFloat damping;

@end
