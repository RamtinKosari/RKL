# ifndef __RKL_ERRORS
    # include "errors.hpp"
    //-- Display Errors
    void error::Errors::error(const int &errType, const int &errNum) noexcept(true) {
        switch (errType) {
            //-- File Errors
            case ERROR_FILE: {
                fileErrors(errNum);
                break;
            };
            //-- Image Errors
            case ERROR_IMAGE: {
                break;
            };
            //-- Color Errors
            case ERROR_COLOR: {
                break;
            };
            //-- Progress Errors
            case ERROR_PROGRESS: {
                break;
            };
        }
    }

    //-- File Errors
    void error::Errors::fileErrors(const int &errNum) noexcept(true) {
        switch (errNum) {
            case 100: {
                std::cout << "-- Err : Valid Parameter is 'USE_AUTO'." << std::endl;
                break;
            };
            case 101: {
                std::cout << "-- Err : Valid Parameters are 'USE_NAME' and 'USE_PATHNAME'." << std::endl;
                break;
            };

        }
    } 
# endif // __RKL_ERRORS