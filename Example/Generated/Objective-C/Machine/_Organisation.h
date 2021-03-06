// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to Organisation.h instead.

@import CoreData;
#import <QueryKit/QueryKit.h>

@class Person;
@class PersonAttribute;
@class Person;
@class PersonAttribute;

@interface OrganisationID : NSManagedObjectID
@end

@interface OrganisationAttribute : QKAttribute

/// Returns an attribute for the property name.
- (QKAttribute *)name;

/// Returns an attribute for the relationship founder.
- (PersonAttribute *)founder;

/// Returns an attribute for the relationship members.
- (PersonAttribute *)members;

@end

@interface _Organisation : NSManagedObject

+ (QKQuerySet *)querySetWithManagedObjectContext:(NSManagedObjectContext *)context;

+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)managedObjectContext;
+ (NSString *)entityName;
+ (NSEntityDescription *)entityInManagedObjectContext:(NSManagedObjectContext *)managedObjectContext;
@property (nonatomic, readonly, strong) OrganisationID *objectID;

#pragma mark - Attributes

/// Returns an attribute for the property name.
+ (QKAttribute *)name;

/// Returns an attribute for the relationship founder.
+ (PersonAttribute *)founder;

/// Returns an attribute for the relationship members.
+ (PersonAttribute *)members;

#pragma mark -

@property (nonatomic, strong) NSString* name;

//- (BOOL)validateName:(id *)value_ error:(NSError **)error_;

@property (nonatomic, strong) Person *founder;
//- (BOOL)validateFounder:(id *)value error:(NSError **)error_;

@property (nonatomic, strong) NSSet *members;
- (NSMutableSet *)membersSet;

@end

@interface _Organisation (MembersCoreDataGeneratedAccessors)
- (void)addMembers:(NSSet *)value;
- (void)removeMembers:(NSSet *)value;
- (void)addMembersObject:(Person *)value;
- (void)removeMembersObject:(Person *)value;

@end

