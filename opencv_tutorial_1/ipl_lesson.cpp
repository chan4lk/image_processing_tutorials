#include "common.h"
#include "ipl_lesson.h"

void ipl_lesson()

{
	IplImage* iplImage = cvLoadImage("lena.jpg");
	Mat image(iplImage, false);

	Ptr<IplImage> iplImage2 = cvLoadImage("output.jpg");

	cvReleaseImage(&iplImage);
}