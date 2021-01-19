
#include <opencv4/opencv2/opencv.hpp>
using namespace cv;

int main(int, char**) {
    VideoCapture camera(0);
    Mat frame;
    camera >> frame;
    imwrite("frame.jpg", frame);
}