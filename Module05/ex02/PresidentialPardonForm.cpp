#include "PresidentialPardonForm.hpp"

int PresidentialPardonForm::_gradeExecute = 5;
int PresidentialPardonForm::_gradeRequired = 25;

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", _gradeRequired, _gradeExecute), _target(target)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (PresidentialPardonForm::_gradeExecute >= executor.getGrade())
    {
        std::cout << this->_target + " has been pardoned by Zafod Beeblebrox" << std::endl;
    }
    else
        Form::_GradeTooLowException();
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other)
{
    std::cout << "Copy constructor" << std::endl;
    *this = other;
}
 
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_gradeExecute = other._gradeExecute;
        this->_gradeRequired = other._gradeRequired;
        this->_isSigned = other._isSigned;
    }
    return *(this);
}