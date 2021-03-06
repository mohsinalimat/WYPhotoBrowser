//
//  WYPhotoCollectionViewCell.h
//  WYPhotoBrowser
//
//  Created by WuYikai on 15/11/20.
//  Copyright © 2015年 secoo. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class WYPhoto, WYPhotoCollectionViewCell;

extern CGFloat const kWYPhotoImageViewInsert;

@protocol WYPhotoCollectionViewCellDelegate <NSObject>

- (void)wy_photoCollectionViewCell:(WYPhotoCollectionViewCell *)cell didTapImageView:(UIImageView *)imageView;

@end

@interface WYPhotoCollectionViewCell : UICollectionViewCell

@property (nonatomic, weak) id<WYPhotoCollectionViewCellDelegate> wy_delegate;

- (void)wy_setupWithPhoto:(WYPhoto *)photo;

@end

NS_ASSUME_NONNULL_END