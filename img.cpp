#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

void showImageWithColorSpace(const Mat& image, const string& windowName, int colorSpace) {
    Mat convertedImage;
    cvtColor(image, convertedImage, colorSpace);
    namedWindow(windowName, WINDOW_NORMAL);
    imshow(windowName, convertedImage);
}

int main() {

    Mat image = imread("D:/cat2.jpg");

    if (image.empty())
    {
        cout << "Error" << endl;
        return -1;
    }

    namedWindow("RGB", WINDOW_NORMAL);
    imshow("RGB", image);

    showImageWithColorSpace(image, "GRAY", COLOR_BGR2GRAY);
    showImageWithColorSpace(image, "HSV", COLOR_BGR2HSV);
    showImageWithColorSpace(image, "Lab", COLOR_BGR2Lab);
    showImageWithColorSpace(image, "YCrCb", COLOR_BGR2YCrCb);
    showImageWithColorSpace(image, "XYZ", COLOR_BGR2XYZ);
    showImageWithColorSpace(image, "HLS", COLOR_BGR2HLS);
    showImageWithColorSpace(image, "Luv", COLOR_BGR2Luv);

    waitKey(0);

    return 0;
}
