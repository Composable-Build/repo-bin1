#include <iostream>
#ifndef PLATFORM_NAME
#define PLATFORM_NAME "unknown"
#endif
#include "bin_info.h"
int main() {
    std::cout << BIN_NAME << " on " << PLATFORM_NAME << " : " << BIN_MESSAGE << std::endl;
    return 0;
}
