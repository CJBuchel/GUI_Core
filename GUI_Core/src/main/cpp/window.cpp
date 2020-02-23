#include "GUI.h"

cv::Mat GUI_Core::CreateWindow() {

  std::cout << "Specify Width and Height of window. (Default is 500x500)" << std::endl;

  std::cout << "Width: ";
  std::cin >> Width;
  std::cout << std::endl;
  if (Width <= 0) {
    Width = Default_Width;
    Height = Default_Height;
  } else {
    std::cout << "Height: ";
    std::cin >> Height;
    std::cout << std::endl;
    if (Height <= 0) {
      Height = Default_Height;
    }
  }


  cv::Mat image(Width, Height, CV_8UC3, cv::Scalar(0,0,0));

  if (!image.data) {
    std::cout << "Could Not Create Window" << std::endl;
    exit(EXIT_FAILURE);
  }

  return image;
}

void GUI_Core::DisplayWindow(cv::Mat image) {
  cv::imshow("GUI", image);
  cv::waitKey(30);
}