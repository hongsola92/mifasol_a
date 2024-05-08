#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
String folder = "/home/ssorra/mifasol_a/openCV/data/";

int main()
{
     Mat src = imread(folder + "lenna.bmp", IMREAD_GRAYSCALE);
     Mat original = src.clone();
     Mat src2 = src.clone();
     src = src * 2.f;
     src2 = src + (src - 50) * 1.f;
     cout << "original mean:  " << mean(original) << endl;
     imshow("original", original);
     imshow("src", src);
     imshow("src2", src2);
     waitKey();
	destroyAllWindows();
	return 0;
}
