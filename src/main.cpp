#include <iostream>
#ifndef PLATFORM_NAME
#define PLATFORM_NAME "unknown"
#endif
int main() {
    std::cout << "binary-demo on " << PLATFORM_NAME << std::endl;
    return 0;
}
