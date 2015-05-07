#include "common.h"

void salt(Mat &image, int density)
{
	for (int k = 0; k < density; k++)
	{
		int i = rand() % image.cols;
		int j = rand() % image.rows;

		if (image.channels() == 1)  //gray level image.
		{
			image.at<uchar>(j, i) = 255;
		}
		else if (image.channels() == 3)
		{
			image.at<cv::Vec3b>(j, i)[0] = 255;
			image.at<cv::Vec3b>(j, i)[1] = 255;
			image.at<cv::Vec3b>(j, i)[2] = 255;
		}
	}
}