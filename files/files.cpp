# ifndef __RKL_FILES
    # include "files.hpp"
    //-- Load File by Searching Automatically, First Match Will be Loaded
    //- load(USE_AUTO)
    bool File::load(int16_t &option) noexcept(true) {
        if (option == USE_AUTO) {

        } else {
            
        }
    }

    //-- Load File Directly with Given Path and Name
    //- load(FILE_PATHNAME, USE_PATHNAME)
    //-- Load File by Finding Name in Directories
    //- load(FILE_NAME, USE_NAME)
    bool File::load(std::string &path, int16_t &option) noexcept(true) {

    }
# endif // __RKL_FILES