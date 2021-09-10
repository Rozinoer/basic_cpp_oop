#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(int gradeRequired, int gradeExecute) : Form("RobotomyRequestForm", gradeRequired, gradeExecute)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other)
{
    std::cout << "Copy constructor" << std::endl;
    *this = other;
}
 
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
    {
        
    }
    return *(this);
}