#include "opencv2/freetype.hpp" // OpenCV 라이브러리를 포함
#include <iostream> // 표준 입출력 스트림 라이브러리를 포함
#include "opencv2/opencv.hpp"

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

     Mat img(400,400, CV_8UC3, Scalar(0, 0,0));
     
     Ptr<freetype::FreeType2> ft2 = freetype::createFreeType2();
     ft2->loadFontData("/usr/share/fonts/truetype/liberation/LiberationSerif-Bold.ttf", 0);
     String text = u8"utf-8 Test";
     int fontHeight = 60;
     Size textSize = ft2-> getTextSize(text, fontHeight, -1, 0);
     
     ft2->putText(img, text, Point(20, 60 + textSize.height), fontHeight, white, 1, LINE_AA, true);

     imshow("img", img);
     waitKey(0);
     destroyAllWindows();
     return 0; 
}
