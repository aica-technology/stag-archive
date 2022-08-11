#ifndef OPENCVCONSTANTS_H
#define OPENCVCONSTANTS_H

#include "opencv2/opencv.hpp"

#include "opencv2/imgproc/types_c.h"
#include "opencv2/videoio/legacy/constants_c.h"

namespace stag {

#if (CV_VERSION_MAJOR >= 4)
  #define CV_AA (cv::LINE_AA)
  #define CV_GRAY2BGR (cv::COLOR_GRAY2BGR)
  #define CV_IMWRITE_PNG_COMPRESSION (cv::IMWRITE_PNG_COMPRESSION)
  #define CV_LOAD_IMAGE_GRAYSCALE (cv::IMREAD_GRAYSCALE)
  typedef cv::Mat IplImage;
#endif

} // namespace stag

#endif
