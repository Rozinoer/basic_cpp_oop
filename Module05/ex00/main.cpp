#include "Bureaucrat.hpp"
#include "Exception.hpp"

int main ( void )
{
    try
    {
        Bureaucrat a;
        std::cerr << a.getGrade() << std::endl << a.getName() << std::endl;
    }
    catch(Exception &e)
    {
        e.error();
    }
    return 0;
}