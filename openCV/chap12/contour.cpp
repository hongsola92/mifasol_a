#include "opencv2/opencv.hpp" 
#include <iostream>  

using namespace cv; 
using namespace std;  

String folder = "/home/ssorra/mifasol_a/openCV/data/"; 

int main() 
{
     Mat src = imread(folder + "contours.bmp", IMREAD_GRAYSCALE);
     
     vector<vector<Point>> contours;
     findContours(src, contours, RETR_EXTERNAL, CHAIN_APPROX_NONE);
          // cout << contours.size() << endl;
          // for (auto contour : contours)
          // {
          //      cout << contour.size() <<"___________________________" << endl;
          //      for( auto point : contour)
          //      {
          //           cout << point << ",";
          //      }
          // }
     Mat dst;
     cvtColor(src, dst, COLOR_GRAY2BGR);
     drawContours(dst, contours, -1, Scalar(255, 0, 0), 15);
     
     imshow("src", src);
     imshow("dst", dst);
     waitKey();
     destroyAllWindows();
     return 0;
}