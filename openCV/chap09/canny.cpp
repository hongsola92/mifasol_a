#include "opencv2/opencv.hpp"  // OpenCV 라이브러리를 포함
#include <iostream>  // 표준 입출력 라이브러리를 포함

using namespace cv;  // OpenCV 네임스페이스를 사용
using namespace std;  // 표준 네임스페이스를 사용

String folder = "/home/ssorra/mifasol_a/openCV/data/";  // 이미지 파일이 있는 폴더 경로를 지정

int main()
{
     // 이미지를 그레이스케일로 불러오기
     Mat src = imread(folder + "lenna.bmp", IMREAD_GRAYSCALE);
     Mat dst1, dst2;

     // Canny 에지 검출을 수행 (임계값: 50, 100)
     Canny(src, dst1, 50, 100);
     // Canny 에지 검출을 수행 (임계값: 50, 150)
     Canny(src, dst2, 50, 150);

     // 결과 이미지를 창에 출력
     imshow("dst1", dst1);
     imshow("dst2", dst2);
     imshow("src", src);
     
     // 사용자의 키 입력 기다리기
     waitKey();
     
     // 모든창을 닫기
     destroyAllWindows();
     
     return 0;
}
