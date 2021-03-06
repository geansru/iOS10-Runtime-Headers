/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBadgeInfo : NSObject <NSCopying> {
    id /* block */  __numberOfPhotosProvider;
    long long  _numberOfPhotos;
    long long  _style;
}

@property (setter=_setNumberOfPhotosProvider:, nonatomic, copy) id /* block */ _numberOfPhotosProvider;
@property (setter=_setNumberOfPhotos:, nonatomic) long long numberOfPhotos;
@property (setter=_setStyle:, nonatomic) long long style;

+ (id)badgeInfoWithBurstStyleNumberOfPhotos:(long long)arg1;
+ (id)badgeInfoWithBurstStyleNumberOfPhotosProvider:(id /* block */)arg1;
+ (id)badgeInfoWithHDRPhotoIrisStyle;
+ (id)badgeInfoWithHDRStyle;
+ (id)badgeInfoWithPhotoIrisStyle;
+ (id)badgeInfoWithSDOFPhotoIrisStyle;
+ (id)badgeInfoWithSDOFStyle;

- (void).cxx_destruct;
- (id /* block */)_numberOfPhotosProvider;
- (void)_setNumberOfPhotos:(long long)arg1;
- (void)_setNumberOfPhotosProvider:(id /* block */)arg1;
- (void)_setStyle:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)numberOfPhotos;
- (long long)style;

@end
