//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "FaceRecogConfigLogicDelegate-Protocol.h"
#import "FaceRecogProcessorDelegate-Protocol.h"
#import "FaceRecogUploadLogicDelegate-Protocol.h"

@class FaceRecogBaseViewController, FaceRecogBindVideoLogic, FaceRecogConfigLogic, FaceRecogProcessor, FaceRecogUploadLogic, MMUIViewController, NSMutableDictionary, NSString;
@protocol FaceRecogBaseHandlerDelegate, FaceRecogHandlerDelegate;

@interface FaceRecogBaseHandler : MMObject <FaceRecogProcessorDelegate, FaceRecogUploadLogicDelegate, FaceRecogConfigLogicDelegate>
{
    NSMutableDictionary *_resultDic;
    _Bool _needUploadVideo;
    _Bool _isRetry;
    _Bool _isRSA;
    _Bool _needGuide;
    _Bool _hasShowVC;
    _Bool _hasShowAlert;
    unsigned int _scene;
    unsigned int _tryCount;
    unsigned int _finishDelayTime;
    id <FaceRecogBaseHandlerDelegate> _faceDelegate;
    id <FaceRecogHandlerDelegate> _delegate;
    MMUIViewController *_currentViewController;
    FaceRecogBaseViewController *_faceVc;
    FaceRecogConfigLogic *_configFetcher;
    FaceRecogUploadLogic *_uploader;
    FaceRecogBindVideoLogic *_bindVideoLogic;
    FaceRecogProcessor *_processor;
    NSString *_appId;
    NSString *_userTicket;
}

@property(nonatomic) _Bool hasShowAlert; // @synthesize hasShowAlert=_hasShowAlert;
@property(nonatomic) _Bool hasShowVC; // @synthesize hasShowVC=_hasShowVC;
@property(nonatomic) unsigned int finishDelayTime; // @synthesize finishDelayTime=_finishDelayTime;
@property(nonatomic) unsigned int tryCount; // @synthesize tryCount=_tryCount;
@property(copy, nonatomic) NSString *userTicket; // @synthesize userTicket=_userTicket;
@property(nonatomic) _Bool needGuide; // @synthesize needGuide=_needGuide;
@property(nonatomic) _Bool isRSA; // @synthesize isRSA=_isRSA;
@property(nonatomic) _Bool isRetry; // @synthesize isRetry=_isRetry;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool needUploadVideo; // @synthesize needUploadVideo=_needUploadVideo;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) FaceRecogProcessor *processor; // @synthesize processor=_processor;
@property(retain, nonatomic) FaceRecogBindVideoLogic *bindVideoLogic; // @synthesize bindVideoLogic=_bindVideoLogic;
@property(retain, nonatomic) FaceRecogUploadLogic *uploader; // @synthesize uploader=_uploader;
@property(retain, nonatomic) FaceRecogConfigLogic *configFetcher; // @synthesize configFetcher=_configFetcher;
@property(retain, nonatomic) FaceRecogBaseViewController *faceVc; // @synthesize faceVc=_faceVc;
@property(nonatomic) __weak MMUIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(nonatomic) __weak id <FaceRecogHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FaceRecogBaseHandlerDelegate> faceDelegate; // @synthesize faceDelegate=_faceDelegate;
- (void).cxx_destruct;
- (void)initView;
- (void)didDetectFace;
- (void)didAccessConfig;
- (void)didAccessAudio;
- (void)didAccessVideo;
- (void)didFinishedWithCode:(int)arg1 msg:(id)arg2 retry:(_Bool)arg3;
- (void)handlerDidFinishWithCode:(int)arg1 msg:(id)arg2 verifyResult:(id)arg3 canRetry:(_Bool)arg4;
- (id)result;
- (id)resultMsg;
- (int)resultCode;
- (void)doFinishWithCode:(id)arg1;
- (void)faceRecogDidEndGuideView;
- (void)faceRecogDidGuideCancel;
- (void)faceRecogDidStartGuideView;
- (void)faceRecogDidRetry;
- (void)faceRecogDidClose;
- (void)faceRecogDidCancel;
- (void)reportUserCancel;
- (void)onUploadFaceResultFinish:(id)arg1;
- (void)onGetBioConfig:(id)arg1 failedCauseOf:(unsigned int)arg2 forScene:(unsigned int)arg3 errMsg:(id)arg4;
- (void)onGetBioConfig:(id)arg1 succeedForScene:(unsigned int)arg2;
- (void)faceRecogDidEnterBackground;
- (void)faceRecogProcedureDidInterrupted;
- (void)procedureDidGotFrameResult:(unsigned long long)arg1 failedType:(long long)arg2;
- (void)procedureDidStartUploadResultData;
- (void)procedureDidRecognizeFaceSuccess;
- (void)procedureDidFailedReleaseOutResultData;
- (void)faceRecogDidFinishWithError;
- (void)faceRecogDidFinishWithTrackFail;
- (void)faceRecogDidFinishWithTimeout;
- (void)disMissAll:(_Bool)arg1;
- (void)report:(int)arg1 errorType:(int)arg2 errorCode:(int)arg3;
- (void)requestStop;
- (void)requestCancel;
- (void)requestRetry;
- (void)requestRecord;
- (int)requestChangeMode;
- (void)requestDetectFace;
- (void)requestConfig;
- (void)onRequestAccessAudioDone:(_Bool)arg1;
- (void)onRequestAccessVideoDone:(_Bool)arg1;
- (void)finishedWithAuthorizationError:(id)arg1;
- (void)requestAccessAudio;
- (void)requestAccessVideo;
- (void)dealloc;
- (id)initWithScene:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

