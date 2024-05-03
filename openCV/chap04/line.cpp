#include "opencv2/opencv.hpp" // OpenCV 라이브러리를 포함
#include <iostream> // 표준 입출력 스트림 라이브러리를 포함

using namespace cv; // OpenCV 네임스페이스를 사용
using namespace std; // C++의 표준 네임스페이스를 사용

string folder = "/home/ssorra/mifasol_a/openCV/data/";
int main()
{
     // 640x400 크기의 흰 배경 이미지를 생성
     Mat img(400,640, CV_8UC3, Scalar(255,255,255));
     int a = 0; // 직선 위치를 조정하기 위한 변수를 초기화

     while(true) // 무한 루프를 시작
     {
          img = Scalar(255,255,255); // 이미지를 흰 배경으로 지움

          // (100+a,100)에서 (300,200)까지 파란색 선을 그리기
          line(img, Point(100+a,100), Point(300,200), Scalar(255,0,0),3,LINE_AA);

          // 이미지를 화면에 표시
          imshow("img", img);

          // 키 입력을 대기하고, ESC 키가 눌리면 루프를 종료
          if(waitKey(30) == 27)
               break;

          a++; // 직선의 위치를 이동
     }

     // 모든 OpenCV 창을 닫기
     destroyAllWindows();

     return 0; // 프로그램이 성공적으로 완료되었음을 나타내기 위해 0을 반환
}
