#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
String folder = "/home/ssorra/mifasol_a/openCV/data/";
void on_brightness(int pos, void *userdata);

int main()
{
     Mat src = imread(folder + "lenna.bmp", IMREAD_GRAYSCALE);
     int position = 256;
     namedWindow("img");
     createTrackbar("Brightness", "img", 0, 511, on_brightness,  (void*) &src);
     on_brightness(0, &src);
	
     imshow("img", src);
     waitKey();
	destroyAllWindows();
	return 0;
}

void on_brightness(int pos, void *userdata)
{
     Mat img = *(Mat *) userdata;
     Mat dst = img + pos - 256;
     imshow("img", dst);
}