#include <iostream>
#include "init.hpp"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: mygit <command>\n";
        return 1;
    }

    std::string command = argv[1];

    if (command == "init") {
        init_repository(".");
    }
    else {
        std::cout << "Unknown command: " << command << "\n";
    }

    return 0;
}
