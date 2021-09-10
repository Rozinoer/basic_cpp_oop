#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(int gradeRequired, int gradeExecute) : Form("PresidentialPardonForm", gradeRequired, gradeExecute)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{
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