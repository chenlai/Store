@interface AudioRouter : NSObject
+ (void) initAudioSessionRouting;
+ (void) switchToDefaultHardware;
+ (void) forceOutputToBuiltInSpeakers;
@end
