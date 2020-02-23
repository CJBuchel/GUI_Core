#pragma once

#include <iostream>

// Opencv files
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

// Local Files
#include "Draw/Image.h"

class GUI_Core {
  public:
    void GUI();

    // Window size
    int Width, Height; // deafult is 500x500
    int Default_Width = 500, Default_Height = 500;
  private:

    // functions
    cv::Mat CreateWindow();
    void DisplayWindow(cv::Mat image);

    // Images
    cv::Mat window;
};