//
//  Husband+CoreDataProperties.h
//  CoreDataDemo
//
//  Created by pc on 16/1/21.
//  Copyright © 2016年 Mr_辉. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Husband.h"

NS_ASSUME_NONNULL_BEGIN

@interface Husband (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) Wife *wife;

@end

NS_ASSUME_NONNULL_END
