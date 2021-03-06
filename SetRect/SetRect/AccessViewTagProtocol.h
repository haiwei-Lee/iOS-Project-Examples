//
//  AccessViewTagProtocol.h
//  Animations
//
//  Created by YouXianMing on 16/6/17.
//  Copyright © 2016年 YouXianMing. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^ViewSetupBlock)(UIView * view);

@protocol AccessViewTagProtocol <NSObject>

@required

/**
 *  Set the view whose tag matches the specified value.
 *
 *  @param view View.
 *  @param tag  tag.
 */
- (void)setView:(UIView *)view withTag:(NSInteger)tag;

/**
 *  Remove the tag.
 *
 *  @param tag View's tag.
 */
- (void)removeReferenceWithTag:(NSInteger)tag;

/**
 *  Get the view from the tag.
 *
 *  @param tag.
 *
 *  @return view's object.
 */
- (id)viewWithTag:(NSInteger)tag;

@end
