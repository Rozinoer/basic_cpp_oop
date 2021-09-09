#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Exception.hpp"

int main ( void )
{
    Bureaucrat tom("Tom", 1);
    Bureaucrat ivan("Ivan", 5);
    Form form("Intra", 4, 4);
    try
    {
        form.beSigned(tom);
        form.beSigned(ivan);
    }
    catch(Exception& e)
    {
        e.error();
    }
    return 0;
}