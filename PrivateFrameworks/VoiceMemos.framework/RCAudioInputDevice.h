/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class AVCaptureConnection, AVCaptureMovieFileOutput, MPAudioDeviceController, RCSavedRecording, AVCaptureSession, NSMutableArray, NSString, NSDate, AVRemaker;

@interface RCAudioInputDevice : NSObject  {
    AVCaptureSession *_captureController;
    AVCaptureMovieFileOutput *_movieFileOutput;
    AVCaptureConnection *_captureConnection;
    MPAudioDeviceController *_audioDeviceController;
    NSString *_pickedRouteName;
    RCSavedRecording *_activeRecording;
    NSDate *_recordingStartDate;
    NSDate *_pauseStartDate;
    double _totalPausedTime;
    double _duration;
    unsigned int _backgroundTaskIdentifier;
    unsigned int _recording : 1;
    unsigned int _audioInputAvailable : 1;
    unsigned int _active : 1;
    unsigned int _interrupted : 1;
    unsigned int _writingToDisk : 1;
    unsigned int _recordAfterFinishedWritingToDisk : 1;
    unsigned int _lastRecordingDidStop : 1;
    unsigned int _preparingToRecord : 1;
    unsigned int _stopRecordingImmediately : 1;
    unsigned int _previewStarted : 1;
    AVRemaker *_remaker;
    NSString *_originalRecordingPath;
    NSString *_remadeRecordingPath;
    NSMutableArray *_recordingsToRemake;
    RCSavedRecording *_recordingBeingRemade;
    unsigned int _remaking : 1;
}

@property(readonly) BOOL audioInputAvailable;
@property(readonly) BOOL isRecording;
@property(readonly) BOOL isPaused;
@property(readonly) double elapsedRecordingTime;
@property(readonly) BOOL shouldSuspend;
@property(retain) NSDate * recordingStartDate;
@property(readonly) RCSavedRecording * recordingBeingRemade;

+ (id)savedRecordingsDirectory;
+ (id)sharedInputDevice;

- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;
- (void)_applicationWillTerminate:(id)arg1;
- (void)getAverageAudioLevel:(float*)arg1 peakAudioLevel:(float*)arg2;
- (double)elapsedRecordingTime;
- (BOOL)shouldSuspend;
- (id)recordingStartDate;
- (void)setRecordingStartDate:(id)arg1;
- (void)_availableModesDidChange:(id)arg1;
- (void)_createCaptureController;
- (void)_removeCaptureObservers;
- (void)endRecording;
- (BOOL)_setupAudioInputQueue;
- (void)_teardownAudioInputQueue;
- (void)_beginRecording;
- (BOOL)audioInputAvailable;
- (void)_remakeRecording:(id)arg1;
- (void)_sessionDidStartRunning:(id)arg1;
- (void)_interruptionDidBegin:(id)arg1;
- (void)_interruptionDidEnd:(id)arg1;
- (void)_sessionErrored:(id)arg1;
- (BOOL)_attachCaptureDevice;
- (void)_setDisableSBMediaHUD:(BOOL)arg1;
- (void)_recordingStopped;
- (void)_captureCompleted;
- (void)_audioInputAvailabilityDidChange:(BOOL)arg1;
- (void)_adjustDurationForPauseIfNecessary;
- (BOOL)beginRecording;
- (void)_remakingCompleted:(id)arg1;
- (void)remakeRecording:(id)arg1;
- (id)recordingBeingRemade;
- (id)_init;
- (BOOL)isPaused;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)captureOutput:(id)arg1 didPauseRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)captureOutput:(id)arg1 didResumeRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)pauseRecording;
- (void)resumeRecording;
- (BOOL)isRecording;
- (id)init;
- (void)dealloc;
- (void)becomeActive;
- (void)resignActive;

@end