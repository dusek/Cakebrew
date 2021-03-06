//
//  BPSideBarController.h
//  Cakebrew
//
//  Created by Marek Hrusovsky on 05/09/14.
//  Copyright (c) 2014 Bruno Philipe. All rights reserved.
//

#import "Frameworks/PXSourceList.framework/Headers/PXSourceList.h"
#import <Foundation/Foundation.h>

NS_ENUM(NSUInteger, FormulaeSideBarItem) {
  FormulaeSideBarItemFormulaeCategory = 0,
  FormulaeSideBarItemInstalled = 1,
  FormulaeSideBarItemOutdated = 2,
  FormulaeSideBarItemAll = 3,
  FormulaeSideBarItemLeaves = 4,
  FormulaeSideBarItemRepositories = 5,
  FormulaeSideBarItemToolsCategory = 6,
  FormulaeSideBarItemDoctor = 7,
  FormulaeSideBarItemUpdate = 8,
  
};

@protocol BPSideBarControllerDelegate <NSObject>
- (void)sourceListSelectionDidChange;
@end

@interface BPSideBarController : NSObject <PXSourceListDataSource, PXSourceListDelegate>

@property (unsafe_unretained) IBOutlet id <BPSideBarControllerDelegate>delegate;

- (void)refreshSidebarBadges;

@end
