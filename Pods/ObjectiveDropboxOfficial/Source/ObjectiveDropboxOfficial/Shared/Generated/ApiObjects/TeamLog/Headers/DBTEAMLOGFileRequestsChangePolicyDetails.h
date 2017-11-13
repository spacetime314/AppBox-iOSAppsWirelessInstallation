///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGFileRequestsChangePolicyDetails;
@class DBTEAMLOGFileRequestsPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FileRequestsChangePolicyDetails` struct.
///
/// Enabled or disabled file requests.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGFileRequestsChangePolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New file requests policy.
@property (nonatomic, readonly) DBTEAMLOGFileRequestsPolicy *dNewValue;

/// Previous file requests policy. Might be missing due to historical data gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGFileRequestsPolicy *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New file requests policy.
/// @param previousValue Previous file requests policy. Might be missing due to
/// historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGFileRequestsPolicy *)dNewValue
                    previousValue:(nullable DBTEAMLOGFileRequestsPolicy *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param dNewValue New file requests policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGFileRequestsPolicy *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FileRequestsChangePolicyDetails` struct.
///
@interface DBTEAMLOGFileRequestsChangePolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGFileRequestsChangePolicyDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGFileRequestsChangePolicyDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGFileRequestsChangePolicyDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGFileRequestsChangePolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGFileRequestsChangePolicyDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGFileRequestsChangePolicyDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGFileRequestsChangePolicyDetails`
/// object.
///
+ (DBTEAMLOGFileRequestsChangePolicyDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
