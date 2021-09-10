#include "Bureaucrat.hpp"
// #include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main ( void )
{
    try
    {
    Bureaucrat jack("Jack", 4);
    PresidentialPardonForm form("Tom");
    // Bureaucrat jack("Jack", 4);
    form.execute(jack);
    }
    catch (Exception &e)
    {
        e.error();
    }
    return 0;
}