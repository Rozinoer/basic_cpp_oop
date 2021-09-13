#include "Bureaucrat.hpp"

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
    throw Exception("GradeTooHighException");
}

void Bureaucrat::_GradeTooLowException( void )
{
    throw Exception("GradeTooLowException");
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
    os << bureaucrat.getName() + ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}