#include "Bureaucrat.hpp"
// #include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main ( void )
{
    Bureaucrat jack("Jack", 1);
    Bureaucrat tom("Tom", 150);
    Intern bob;

    Form *someform;
    someform = bob.makeForm("RobotomyRequestForm", "BENDER");
    jack.signForm(*someform);
    jack.executeForm(*someform);

    return 0;
}