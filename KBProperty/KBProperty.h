//
//  KBProperty.h
//  SXT
//
//  Created by SXJY on 2019/1/18.
//  Copyright © 2019 KeBing. All rights reserved.
//

#ifndef KBProperty_h
#define KBProperty_h

#define KBStrongProperty            @property (nonatomic, strong)
#define KBStrongPropertyWithClass(className)            KBStrongProperty className *
#define KBStrongIdProperty            KBStrongProperty id
#define KBAssignProperty            @property (nonatomic, assign)
#define KBCopyProperty              @property (nonatomic, copy)
#define KBReadOnlyStrongProperty    @property (nonatomic, strong, readonly)

#define KBStringProperty    KBCopyProperty NSString *
#define KBReadOnlyStringProperty    @property (nonatomic, copy, readonly) NSString *
#define KBDataProperty      KBStrongProperty NSData *
#define KBNumberProperty    KBStrongProperty NSNumber *
#define KBViewProperty      KBStrongProperty UIView *
#define KBColorProperty     KBStrongProperty UIColor *
#define KBIntegerProperty   KBAssignProperty NSInteger
#define KBFloatProperty     KBAssignProperty CGFloat
#define KBBOOLProperty      KBAssignProperty BOOL
#define KBImageProperty     KBStrongProperty UIImage *
#define KBInsetsProperty    KBAssignProperty UIEdgeInsets

#define KBMutableSetPropertyWithType(ObjType)           KBStrongProperty NSMutableSet<ObjType *> *
#define KBMutableOrderedSetPropertyWithType(ObjType)    KBStrongProperty NSMutableOrderedSet<ObjType *> *


#define KBArrayProperty         KBStrongProperty NSArray *
#define KBMutableArrayProperty  KBStrongProperty NSMutableArray *
#define KBArrayPropertyWithType(ObjType)         KBStrongProperty NSArray<ObjType *> *
#define KBMutableArrayPropertyWithType(ObjType)  KBStrongProperty NSMutableArray<ObjType *> *


#define KBDictionaryProperty        KBStrongProperty NSDictionary *
#define KBMutableDictionaryProperty KBStrongProperty NSMutableDictionary *
#define KBDictionaryPropertyWithType(key,value)        KBStrongProperty NSDictionary<key *,value *> *
#define KBMutableDictionaryPropertyWithType(key,value) KBStrongProperty NSMutableDictionary<key *,value *> *

#define KBBlockProperty         KBCopyProperty
#define KBDelegateProperty(ProtocolType)     @property (nonatomic, weak, nullable) id<ProtocolType>
#define KBDelegatesProperty(ProtocolType)    KBStrongProperty NSMutableSet<id<ProtocolType>> *

#endif /* KBProperty_h */
