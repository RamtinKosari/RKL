# ifndef __RKL_ERRORS
    # define __RKL_ERRORS
    # ifndef __RKL_CORE
        # include "../core.hpp"
    # endif // __RKL_CORE
    namespace error {
        //-- Error Types
        enum ErrorType {
            //-- File Errors
            ERROR_FILE,
            //-- Image Errors
            ERROR_IMAGE,
            //-- Color Errors
            ERROR_COLOR,
            //-- Progress Errors
            ERROR_PROGRESS
        };
        //-- Class Definition
        class Errors {
            private:
                int64_t count;
            public:
                //--  Display Errors
                //- Error(ERR_NUM, ERR_TYPE)
                void error(const int &, const int &) noexcept;
                //-- File Errors
                //- fileErrors(ERR_NUM)
                void fileErrors(const int &) noexcept;
        };
    };
# endif // __RKL_ERRORS