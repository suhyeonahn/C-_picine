#ifndef WRITEFILE_HPP
# define WRITEFILE_HPP

#include <iostream>
#include <fstream>
#include <cstring>

void    writeReplaceFile( std::ifstream& readFile, std::ofstream& writeFile, char** argv );
int     main( int argc, char **argv );

#endif
