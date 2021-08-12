#include "Karen.hpp"

int main ( int argc, char *argv[] )
{
    Karen k = Karen();
    k.complain(argv[argc - 1]);
    return (0);
}