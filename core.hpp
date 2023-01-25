# ifndef __RKL_CORE
    # define __RKL_CORE
    //-- Headers
    # include "Dictionary.hpp"
    # include "errors/errors.hpp"
    # include <iostream>
    # include <vector>
    //-- Check Compiler
    enum Compilers {
        GCC,
        MINGW,
        CLANG,
        INTEL,
        VISUAL_STUDIO_CODE
    };
    # if defined(__GNUC__)
        # define DEFAULT_COMPILER 0
    # elif defined(__MINGW32__) || defined(__MINGW64__)
        # define DEFAULT_COMPILER 1
    # elif defined(__clang__)
        # define DEFAULT_COMPILER 2
    # elif defined(__INTEL_COMPILER) 
        # define DEFAULT_COMPILER 3
    # elif defined(_MSC_VER)
        # define DEFAULT_COMPILER 4
    # endif // Check Compiler
    //-- Check OpenCV and Include It
    // # ifndef OPENCV_HIGHGUI_HPP
    //     # include <opencv4/opencv2/highgui.hpp>
    // # endif // OPENCV_HIGHGUI_HPP
    // # ifndef OPENCV_IMGPROC_HPP
    //     # include <opencv4/opencv2/imgproc.hpp>
    // # endif // OPENCV_IMGPROC_HPP
    //-- Main Configs
    //- Log
    # define Log active
# endif // __RKL_CORE