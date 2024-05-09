#include "opencv2/opencv.hpp" 
#include <iostream>  

using namespace cv; 
using namespace std;  

String folder = "/home/ssorra/mifasol_a/openCV/data/"; 

int main() 
{
     uchar data[] = 
     {
          0,0,1,1,0,0,0,0,
          1,1,1,1,0,0,1,0,
          1,1,1,1,0,0,0,0,
          0,0,0,0,0,1,1,0,
          0,0,0,1,1,1,1,0,
          0,0,0,1,0,0,1,0,
          0,0,1,1,1,1,1,0,
          0,0,0,0,0,0,0,0,
     };

     Mat src = Mat(8, 8, CV_8UC1, data) * 255;

     Mat labels;

     int cnt = connectedComponents(src, labels);

     cout << "src:\n" << src << endl;
     cout << "labels:\n" << labels << endl;
     cout << "number of labels" << cnt << endl;

     imshow("src", src);
     waitKey();
     destroyAllWindows();
     return 0;
}