//
//  MPayStageOrderGenetateViewController.h
//  CodingMart
//
//  Created by Ease on 16/8/31.
//  Copyright © 2016年 net.coding. All rights reserved.
//

#import "EABaseTableViewController.h"
#import "RewardPrivate.h"
#import "MPayOrder.h"

#import "MPayOrders.h"
#import "RewardMetroRole.h"

@interface MPayStageOrderGenetateViewController : EABaseTableViewController
@property (strong, nonatomic) RewardPrivate *curRewardP;
@property (strong, nonatomic) RewardMetroRoleStage *curStage;
@property (strong, nonatomic) MPayOrder *curMPayOrder;

@property (strong, nonatomic) MPayOrders *curMPayOrders;
@property (strong, nonatomic) RewardMetroRole *curRole;

@end
