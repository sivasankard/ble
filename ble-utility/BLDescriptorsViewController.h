//
//  BLDescriptorsViewController.h
//  ble-utility
//
//  Created by Joost Fu on 11/10/13.
//  Copyright (c) 2013 joost. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RKPeripheral.h"
@interface BLDescriptorsViewController : UITableViewController
@property (nonatomic,strong) RKPeripheral * peripheral;
@property (nonatomic,strong) CBCharacteristic * characteristic;
@end