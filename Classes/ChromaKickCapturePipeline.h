
 /*
 Copyright (C) 2016 Apple Inc. All Rights Reserved.
 See LICENSE.txt for this sample’s licensing information
 
 Abstract:
 The class that creates and manages the AVCaptureSession
 */


#import <AVFoundation/AVFoundation.h>

@class GSChromaKeyFilter;

@protocol ChromaKickCapturePipelineDelegate;

@interface ChromaKickCapturePipeline : NSObject 

- (instancetype)initWithDelegate:(id<ChromaKickCapturePipelineDelegate>)delegate callbackQueue:(dispatch_queue_t)queue; // delegate is weak referenced

// These methods are synchronous
- (void)startRunning;
- (void)stopRunning;

// Must be running before starting recording
// These methods are asynchronous, see the recording delegate callbacks
- (void)startRecording;
- (void)stopRecording;

@property(atomic) BOOL renderingEnabled; // When set to NO the GPU will not be used after the setRenderingEnabled: call returns.

@property(atomic) AVCaptureVideoOrientation recordingOrientation; // client can set the orientation for the recorded movie

- (CGAffineTransform)transformFromVideoBufferOrientationToOrientation:(AVCaptureVideoOrientation)orientation withAutoMirroring:(BOOL)mirroring; // only valid after startRunning has been called

// Stats
@property(atomic, readonly) float videoFrameRate;
@property(atomic, readonly) CMVideoDimensions videoDimensions;

@property (nonatomic, readonly) GSChromaKeyFilter *chromaKickFilter;

@end

@protocol ChromaKickCapturePipelineDelegate <NSObject>
@required

- (void)capturePipeline:(ChromaKickCapturePipeline *)capturePipeline didStopRunningWithError:(NSError *)error;

// Preview
- (void)capturePipeline:(ChromaKickCapturePipeline *)capturePipeline previewPixelBufferReadyForDisplay:(CVPixelBufferRef)previewPixelBuffer;
- (void)capturePipelineDidRunOutOfPreviewBuffers:(ChromaKickCapturePipeline *)capturePipeline;

// Recording
- (void)capturePipelineRecordingDidStart:(ChromaKickCapturePipeline *)capturePipeline;
- (void)capturePipeline:(ChromaKickCapturePipeline *)capturePipeline recordingDidFailWithError:(NSError *)error; // Can happen at any point after a startRecording call, for example: startRecording->didFail (without a didStart), willStop->didFail (without a didStop)
- (void)capturePipelineRecordingWillStop:(ChromaKickCapturePipeline *)capturePipeline;
- (void)capturePipelineRecordingDidStop:(ChromaKickCapturePipeline *)capturePipeline;

@end
