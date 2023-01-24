# ifndef __RKL_CORE
    # define __RKL_CORE
    //-- Headers
    # include "Dictionary.hpp"
    # include <iostream>
    //-- Check OpenCV and Include It
    # ifndef OPENCV_HIGHGUI_HPP
        # include <opencv4/opencv2/highgui.hpp>
    # endif // OPENCV_HIGHGUI_HPP
    # ifndef OPENCV_IMGPROC_HPP
        # include <opencv4/opencv2/imgproc.hpp>
    # endif // OPENCV_IMGPROC_HPP
    //-- Main Configs
    //- Log
    # define Log active
# endif // __RKL_CORE