//
//  DXChatSession.h
//  ChatDemo
//
//  Created by Xu Du on 2019/3/13.
//  Copyright © 2019 Xu Du. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DXChatSession : NSObject

/** 会话id */
@property (nonatomic, copy) NSString *sessionId;

/** 最后一条消息 */
@property (nonatomic, strong) DXChatMessage *lastMessage;

/** 单聊或群聊 */
@property (nonatomic, assign) DXChatRoomType chatRoomType;

@end

NS_ASSUME_NONNULL_END
