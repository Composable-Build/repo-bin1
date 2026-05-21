#include <iostream>
#include <string>
#include "binary_info.h"
#include "version.h"
int main(int argc, char** argv) {
    if (argc > 1) {
        std::string a = argv[1];
        if (a == "--version") { std::cout << get_version() << std::endl; return 0; }
        if (a == "--name")    { std::cout << BINARY_NAME   << std::endl; return 0; }
    }
    std::cout << BINARY_NAME << " " << get_version() << ": " << BINARY_MESSAGE << std::endl;
    return 0;
}
