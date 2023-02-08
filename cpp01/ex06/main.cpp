#include "Harl.hpp"

int main(int argc, char** argv) {
    if (argc != 2)
    {
        std::cout << "[ ERROR ] wrong args." << std::endl;
        return 0;
    }

    Harl harl = Harl(argv[1]);
    harl.complain();
}