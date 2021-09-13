#include "Bureaucrat.hpp"
#include "Exception.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
    if (this->_grade < 1)
        Bureaucrat::_GradeTooHighException();
    if (this->_grade > 150)
        Bureaucrat::_GradeTooLowException();
}

Bureaucrat::Bureaucrat() : _name("def"), _grade(-1)
{
    
}

Bureaucrat::~Bureaucrat()
{
}

std::string const Bureaucrat::getName( void ) const
{
    return this->_name;
}

int Bureaucrat::getGrade( void ) const
{
    return this->_grade;
}

void Bureaucrat::incrementGrade( void ) 
{
    if ((this->_grade - 1) < 1)
        Bureaucrat::_GradeTooHighException();
    else
        this->_grade--;
}

void Bureaucrat::decrementGrade( void ) 
{
    if ((this->_grade + 1) > 150)
        Bureaucrat::_GradeTooLowException();
    else
        this->_grade++;
}

void Bureaucrat::_GradeTooHighException( void )
{
    // throw GradeTooHighException();
}

void Bureaucrat::_GradeTooLowException( void )
{
    // throw GradeTooLowException();
}

void Bureaucrat::signForm(std::string name, int isSigned)
{
    if (isSigned)
        std::cout << this->_name + " signs " + name << std::endl;
    else
        std::cout << this->_name + " cannot signs " + name + " becouse form is already signed" << std::endl;
}

void Bureaucrat::executeForm(Form const &form)
{
    if (this->_grade <= form.getGradeExecute())
        std::cout << this->_name + "executes" + form.getName() << std::endl;
    else
        Bureaucrat::_GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
    os << bureaucrat.getName() + ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}