#include "Karen.hpp"

int main ( void )
{
    Karen k = Karen();
    k.complain("ERROR");
    k.complain("INFO");
    k.complain("WARNING");
    k.complain("DEBUG");
    return (0);
}