
#include <opencv2/opencv.hpp>
using namespace cv;
#include <iostream>
using namespace std;
#include <cstdio>

VideoCapture camera(0);
Mat frame;

int record() {
    while (true) {
        camera >> frame;
        imwrite("frame.jpg", frame);
        remove("frame.jpg");
    }
}

int main () {
    record();
}