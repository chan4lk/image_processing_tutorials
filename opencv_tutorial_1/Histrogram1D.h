#pragma once
#include "common.h"
#include "opencv2/imgproc/imgproc.hpp"

class Histrogram1D
{
private:
	int histSize[1]; //number of bins.
	float hranges[2]; //min and max pixel value.
	const float* ranges[1]; 
	int channels[1]; //only 1 channel used here.
public:
	Histrogram1D();	
	~Histrogram1D();

	/// <summary>
	/// Gets the histogram.
	/// </summary>
	/// <param name="image">The image.</param>
	/// <returns>
	/// The Histrogram1D
	/// </returns>
	cv::MatND getHistogram(const cv::Mat &image);


	/// <summary>
	/// Gets the histogram image.
	/// </summary>
	/// <param name="image">The image.</param>
	/// <returns> The image</returns>
	Mat getHistogramImage(const Mat &image);
	
};

