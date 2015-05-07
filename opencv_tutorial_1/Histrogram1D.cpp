#include "Histrogram1D.h"

Histrogram1D::Histrogram1D()
{
	//prepare arguments.
	histSize[0] = 256;
	hranges[0] = 0.0;
	hranges[1] = 255.0;
	ranges[0] = hranges;
	channels[0] = 0; // by default we look at channel 0;
}

Histrogram1D::~Histrogram1D()
{
}

cv::MatND Histrogram1D::getHistogram(const cv::Mat &image)
{
	MatND hist;

	// Compute histogram
	cv::calcHist(&image,
		1,
		channels,
		cv::Mat(),
		hist,
		1,
		histSize,
		ranges
		);
	return hist;
}

Mat Histrogram1D::getHistogramImage(const Mat &image)
{
	int nr = image.rows;
	int nc = image.cols;

	const int maxLevels = 256;

	int grayLevel[maxLevels] = {};

	for (int i = 0; i < nr; i++)
	{
		for (int j = 0; j < nc; j++)
		{
			int pixel = image.at<uchar>(j, i);
			grayLevel[pixel]++;
		}
	}
}
