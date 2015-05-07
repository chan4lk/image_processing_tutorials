#include "common.h"

/// <summary>
/// Colors the reduce.
/// </summary>
/// <param name="image">The image.</param>
/// <param name="div">The div.</param>
void colorReduce(Mat &image, int div = 64)
{
	int nl = image.rows; //number of lines

	int nc = image.cols * image.channels(); // total number of elements

	for (int j = 0; j < nl; j++)
	{		
		//get the address of row j.
		uchar* data = image.ptr<uchar>(j);

		for (int i = 0; i < nc; i++)
		{
			//process each pixel
			data[i] = data[i] / div * div + div / 2;
		}//end line
	}
}
