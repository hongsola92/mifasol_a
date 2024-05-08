#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
String folder = "/home/ssorra/mifasol_a/openCV/data/";

void histogramGraph(Mat &graph, const Mat &src);  // 히스토그램을 그래프로 표현하는 함수

int main() {
     // 이미지를 그레이스케일로 불러오기
	Mat src = imread(folder + "hawkes.bmp", IMREAD_GRAYSCALE);
	// 히스토그램 최솟값과 최댓값을 계산.
     double gmin, gmax;
	minMaxLoc(src, &gmin, &gmax);
     // 히스토그램 평활화를 적용.
	Mat dst = (src - gmin) * 255 / (gmax - gmin);
     // 그래프를 그릴 매트릭스를 생성.
	Mat graphSrc(100, 256, CV_8U, Scalar(255));
	Mat graphDst(100, 256, CV_8U, Scalar(255));
     // 원본 이미지와 평활화된 이미지의 히스토그램을 그래프로 표현.
	histogramGraph(graphSrc, src);
	histogramGraph(graphDst, dst);
     // 이미지 크기 조정 출력.
	resize(src, src, Size(800, 800));
	resize(dst, dst, Size(800, 800));
	imshow("src", src);
	imshow("dst", dst);
	imshow("graphSrc", graphSrc);
	imshow("graphDst", graphDst);
	waitKey();
	destroyAllWindows();
	return 0;
}

void histogramGraph(Mat &graph, const Mat &src)
{
     // 히스토그램 계산을 위한 변수들을 초기화.
	Mat histo;
	int channels[] = {0};
	int dims = 1;
	const int histSize[] = {256};
	float graylevel[] = {0, 256};
	const float *ranges[] = {graylevel};
     
     // 히스토그램을 계산.
	calcHist(&src, 1, channels, noArray(), histo, dims, histSize, ranges);
     
     // 히스토그램을 그래프로 표현하기 위해 정규화.
	normalize(histo, histo, 0, 100, NORM_MINMAX);
     
     // 각 히스토그램 값에 대해 그래프를 그리기.
	for (int i = 0; i < 256; i++) {
		line(graph, Point(i, 100), Point(i, 100 - cvRound(histo.at<float>(i))),
			 Scalar(0));
	}
}