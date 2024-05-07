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
    
    line(img, Point(50,50), Point(200, 50), red); // default
    line(img, Point(50,100), Point(200, 100), yellow, 3);    // thickness
    line(img, Point(50,150), Point(200, 150),green, 10);    // thickness
    
    line(img, Point(250,50), Point(350, 100), blue, 3, LINE_4); // LINE_4
    line(img, Point(250,70), Point(350, 120), blue, 3, LINE_8); // LINE_8
    line(img, Point(250,90), Point(350, 140), blue, 3, LINE_AA); // LINE_AA

    arrowedLine(img, Point(50,200), Point(150, 200), red); // default
    arrowedLine(img, Point(50,250), Point(350, 250), yellow, 3); // thickness
    arrowedLine(img, Point(50,300), Point(350, 300), green, 1, LINE_8, 0, 0.05); // thickness
 
     imshow("img", img);
     waitKey(0);
     destroyAllWindows();
     return 0; 
}
