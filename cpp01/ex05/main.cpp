#include "Harl.hpp"

int main( void ) {
    void    (Harl::*funcPtr)(std::string level);

    funcPtr = &Harl::complain;

    Harl harl = Harl();

    harl.complain("debug");
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");

	(harl.*funcPtr)("ERROR");
	(harl.*funcPtr)("RIEN");
    (harl.*funcPtr)("");
}