#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath> 

bool    isDigit(char c)
{
    if (c < 48 || c > 89)
        return false;
    return true;
}

bool    isStrDigit(std::string &str)
{
    for (std::string::iterator it = str.begin(); it < str.end(); it++)
    {
        if (!((it == str.begin() && (*it == '-' || *it == '+')) || isDigit(*it)))
            return false;
    }
    return true;
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Invalid number of argument." << std::endl;
        return 0;
    }

    std::string str = argv[1];
    if (str.size() == 1 && !isDigit(argv[1][0])) // convert to a char
    {
        char c = argv[1][0];
        if (c > 31)
            std::cout << "char: " << c << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << std::endl;
        return 0;
    }
    else
    {
        std::string tmp = str;
        if (str.at(str.size() -1) == 'f' && str.find('.') != std::string::npos) // convert to a float
        {
            if (isStrDigit(tmp.erase(tmp.size() -1).erase(tmp.find('.'), 1)))
            {
                float   num = atof(str.c_str());
                std::cout << "char: Impossible" << std::endl;
                if (std::isinf(num))
                    std::cout << "int: Impossible" << std::endl;
                else
                    std::cout << "int: " << static_cast<int>(num) << std::endl;
                std::cout << "float: " << num << (num == (int)num ? ".0f" : "f") << std::endl;
                std::cout << "double: " << static_cast<double>(num) << (num == (int)num ? ".0" : "") << std::endl;
        
                return 0;
            }
        }
        else if (str.find('.') != std::string::npos) // convert to a double
        {
            if (isStrDigit(tmp.erase(tmp.find('.'), 1)))
            {
                double  num = atof(str.c_str());
                std::cout << "char: Impossible" << std::endl;
                if (std::isinf(num))
                    std::cout << "int: Impossible" << std::endl;
                else
                    std::cout << "int: " << static_cast<int>(num) << std::endl;
                std::cout << "float: " << static_cast<float>(num) << (num == (int)num ? ".0f" : "f") << std::endl;
                std::cout << "double: " << num << (num == (int)num ? ".0" : "") << std::endl;
                return 0;
            }
        }
        else if (isStrDigit(str)) // convert to an int
        {
            int num = atoi(str.c_str());
            if (str.length() > 5 && num == -1)
                std::cout << "Type conversion isn't possible.[Integer Overflow]" << std::endl;
            else
            {
                if (num > 31 && num < 127)
                    std::cout << "char: " << static_cast<char>(num) << std::endl;
                else
                    std::cout << "char: Non displayable" << std::endl;
                std::cout << "int: " << num << std::endl;
                std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
                std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
            }
            return 0;
        }
        else if (str == "nan")
        {
            double num = atof(str.c_str());
            if (std::isnan(num))
            std::cout << "char: Impossible" << std::endl;
            std::cout << "int: Impossible" << std::endl;
            std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
            return 0;
        }
    }
    std::cout << "Type conversion isn't possible." << std::endl;
    return 0;
}