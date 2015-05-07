#include "lesson2.h"

void lesson_3()
{
	Mat image(240, 320, CV_8UC3, Scalar(100));

	cout << "height " << image.size().height << endl;
	cout << "width " << image.size().width << endl;

	image = lesson_2();

	namedWindow("lena");
	imshow("lena", image);

	Mat image2, image3;

	image2 = image2; // the two images refer to the same data.
	 
	image.copyTo(image3); // a new copy is created.

	waitKey(500);

}