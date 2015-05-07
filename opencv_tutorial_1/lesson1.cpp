#include<opencv2\core\core.hpp>
#include<opencv2\highgui\highgui.hpp>

void lesson_1()
{
	// read an image
	cv::Mat image = cv::imread("lena.jpg");

	//create image windows named "My image".
	cv::namedWindow("My Image");

	//show the image on window.
	cv::imshow("My Image", image);

	//wait key for 50000 ms
	cv::waitKey(5000);
}
