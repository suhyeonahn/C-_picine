#include "WriteFile.hpp"

void    writeReplaceFile( std::ifstream& readFile, std::ofstream& writeFile, char** argv ) {
    std::string toFind(argv[2]);
    std::string toReplace(argv[3]);
    std::string line;

    while (!readFile.eof()) {
        std::getline(readFile, line);

        size_t lineIndex = 0;
        while (lineIndex < line.length()) {
            size_t pos = line.substr(lineIndex).find(toFind);
            if (pos == std::string::npos) {
                writeFile << line.substr(lineIndex);
                break;
            }
            else {
                pos += lineIndex;
                writeFile << line.substr(lineIndex, pos - lineIndex);
                writeFile << toReplace;
                lineIndex = pos + toFind.length();            
            }
        }
        writeFile << std::endl;
    }
}