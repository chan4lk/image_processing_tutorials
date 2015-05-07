#include<opencv2\highgui\highgui.hpp>
#pragma once
class Test
{
	// image attribute
	cv::Mat image;

public:
	Test() : image(240, 320, CV_8U, cv::Scalar(100)) {}
	~Test();
	cv::Mat GetImage(){ return image.clone(); };
};

