#include "Bureaucrat.hpp"

int main ( void )
{
    try
    {
        Bureaucrat a;
        std::cerr << a << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat a("Tom", 1);
        std::cerr << a << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat a("Tom", 2);
        std::cerr << a << std::endl;
        a.incrementGrade();
        std::cerr << a << std::endl;
        a.incrementGrade();
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}