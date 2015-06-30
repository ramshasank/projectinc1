#import "AbstractOCVViewController.h"
#import <RoboMe/RoboMe.h>
#import <opencv2/imgproc/imgproc_c.h>
#import <AVFoundation/AVFoundation.h>
#import <RoboMe/RoboMe.h>

@interface ColorCircleViewController : AbstractOCVViewController<AVCaptureVideoDataOutputSampleBufferDelegate>
{
    double _min, _max;
    AVCaptureSession *_session2;
}



@property (weak, nonatomic) IBOutlet UITextView *outputTextView;

@property (weak, nonatomic) IBOutlet UILabel *edgeLabel;
@property (weak, nonatomic) IBOutlet UILabel *chest20cmLabel;
@property (weak, nonatomic) IBOutlet UILabel *chest50cmLabel;
@property (weak, nonatomic) IBOutlet UILabel *cheat100cmLabel;








@end