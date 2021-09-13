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
        Bureaucrat ivan("Ivan", 138);
        RobotomyRequestForm form("Tom");
    // Bureaucrat jack("Jack", 4);
        form.beSigned(jack);
        form.beSigned(jack);
        form.execute(jack);
        form.execute(ivan);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}