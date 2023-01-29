#include "WriteFile.hpp"

void    test( std::string fileName ) {
    std::ifstream originalFile(fileName);
    std::ifstream modifiedFile(fileName + ".replace");
    std::string line;

    std::cout << "'This is the output of original file.'" << std::endl;
    std::cout << "<<<\n" << std::endl;
    while (!originalFile.eof()) {
        getline(originalFile, line);
        std::cout << line << std::endl;
    }
    std::cout << "\n\n'This is the output of modified file.'" << std::endl;
    std::cout << "<<<\n" << std::endl;
    while (!modifiedFile.eof()) {
        getline(modifiedFile, line);
        std::cout << line << std::endl;
    }
}

int main( int argc, char **argv ) {
    if (argc != 4) {
        std::cout << "[ ERROR ] wrong args." << std::endl;
        return 0;
    }
    
    std::string fileName(argv[1]);
    std::ifstream readFile(fileName);
    if (readFile.fail()) {
        std::cout << "[ ERROR ] Failed at opening input file." << std::endl;
        return 1;
    }

    std::ofstream writeFile(fileName + ".replace");
    if (writeFile.fail()) {
        std::cout << "[ ERROR ] Failed at opening output file." << std::endl;
        return 1;
    }
    writeReplaceFile(readFile, writeFile, argv);

    readFile.close();
    writeFile.close();

    test(fileName);
}