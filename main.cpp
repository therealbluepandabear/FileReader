#include <iostream>
#include <fstream>
#include <direct.h>

int main() {

    std::ofstream o("C:/Users/TO/Documents/Hi/pog.txt");

    for (int i = 0; i < 1000; i++) {
        o << std::to_string(rand()) << std::endl;
    }

    o.close();

    return 0;
}
