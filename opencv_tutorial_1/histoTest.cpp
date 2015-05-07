#include "Histrogram1D.h"

void histoTest()
{
	char k;

	Mat image = imread("jena.jpg", 
								CV_LOAD_IMAGE_GRAYSCALE); // open in b&w.
	if (!image.data)
	{
		cout << "No image loaded" << endl;
		cin >> k;
		return;
	}
	//The histogram object.
	Histrogram1D h;

	MatND histo = h.getHistogram(image);

	for (int i = 0; i < 256; i++)
	{
		cout << "Value " << i << " = " <<
			histo.at<float>(i) << endl;
	}
	

	cin >> k;
}