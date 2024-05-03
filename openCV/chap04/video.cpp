#include "opencv2/opencv.hpp" // OpenCV 라이브러리를 포함
#include <iostream> // 표준 입출력 스트림 라이브러리를 포함

using namespace cv; // OpenCV 네임스페이스를 사용
using namespace std; // C++의 표준 네임스페이스를 사용

string folder = "/home/ssorra/mifasol_a/openCV/data/"; // 비디오 파일이 위치한 폴더 경로를 정의

int main() {
  // 프레임을 저장할 변수들을 선언
  Mat frame, doubleFrame, reshapedFrame;

  // 비디오 파일 열기
  VideoCapture cap(folder + "vtest.avi");
  if (!cap.isOpened()) {
    cerr << "비디오 열기 실패.\n"; // 비디오 파일이 열리지 않으면 오류 메시지를 출력
    return -1;
  }

  // 프레임의 너비와 높이를 출력
  cout << "프레임 너비: " << cap.get(CAP_PROP_FRAME_WIDTH) << endl;
  cout << "프레임 높이: " << cap.get(CAP_PROP_FRAME_HEIGHT) << endl;

  // 프레임 크기를 가져오기
  Size sz1(cap.get(CAP_PROP_FRAME_WIDTH), cap.get(CAP_PROP_FRAME_HEIGHT));

  // 프레임 변형을 위한 모양을 정의
  std::vector<int> shape = {sz1.width / 2, sz1.height * 2};

  // 비디오의 초당 프레임 수(fps)를 가져오기
  double fps = cap.get(CAP_PROP_FPS);

  // 코덱을 정의하고 VideoWriter 객체를 생성
  int fourcc = VideoWriter::fourcc('D', 'I', 'V', 'X');
  int delay = cvRound(1000 / fps); // fps를 기반으로 프레임 간 지연을 계산

  // 출력 비디오를 작성하기 위한 VideoWriter 객체를 생성
  VideoWriter outputVideo(folder + "output1.avi", fourcc, fps, sz1 * 2);

  // 비디오의 각 프레임에 대해 반복
  while (true) {
    // 비디오에서 프레임을 읽어오기
    cap >> frame;

    // 프레임을 두 배 크기로 조정
    resize(frame, doubleFrame, sz1 * 2);

    // 정의된 모양에 따라 프레임을 변형
    reshapedFrame = frame.reshape(3, shape);

    // 원본 프레임을 표시합니다.
    imshow("frame", frame);

    // 두 배 크기로 조정된 프레임을 표시
    imshow("doubleFrame", doubleFrame);

    // 두 배 크기로 조정된 프레임을 출력 비디오에 작성
    outputVideo << doubleFrame;

    // 변형된 프레임을 표시
    imshow("reshapedFrame", reshapedFrame);

    // 키 입력을 기다리고, Esc 키가 눌리면 반복문을 종료
    if (waitKey(int(delay)) == 27)
      break;
  }

  // 모든 OpenCV 창 닫기
  destroyAllWindows();

  return 0; // 프로그램이 성공적으로 완료되었음을 나타내기 위해 0을 반환
}
