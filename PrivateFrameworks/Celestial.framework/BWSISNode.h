/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWSISNode : BWNode <BWBracketSettingsProvider> {
    NSArray *_afWindowParamsArray;
    BOOL _allowExperimentalOverrides;
    float _bracketGainCap;
    NSDictionary *_cameraTuningDictionary;
    int (*_createSampleBufferProcessorFunction;
    FigCaptureStillImageSettings *_currentCaptureSettings;
    NSArray *_exposureValues;
    NSDictionary *_fusionParamsDictionary;
    int _fusionScheme;
    double _integrationTimeThreshold;
    int _lastFusionTypeUsed;
    int _lensShadingCorrectionMode;
    int _maxIntegrationTimeLimitMsec;
    NSDictionary *_noiseModelParamsDictionary;
    int _numberFramesReceived;
    int _oisBracketCount;
    NSArray *_oisExposureDurationTypes;
    BOOL _preBracketedFrameReceived;
    struct OpaqueFigSampleBufferProcessor { } *_sampleBufferProcessor;
    NSDictionary *_sensorIDDictionary;
    int _sisBracketCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) double integrationTimeThreshold;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)_clearCaptureRequestState;
- (id)_initWithCameraTuningDictionary:(id)arg1 sensorIDDictionary:(id)arg2 fusionScheme:(int)arg3 allowExperimentalOverrides:(BOOL)arg4;
- (id)_oisBracketSettingsWithCurrentFrameStats:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned int x11; long long x12; }*)arg1 stillImageSettings:(id)arg2;
- (void)_sampleBufferProcessorOutputReady:(long)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (long)_setupSampleBufferProcessor;
- (id)_sisBracketSettingsWithCurrentFrameStats:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned int x11; long long x12; }*)arg1 stillImageSettings:(id)arg2;
- (long)_unpackSISOptions;
- (BOOL)attachBracketToOutputSampleBuffer;
- (int)bracketCountForBracketingMode:(int)arg1 withCurrentFrameStats:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned int x11; long long x12; }*)arg2 stillImageSettings:(id)arg3;
- (id)bracketSettingsForBracketingMode:(int)arg1 withCurrentFrameStats:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned int x11; long long x12; }*)arg2 stillImageSettings:(id)arg3;
- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithCameraTuningDictionary:(id)arg1 sensorIDDictionary:(id)arg2 fusionScheme:(int)arg3;
- (double)integrationTimeThreshold;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setAttachBracketToOutputSampleBuffer:(BOOL)arg1;
- (int)worstCaseInitialMaxBracketCountForBracketingMode:(int)arg1;

@end
