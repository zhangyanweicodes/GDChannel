// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: json_test.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_GEN_VERSION != 30001
#error This file was generated by a different version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class Action;
@class GPBAny;
@class GPBBoolValue;
@class GPBBytesValue;
@class GPBDoubleValue;
@class GPBDuration;
@class GPBFieldMask;
@class GPBFloatValue;
@class GPBInt32Value;
@class GPBInt64Value;
@class GPBListValue;
@class GPBStringValue;
@class GPBStruct;
@class GPBTimestamp;
@class GPBUInt32Value;
@class GPBUInt64Value;
@class GPBValue;
@class Poster;
@class TestAllTypes_NestedMessage;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum TestAllTypes_NestedEnum

typedef GPB_ENUM(TestAllTypes_NestedEnum) {
  /// Value used if any message's field encounters a value that is not defined
  /// by this enum. The message will also have C functions to get/set the rawValue
  /// of the field.
  TestAllTypes_NestedEnum_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  TestAllTypes_NestedEnum_Foo = 0,
  TestAllTypes_NestedEnum_Bar = 1,
  TestAllTypes_NestedEnum_Baz = 2,
};

GPBEnumDescriptor *TestAllTypes_NestedEnum_EnumDescriptor(void);

/// Checks to see if the given value is defined by the enum or was not known at
/// the time this source was generated.
BOOL TestAllTypes_NestedEnum_IsValidValue(int32_t value);

#pragma mark - JsonTestRoot

/// Exposes the extension registry for this file.
///
/// The base class provides:
/// @code
///   + (GPBExtensionRegistry *)extensionRegistry;
/// @endcode
/// which is a @c GPBExtensionRegistry that includes all the extensions defined by
/// this file and all files that it depends on.
@interface JsonTestRoot : GPBRootObject
@end

#pragma mark - VideoAttentItem

typedef GPB_ENUM(VideoAttentItem_FieldNumber) {
  VideoAttentItem_FieldNumber_AttentKey = 1,
  VideoAttentItem_FieldNumber_Poster = 2,
  VideoAttentItem_FieldNumber_AttentState = 3,
  VideoAttentItem_FieldNumber_Lid = 4,
  VideoAttentItem_FieldNumber_Cid = 5,
  VideoAttentItem_FieldNumber_Vid = 6,
  VideoAttentItem_FieldNumber_Updatetime = 7,
  VideoAttentItem_FieldNumber_ShortTitle = 8,
  VideoAttentItem_FieldNumber_AttentFrom = 9,
};

///1.12关注数据项
@interface VideoAttentItem : GPBMessage

///数据项的key
@property(nonatomic, readwrite, copy, null_resettable) NSString *attentKey;

///显示用的海报信息
@property(nonatomic, readwrite, strong, null_resettable) Poster *poster;
/// Test to see if @c poster has been set.
@property(nonatomic, readwrite) BOOL hasPoster;

///关注状态， 0 表示未关注 ，1 表示已关注
@property(nonatomic, readwrite) int32_t attentState;

@property(nonatomic, readwrite, copy, null_resettable) NSString *lid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *cid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *vid;

///关注更新的时间
@property(nonatomic, readwrite) int64_t updatetime;

///用户在个人中心显示的短样式
@property(nonatomic, readwrite, copy, null_resettable) NSString *shortTitle;

///关注来源, 用于显示时
@property(nonatomic, readwrite, copy, null_resettable) NSString *attentFrom;

@end

#pragma mark - Poster

typedef GPB_ENUM(Poster_FieldNumber) {
  Poster_FieldNumber_FirstLine = 1,
  Poster_FieldNumber_SecondLine = 2,
  Poster_FieldNumber_ThirdLine = 3,
  Poster_FieldNumber_ImageURL = 5,
  Poster_FieldNumber_PlayCount = 6,
  Poster_FieldNumber_Action = 7,
  Poster_FieldNumber_ImageUiType = 8,
  Poster_FieldNumber_Rating = 9,
  Poster_FieldNumber_ReportParams = 10,
  Poster_FieldNumber_ReportKey = 12,
};

@interface Poster : GPBMessage

///第一行
@property(nonatomic, readwrite, copy, null_resettable) NSString *firstLine;

///第2行
@property(nonatomic, readwrite, copy, null_resettable) NSString *secondLine;

///第3行(目测用于左横图右文视图)
@property(nonatomic, readwrite, copy, null_resettable) NSString *thirdLine;

///图片地址
@property(nonatomic, readwrite, copy, null_resettable) NSString *imageURL;

///播放数
@property(nonatomic, readwrite) uint32_t playCount;

///海报点击后需要执行的动作
@property(nonatomic, readwrite, strong, null_resettable) Action *action;
/// Test to see if @c action has been set.
@property(nonatomic, readwrite) BOOL hasAction;

/// 0 横图 1 竖图
@property(nonatomic, readwrite) int32_t imageUiType;

/// 评分100分制
@property(nonatomic, readwrite) int32_t rating;

/// 上报参数(曝光)
@property(nonatomic, readwrite, copy, null_resettable) NSString *reportParams;

///点击事件用来上报的事件名称，后台下发必须以"server_"开头
@property(nonatomic, readwrite, copy, null_resettable) NSString *reportKey;

@end

#pragma mark - Action

typedef GPB_ENUM(Action_FieldNumber) {
  Action_FieldNumber_URL = 1,
  Action_FieldNumber_CacheType = 2,
  Action_FieldNumber_PreReadType = 3,
  Action_FieldNumber_ReportParams = 4,
  Action_FieldNumber_ReportKey = 5,
};

@interface Action : GPBMessage

///跳转的地址，遵循统一跳转规则
@property(nonatomic, readwrite, copy, null_resettable) NSString *URL;

///目标页面数据cace的策略  0 不cache，1 内存cache ，2 文件cache
@property(nonatomic, readwrite) int32_t cacheType;

///目标页数据预读取的策略 0 不预读，1 预读协议数据，2 预读图片
@property(nonatomic, readwrite) int32_t preReadType;

///点击事件用来上报的内容(点击)
@property(nonatomic, readwrite, copy, null_resettable) NSString *reportParams;

///点击事件用来上报的事件名称，后台下发必须以"server_"开头
@property(nonatomic, readwrite, copy, null_resettable) NSString *reportKey;

@end

#pragma mark - TestAllTypes

typedef GPB_ENUM(TestAllTypes_FieldNumber) {
  TestAllTypes_FieldNumber_OptionalInt32 = 1,
  TestAllTypes_FieldNumber_OptionalInt64 = 2,
  TestAllTypes_FieldNumber_OptionalUint32 = 3,
  TestAllTypes_FieldNumber_OptionalUint64 = 4,
  TestAllTypes_FieldNumber_OptionalSint32 = 5,
  TestAllTypes_FieldNumber_OptionalSint64 = 6,
  TestAllTypes_FieldNumber_OptionalFixed32 = 7,
  TestAllTypes_FieldNumber_OptionalFixed64 = 8,
  TestAllTypes_FieldNumber_OptionalSfixed32 = 9,
  TestAllTypes_FieldNumber_OptionalSfixed64 = 10,
  TestAllTypes_FieldNumber_OptionalFloat = 11,
  TestAllTypes_FieldNumber_OptionalDouble = 12,
  TestAllTypes_FieldNumber_OptionalBool = 13,
  TestAllTypes_FieldNumber_OptionalString = 14,
  TestAllTypes_FieldNumber_OptionalBytes = 15,
  TestAllTypes_FieldNumber_OptionalNestedMessage = 18,
  TestAllTypes_FieldNumber_OptionalNestedEnum = 21,
  TestAllTypes_FieldNumber_RepeatedInt32Array = 31,
  TestAllTypes_FieldNumber_RepeatedInt64Array = 32,
  TestAllTypes_FieldNumber_RepeatedUint32Array = 33,
  TestAllTypes_FieldNumber_RepeatedUint64Array = 34,
  TestAllTypes_FieldNumber_RepeatedSint32Array = 35,
  TestAllTypes_FieldNumber_RepeatedSint64Array = 36,
  TestAllTypes_FieldNumber_RepeatedFixed32Array = 37,
  TestAllTypes_FieldNumber_RepeatedFixed64Array = 38,
  TestAllTypes_FieldNumber_RepeatedSfixed32Array = 39,
  TestAllTypes_FieldNumber_RepeatedSfixed64Array = 40,
  TestAllTypes_FieldNumber_RepeatedFloatArray = 41,
  TestAllTypes_FieldNumber_RepeatedDoubleArray = 42,
  TestAllTypes_FieldNumber_RepeatedBoolArray = 43,
  TestAllTypes_FieldNumber_RepeatedStringArray = 44,
  TestAllTypes_FieldNumber_RepeatedBytesArray = 45,
  TestAllTypes_FieldNumber_RepeatedNestedMessageArray = 48,
  TestAllTypes_FieldNumber_RepeatedNestedEnumArray = 51,
  TestAllTypes_FieldNumber_ReportKey = 500,
};

@interface TestAllTypes : GPBMessage

///点击事件用来上报的事件名称，后台下发必须以"server_"开头
@property(nonatomic, readwrite, copy, null_resettable) NSString *reportKey;

@property(nonatomic, readwrite) int32_t optionalInt32;

@property(nonatomic, readwrite) int64_t optionalInt64;

@property(nonatomic, readwrite) uint32_t optionalUint32;

@property(nonatomic, readwrite) uint64_t optionalUint64;

@property(nonatomic, readwrite) int32_t optionalSint32;

@property(nonatomic, readwrite) int64_t optionalSint64;

@property(nonatomic, readwrite) uint32_t optionalFixed32;

@property(nonatomic, readwrite) uint64_t optionalFixed64;

@property(nonatomic, readwrite) int32_t optionalSfixed32;

@property(nonatomic, readwrite) int64_t optionalSfixed64;

@property(nonatomic, readwrite) float optionalFloat;

@property(nonatomic, readwrite) double optionalDouble;

@property(nonatomic, readwrite) BOOL optionalBool;

@property(nonatomic, readwrite, copy, null_resettable) NSString *optionalString;

@property(nonatomic, readwrite, copy, null_resettable) NSData *optionalBytes;

@property(nonatomic, readwrite, strong, null_resettable) TestAllTypes_NestedMessage *optionalNestedMessage;
/// Test to see if @c optionalNestedMessage has been set.
@property(nonatomic, readwrite) BOOL hasOptionalNestedMessage;

@property(nonatomic, readwrite) TestAllTypes_NestedEnum optionalNestedEnum;

/// Repeated
@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Array *repeatedInt32Array;
/// The number of items in @c repeatedInt32Array without causing the array to be created.
@property(nonatomic, readonly) NSUInteger repeatedInt32Array_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt64Array *repeatedInt64Array;
/// The number of items in @c repeatedInt64Array without causing the array to be created.
@property(nonatomic, readonly) NSUInteger repeatedInt64Array_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBUInt32Array *repeatedUint32Array;
/// The number of items in @c repeatedUint32Array without causing the array to be created.
@property(nonatomic, readonly) NSUInteger repeatedUint32Array_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBUInt64Array *repeatedUint64Array;
/// The number of items in @c repeatedUint64Array without causing the array to be created.
@property(nonatomic, readonly) NSUInteger repeatedUint64Array_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Array *repeatedSint32Array;
/// The number of items in @c repeatedSint32Array without causing the array to be created.
@property(nonatomic, readonly) NSUInteger repeatedSint32Array_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt64Array *repeatedSint64Array;
/// The number of items in @c repeatedSint64Array without causing the array to be created.
@property(nonatomic, readonly) NSUInteger repeatedSint64Array_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBUInt32Array *repeatedFixed32Array;
/// The number of items in @c repeatedFixed32Array without causing the array to be created.
@property(nonatomic, readonly) NSUInteger repeatedFixed32Array_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBUInt64Array *repeatedFixed64Array;
/// The number of items in @c repeatedFixed64Array without causing the array to be created.
@property(nonatomic, readonly) NSUInteger repeatedFixed64Array_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Array *repeatedSfixed32Array;
/// The number of items in @c repeatedSfixed32Array without causing the array to be created.
@property(nonatomic, readonly) NSUInteger repeatedSfixed32Array_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt64Array *repeatedSfixed64Array;
/// The number of items in @c repeatedSfixed64Array without causing the array to be created.
@property(nonatomic, readonly) NSUInteger repeatedSfixed64Array_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBFloatArray *repeatedFloatArray;
/// The number of items in @c repeatedFloatArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger repeatedFloatArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBDoubleArray *repeatedDoubleArray;
/// The number of items in @c repeatedDoubleArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger repeatedDoubleArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBBoolArray *repeatedBoolArray;
/// The number of items in @c repeatedBoolArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger repeatedBoolArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *repeatedStringArray;
/// The number of items in @c repeatedStringArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger repeatedStringArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSData*> *repeatedBytesArray;
/// The number of items in @c repeatedBytesArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger repeatedBytesArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<TestAllTypes_NestedMessage*> *repeatedNestedMessageArray;
/// The number of items in @c repeatedNestedMessageArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger repeatedNestedMessageArray_Count;

// |repeatedNestedEnumArray| contains |TestAllTypes_NestedEnum|
@property(nonatomic, readwrite, strong, null_resettable) GPBEnumArray *repeatedNestedEnumArray;
/// The number of items in @c repeatedNestedEnumArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger repeatedNestedEnumArray_Count;

@end

/// Fetches the raw value of a @c TestAllTypes's @c optionalNestedEnum property, even
/// if the value was not defined by the enum at the time the code was generated.
int32_t TestAllTypes_OptionalNestedEnum_RawValue(TestAllTypes *message);
/// Sets the raw value of an @c TestAllTypes's @c optionalNestedEnum property, allowing
/// it to be set to a value that was not defined by the enum at the time the code
/// was generated.
void SetTestAllTypes_OptionalNestedEnum_RawValue(TestAllTypes *message, int32_t value);

#pragma mark - TestAllTypes_NestedMessage

typedef GPB_ENUM(TestAllTypes_NestedMessage_FieldNumber) {
  TestAllTypes_NestedMessage_FieldNumber_Value = 1,
  TestAllTypes_NestedMessage_FieldNumber_Str = 2,
};

@interface TestAllTypes_NestedMessage : GPBMessage

@property(nonatomic, readwrite) int32_t value;

@property(nonatomic, readwrite, copy, null_resettable) NSString *str;

@end

#pragma mark - TestOneof

typedef GPB_ENUM(TestOneof_FieldNumber) {
  TestOneof_FieldNumber_OneofInt32 = 1,
  TestOneof_FieldNumber_OneofNestedMessage = 2,
};

typedef GPB_ENUM(TestOneof_OneofField_OneOfCase) {
  TestOneof_OneofField_OneOfCase_GPBUnsetOneOfCase = 0,
  TestOneof_OneofField_OneOfCase_OneofInt32 = 1,
  TestOneof_OneofField_OneOfCase_OneofNestedMessage = 2,
};

@interface TestOneof : GPBMessage

@property(nonatomic, readonly) TestOneof_OneofField_OneOfCase oneofFieldOneOfCase;

@property(nonatomic, readwrite) int32_t oneofInt32;

@property(nonatomic, readwrite, strong, null_resettable) TestAllTypes_NestedMessage *oneofNestedMessage;

@end

/// Clears whatever value was set for the oneof 'oneofField'.
void TestOneof_ClearOneofFieldOneOfCase(TestOneof *message);

#pragma mark - TestMap

typedef GPB_ENUM(TestMap_FieldNumber) {
  TestMap_FieldNumber_Int32ToInt32Map = 1,
  TestMap_FieldNumber_Int64ToInt32Map = 2,
  TestMap_FieldNumber_Uint32ToInt32Map = 3,
  TestMap_FieldNumber_Uint64ToInt32Map = 4,
  TestMap_FieldNumber_Sint32ToInt32Map = 5,
  TestMap_FieldNumber_Sint64ToInt32Map = 6,
  TestMap_FieldNumber_Fixed32ToInt32Map = 7,
  TestMap_FieldNumber_Fixed64ToInt32Map = 8,
  TestMap_FieldNumber_Sfixed32ToInt32Map = 9,
  TestMap_FieldNumber_Sfixed64ToInt32Map = 10,
  TestMap_FieldNumber_BoolToInt32Map = 11,
  TestMap_FieldNumber_StringToInt32Map = 12,
  TestMap_FieldNumber_Int32ToInt64Map = 101,
  TestMap_FieldNumber_Int32ToUint32Map = 102,
  TestMap_FieldNumber_Int32ToUint64Map = 103,
  TestMap_FieldNumber_Int32ToSint32Map = 104,
  TestMap_FieldNumber_Int32ToSint64Map = 105,
  TestMap_FieldNumber_Int32ToFixed32Map = 106,
  TestMap_FieldNumber_Int32ToFixed64Map = 107,
  TestMap_FieldNumber_Int32ToSfixed32Map = 108,
  TestMap_FieldNumber_Int32ToSfixed64Map = 109,
  TestMap_FieldNumber_Int32ToFloatMap = 110,
  TestMap_FieldNumber_Int32ToDoubleMap = 111,
  TestMap_FieldNumber_Int32ToBoolMap = 112,
  TestMap_FieldNumber_Int32ToStringMap = 113,
  TestMap_FieldNumber_Int32ToBytesMap = 114,
  TestMap_FieldNumber_Int32ToMessageMap = 115,
  TestMap_FieldNumber_Int32ToEnumMap = 116,
};

@interface TestMap : GPBMessage

/// Instead of testing all combinations (too many), we only make sure all
/// valid types have been used at least in one field as key and in one
/// field as value.
@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Int32Dictionary *int32ToInt32Map;
/// The number of items in @c int32ToInt32Map without causing the array to be created.
@property(nonatomic, readonly) NSUInteger int32ToInt32Map_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt64Int32Dictionary *int64ToInt32Map;
/// The number of items in @c int64ToInt32Map without causing the array to be created.
@property(nonatomic, readonly) NSUInteger int64ToInt32Map_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBUInt32Int32Dictionary *uint32ToInt32Map;
/// The number of items in @c uint32ToInt32Map without causing the array to be created.
@property(nonatomic, readonly) NSUInteger uint32ToInt32Map_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBUInt64Int32Dictionary *uint64ToInt32Map;
/// The number of items in @c uint64ToInt32Map without causing the array to be created.
@property(nonatomic, readonly) NSUInteger uint64ToInt32Map_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Int32Dictionary *sint32ToInt32Map;
/// The number of items in @c sint32ToInt32Map without causing the array to be created.
@property(nonatomic, readonly) NSUInteger sint32ToInt32Map_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt64Int32Dictionary *sint64ToInt32Map;
/// The number of items in @c sint64ToInt32Map without causing the array to be created.
@property(nonatomic, readonly) NSUInteger sint64ToInt32Map_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBUInt32Int32Dictionary *fixed32ToInt32Map;
/// The number of items in @c fixed32ToInt32Map without causing the array to be created.
@property(nonatomic, readonly) NSUInteger fixed32ToInt32Map_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBUInt64Int32Dictionary *fixed64ToInt32Map;
/// The number of items in @c fixed64ToInt32Map without causing the array to be created.
@property(nonatomic, readonly) NSUInteger fixed64ToInt32Map_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Int32Dictionary *sfixed32ToInt32Map;
/// The number of items in @c sfixed32ToInt32Map without causing the array to be created.
@property(nonatomic, readonly) NSUInteger sfixed32ToInt32Map_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt64Int32Dictionary *sfixed64ToInt32Map;
/// The number of items in @c sfixed64ToInt32Map without causing the array to be created.
@property(nonatomic, readonly) NSUInteger sfixed64ToInt32Map_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBBoolInt32Dictionary *boolToInt32Map;
/// The number of items in @c boolToInt32Map without causing the array to be created.
@property(nonatomic, readonly) NSUInteger boolToInt32Map_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringInt32Dictionary *stringToInt32Map;
/// The number of items in @c stringToInt32Map without causing the array to be created.
@property(nonatomic, readonly) NSUInteger stringToInt32Map_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Int64Dictionary *int32ToInt64Map;
/// The number of items in @c int32ToInt64Map without causing the array to be created.
@property(nonatomic, readonly) NSUInteger int32ToInt64Map_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32UInt32Dictionary *int32ToUint32Map;
/// The number of items in @c int32ToUint32Map without causing the array to be created.
@property(nonatomic, readonly) NSUInteger int32ToUint32Map_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32UInt64Dictionary *int32ToUint64Map;
/// The number of items in @c int32ToUint64Map without causing the array to be created.
@property(nonatomic, readonly) NSUInteger int32ToUint64Map_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Int32Dictionary *int32ToSint32Map;
/// The number of items in @c int32ToSint32Map without causing the array to be created.
@property(nonatomic, readonly) NSUInteger int32ToSint32Map_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Int64Dictionary *int32ToSint64Map;
/// The number of items in @c int32ToSint64Map without causing the array to be created.
@property(nonatomic, readonly) NSUInteger int32ToSint64Map_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32UInt32Dictionary *int32ToFixed32Map;
/// The number of items in @c int32ToFixed32Map without causing the array to be created.
@property(nonatomic, readonly) NSUInteger int32ToFixed32Map_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32UInt64Dictionary *int32ToFixed64Map;
/// The number of items in @c int32ToFixed64Map without causing the array to be created.
@property(nonatomic, readonly) NSUInteger int32ToFixed64Map_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Int32Dictionary *int32ToSfixed32Map;
/// The number of items in @c int32ToSfixed32Map without causing the array to be created.
@property(nonatomic, readonly) NSUInteger int32ToSfixed32Map_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Int64Dictionary *int32ToSfixed64Map;
/// The number of items in @c int32ToSfixed64Map without causing the array to be created.
@property(nonatomic, readonly) NSUInteger int32ToSfixed64Map_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32FloatDictionary *int32ToFloatMap;
/// The number of items in @c int32ToFloatMap without causing the array to be created.
@property(nonatomic, readonly) NSUInteger int32ToFloatMap_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32DoubleDictionary *int32ToDoubleMap;
/// The number of items in @c int32ToDoubleMap without causing the array to be created.
@property(nonatomic, readonly) NSUInteger int32ToDoubleMap_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32BoolDictionary *int32ToBoolMap;
/// The number of items in @c int32ToBoolMap without causing the array to be created.
@property(nonatomic, readonly) NSUInteger int32ToBoolMap_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32ObjectDictionary<NSString*> *int32ToStringMap;
/// The number of items in @c int32ToStringMap without causing the array to be created.
@property(nonatomic, readonly) NSUInteger int32ToStringMap_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32ObjectDictionary<NSData*> *int32ToBytesMap;
/// The number of items in @c int32ToBytesMap without causing the array to be created.
@property(nonatomic, readonly) NSUInteger int32ToBytesMap_Count;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32ObjectDictionary<TestAllTypes_NestedMessage*> *int32ToMessageMap;
/// The number of items in @c int32ToMessageMap without causing the array to be created.
@property(nonatomic, readonly) NSUInteger int32ToMessageMap_Count;

// |int32ToEnumMap| values are |TestAllTypes_NestedEnum|
@property(nonatomic, readwrite, strong, null_resettable) GPBInt32EnumDictionary *int32ToEnumMap;
/// The number of items in @c int32ToEnumMap without causing the array to be created.
@property(nonatomic, readonly) NSUInteger int32ToEnumMap_Count;

@end

#pragma mark - TestWrappers

typedef GPB_ENUM(TestWrappers_FieldNumber) {
  TestWrappers_FieldNumber_Int32Value = 1,
  TestWrappers_FieldNumber_Uint32Value = 2,
  TestWrappers_FieldNumber_Int64Value = 3,
  TestWrappers_FieldNumber_Uint64Value = 4,
  TestWrappers_FieldNumber_FloatValue = 5,
  TestWrappers_FieldNumber_DoubleValue = 6,
  TestWrappers_FieldNumber_BoolValue = 7,
  TestWrappers_FieldNumber_StringValue = 8,
  TestWrappers_FieldNumber_BytesValue = 9,
};

@interface TestWrappers : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Value *int32Value;
/// Test to see if @c int32Value has been set.
@property(nonatomic, readwrite) BOOL hasInt32Value;

@property(nonatomic, readwrite, strong, null_resettable) GPBUInt32Value *uint32Value;
/// Test to see if @c uint32Value has been set.
@property(nonatomic, readwrite) BOOL hasUint32Value;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt64Value *int64Value;
/// Test to see if @c int64Value has been set.
@property(nonatomic, readwrite) BOOL hasInt64Value;

@property(nonatomic, readwrite, strong, null_resettable) GPBUInt64Value *uint64Value;
/// Test to see if @c uint64Value has been set.
@property(nonatomic, readwrite) BOOL hasUint64Value;

@property(nonatomic, readwrite, strong, null_resettable) GPBFloatValue *floatValue;
/// Test to see if @c floatValue has been set.
@property(nonatomic, readwrite) BOOL hasFloatValue;

@property(nonatomic, readwrite, strong, null_resettable) GPBDoubleValue *doubleValue;
/// Test to see if @c doubleValue has been set.
@property(nonatomic, readwrite) BOOL hasDoubleValue;

@property(nonatomic, readwrite, strong, null_resettable) GPBBoolValue *boolValue;
/// Test to see if @c boolValue has been set.
@property(nonatomic, readwrite) BOOL hasBoolValue;

@property(nonatomic, readwrite, strong, null_resettable) GPBStringValue *stringValue;
/// Test to see if @c stringValue has been set.
@property(nonatomic, readwrite) BOOL hasStringValue;

@property(nonatomic, readwrite, strong, null_resettable) GPBBytesValue *bytesValue;
/// Test to see if @c bytesValue has been set.
@property(nonatomic, readwrite) BOOL hasBytesValue;

@end

#pragma mark - TestTimestamp

typedef GPB_ENUM(TestTimestamp_FieldNumber) {
  TestTimestamp_FieldNumber_TimestampValue = 1,
};

@interface TestTimestamp : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) GPBTimestamp *timestampValue;
/// Test to see if @c timestampValue has been set.
@property(nonatomic, readwrite) BOOL hasTimestampValue;

@end

#pragma mark - TestDuration

typedef GPB_ENUM(TestDuration_FieldNumber) {
  TestDuration_FieldNumber_DurationValue = 1,
};

@interface TestDuration : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) GPBDuration *durationValue;
/// Test to see if @c durationValue has been set.
@property(nonatomic, readwrite) BOOL hasDurationValue;

@end

#pragma mark - TestFieldMask

typedef GPB_ENUM(TestFieldMask_FieldNumber) {
  TestFieldMask_FieldNumber_FieldMaskValue = 1,
};

@interface TestFieldMask : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) GPBFieldMask *fieldMaskValue;
/// Test to see if @c fieldMaskValue has been set.
@property(nonatomic, readwrite) BOOL hasFieldMaskValue;

@end

#pragma mark - TestStruct

typedef GPB_ENUM(TestStruct_FieldNumber) {
  TestStruct_FieldNumber_StructValue = 1,
  TestStruct_FieldNumber_Value = 2,
  TestStruct_FieldNumber_ListValue = 3,
};

@interface TestStruct : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) GPBStruct *structValue;
/// Test to see if @c structValue has been set.
@property(nonatomic, readwrite) BOOL hasStructValue;

@property(nonatomic, readwrite, strong, null_resettable) GPBValue *value;
/// Test to see if @c value has been set.
@property(nonatomic, readwrite) BOOL hasValue;

@property(nonatomic, readwrite, strong, null_resettable) GPBListValue *listValue;
/// Test to see if @c listValue has been set.
@property(nonatomic, readwrite) BOOL hasListValue;

@end

#pragma mark - TestAny

typedef GPB_ENUM(TestAny_FieldNumber) {
  TestAny_FieldNumber_AnyValue = 1,
};

@interface TestAny : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) GPBAny *anyValue;
/// Test to see if @c anyValue has been set.
@property(nonatomic, readwrite) BOOL hasAnyValue;

@end

#pragma mark - TestCustomJsonName

typedef GPB_ENUM(TestCustomJsonName_FieldNumber) {
  TestCustomJsonName_FieldNumber_Value = 1,
};

@interface TestCustomJsonName : GPBMessage

@property(nonatomic, readwrite) int32_t value;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
