//
//  NavigationController.h
//  FPPicker
//
//  Created by Liyan David Chang on 6/20/12.
//  Copyright (c) 2012 Filepicker.io (Cloudtop Inc), All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MobileCoreServices/MobileCoreServices.h>
#import "FPExternalHeaders.h"

@interface FPPickerController : UINavigationController <UIImagePickerControllerDelegate, FPSourcePickerDelegate, UINavigationControllerDelegate, UIPopoverControllerDelegate>

@property (nonatomic, assign) id <FPPickerDelegate> fpdelegate;
@property (nonatomic, strong) NSArray *sourceNames;
@property (nonatomic, strong) NSArray *dataTypes;

//imagepicker properties
@property (nonatomic, copy) NSArray *mediaTypes;
@property (nonatomic, assign) BOOL allowsEditing;
@property (nonatomic) UIImagePickerControllerQualityType videoQuality;
@property (nonatomic) NSTimeInterval videoMaximumDuration;
@property (nonatomic) BOOL showsCameraControls;
@property (nonatomic, retain) UIView *cameraOverlayView;
@property (nonatomic) CGAffineTransform cameraViewTransform;

@property (nonatomic) UIImagePickerControllerCameraDevice cameraDevice;
@property (nonatomic) UIImagePickerControllerCameraFlashMode cameraFlashMode;
@property (nonatomic) UIImagePickerControllerCameraCaptureMode cameraCaptureMode;

@property (nonatomic) Boolean shouldUpload;
@property (nonatomic) Boolean shouldDownload;

@end
