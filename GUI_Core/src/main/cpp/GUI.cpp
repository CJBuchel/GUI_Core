#include "GUI.h"

void GUI_Core::GUI () {
  window = CreateWindow();

  // cv::Point p1(100, 100), p2(200, 100);
  // cv::Scalar colourLine(0, 255, 0);
  // int lineThickness = 2;

  // cv::line(window, p1, p2, colourLine, lineThickness);
  window = DrawImage(&window);

  while (true) {
    DisplayWindow(window);
  }
}