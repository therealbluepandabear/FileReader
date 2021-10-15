#include <iostream>
#include <fstream>
#include <direct.h>

int main() {
    std::ofstream MyFile;

    std::ofstream o("C:/Users/TO/Documents/Hi/pog.txt");

    o << std::to_string(rand()) << std::endl;

    return 0;
}
