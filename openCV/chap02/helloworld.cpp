#include "opencv2/opencv.hpp"
#include <iostream>
#include <string>

using namespace cv;
using namespace std;

std::string folder = "/home/ssorra/mifasol_a/openCV/data/";

int main()
{
	cout << "Hello OpenCV "<< std::endl;
	cv::Mat img;
    img = cv::imread(folder + "lenna.bmp");
    cv::imshow("image", img);
    cv::waitKey(0);
    
    return 0;
}