#include "Bureaucrat.hpp"
#include "Exception.hpp"

int main ( void )
{
    try
    {
        Bureaucrat a;
        std::cerr << a << std::endl;
    }
    catch(Exception &e)
    {
        e.error();
    }

    try
    {
        Bureaucrat a("Tom", 1);
        std::cerr << a << std::endl;
    }
    catch(Exception &e)
    {
        e.error();
    }

    try
    {
        Bureaucrat a("Tom", 2);
        std::cerr << a << std::endl;
        a.incrementGrade();
        std::cerr << a << std::endl;
    }
    catch(Exception &e)
    {
        e.error();
    }
    return 0;
}