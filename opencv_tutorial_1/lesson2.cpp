#include<opencv2\core\core.hpp>
#include<opencv2\highgui\highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/// <summary>
/// Lession_2 method.
/// </summary>
Mat lesson_2()
{	
	//create image with size 0.
	Mat image;

	cout << "size" << image.size().height << " , "
		<< image.size().width << endl;

	image = imread("lena.jpg");

	if (!image.data)
	{
		printf("no image found");
	}

	namedWindow("original image"); //define the window.
	imshow("original image", image); //show the image.

	Mat result;
	flip(image, result, 1); // positive for horizontal,
							// 0 for vertical
							// negative for both

	namedWindow("output image");
	imshow("output image", result); 

	imwrite("output.jpg", result); // save the image.


	waitKey(0);

	return result;
}