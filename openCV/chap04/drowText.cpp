#include "opencv2/opencv.hpp" // OpenCV 라이브러리를 포함
#include <iostream> // 표준 입출력 스트림 라이브러리를 포함

using namespace cv; // OpenCV 네임스페이스를 사용
using namespace std; // C++의 표준 네임스페이스를 사용

string folder = "/home/ssorra/mifasol_a/openCV/data/";


int main()
{
     Scalar white = Scalar(255, 255, 255);
     Scalar yellow = Scalar(0, 255, 255);
     Scalar blue = Scalar(255, 0, 0);
     Scalar green = Scalar(0, 255, 0);
     Scalar red = Scalar(0, 0, 255);

     Mat img(400,400, CV_8UC3, Scalar(255, 255, 255));
     
     putText(img, "FONT_HERSHEY_SIMPLEX", Point(20, 50), FONT_HERSHEY_SIMPLEX, 1, green);
     putText(img, "FONT_HERSHEY_PLAIN", Point(20, 100), FONT_HERSHEY_SIMPLEX, 1, red);

     imshow("img", img);
     waitKey(0);
     destroyAllWindows();
     return 0; 
}
