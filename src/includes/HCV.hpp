#ifndef HCV_H
#define HCV_H
#include <iostream>
#include <string>


class HCV {
    public:
        HCV(int width, int height, std::string contents);

        int width;
        int height;
        std::string contents;
};

#endif
