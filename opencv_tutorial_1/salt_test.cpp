#include "salt.h"


void saltTest()
{
	Mat image = imread("fruits.jpg"); //open image

	salt(image, 3000);

	namedWindow("fruits");
	imshow("fruits", image);
	waitKey(5000);
}