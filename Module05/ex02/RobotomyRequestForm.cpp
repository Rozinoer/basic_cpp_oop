#include "RobotomyRequestForm.hpp"

int RobotomyRequestForm::_gradeExecute = 45;
int RobotomyRequestForm::_gradeRequired = 72;

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", _gradeRequired, _gradeExecute), _target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (RobotomyRequestForm::_gradeExecute >= executor.getGrade())
    {
        std::cout << "*******************some drilling noises*******************" << std::endl;
        std::cout << this->_target + " has been robotomized successfully 50% of the time." << std::endl;
    }
    else
        Form::_GradeTooLowException();
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
        this->_target = other._target;
    }
    return *(this);
}