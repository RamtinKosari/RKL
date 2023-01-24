# ifndef __RKL_FILES
    # define __RKL_FILES
    //-- Needed Library
    # include <dirent.h>
    # include <type_traits>
    //-- Include Core
    # ifndef __RKL_CORE
        # include <iostream>
        // # include "../core.hpp"
    # endif // __RKL_CORE
    //-- Options of Load Function
    # if __cplusplus < 201103L
        # error __RKL_FILES Header Needs at Least C++11 Compliant Compiler
    # endif
    enum LoadOptions : int16_t {
        //-- Load First Found File
        USE_AUTO,
        //-- Load with Direct Path to the File
        USE_PATHNAME,
        //-- Load by Finding File in a Directory Automatically by File's Name
        USE_NAME
    };
    struct fileInfo {
        //-- File Name
        std::string name;
        //-- File Path
        std::string path;
    };
    //-- Class Definition
    class File {
        private:
            fileInfo file;
        public:
            //-- Load File by Searching Automatically, First Match Will be Loaded
            //- load(USE_AUTO)
            bool load(int16_t &) noexcept;
            //-- Load File Directly with Given Path and Name
            //- load(FILE_PATHNAME, USE_PATHNAME)
            bool load(std::string &, int16_t &) noexcept;
            //-- Load File by Finding Name in Directories
            //- load(FILE_NAME, USE_NAME)
            bool load(std::string &, int16_t) noexcept;
            
    };
# endif // __RKL_FILES