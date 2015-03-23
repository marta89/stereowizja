#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char** argv)
{
    VideoCapture cap(0);
	Mat frame;

	if(!cap.isOpened())
		return -1;

	while(1)  {
        cap >> frame;
        imshow("Image from /dev/video0", frame);
        if(waitKey(30) >= 0) break;
    }

	return 0;
}
