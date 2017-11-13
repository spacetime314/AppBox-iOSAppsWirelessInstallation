///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGPaperAccessType;
@class DBTEAMLOGPaperDocChangeMemberRoleDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PaperDocChangeMemberRoleDetails` struct.
///
/// Changed the access type of a Paper doc member.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGPaperDocChangeMemberRoleDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Event unique identifier.
@property (nonatomic, readonly, copy) NSString *eventUuid;

/// Paper doc access type.
@property (nonatomic, readonly) DBTEAMLOGPaperAccessType *accessType;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param eventUuid Event unique identifier.
/// @param accessType Paper doc access type.
///
/// @return An initialized instance.
///
- (instancetype)initWithEventUuid:(NSString *)eventUuid accessType:(DBTEAMLOGPaperAccessType *)accessType;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PaperDocChangeMemberRoleDetails` struct.
///
@interface DBTEAMLOGPaperDocChangeMemberRoleDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGPaperDocChangeMemberRoleDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGPaperDocChangeMemberRoleDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGPaperDocChangeMemberRoleDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGPaperDocChangeMemberRoleDetails *)instance;

///
/// Deserializes `DBTEAMLOGPaperDocChangeMemberRoleDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGPaperDocChangeMemberRoleDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGPaperDocChangeMemberRoleDetails`
/// object.
///
+ (DBTEAMLOGPaperDocChangeMemberRoleDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
