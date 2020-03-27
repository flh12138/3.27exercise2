#include<opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main()
{
	VideoCapture cap;

	cap.open(0);

	double fps = cap.get(CAP_PROP_FPS);
	std::cout << "fps" << fps << std::endl;


	while (1)
	{

		cv::Mat frame;
		cv::Mat BlurMat;
		cap.read(frame);
		blur(frame, BlurMat, Size(16,16),Point(-1,-1));
		imshow("BlurMat", BlurMat);
		imshow("frame", frame);
		waitKey(30);

	}






}