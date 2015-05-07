#include "colorReduce.h"

/// <summary>
/// Colors reduce test.
/// </summary>
void colorReduceTest()
{
	Mat image = imread("fruits.jpg");

	colorReduce(image);

	cvNamedWindow("fruits");
	imshow("fruits", image);
	waitKey(0);

}