#include <iostream>
#include <fstream>

void write() {
    std::ofstream o("C:/Users/TO/Documents/Hi/pog.txt");

    for (int i = 0; i < 1000; i++) {
        o << std::to_string(rand()) << std::endl;
    }

    o.close();
}

void read() {
    std::string myText;

    std::ifstream r("C:/Users/TO/Documents/Hi/pog.txt");

    while (getline (r, myText)) {
        std::cout << myText;
    }

    r.close();
}
int main() {

    write();
    read();

    return 0;
}
