#include "Bureaucrat.hpp"
#include "Exception.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
}

Bureaucrat::Bureaucrat() : _name("def"), _grade(-1)
{
    throw Exception("No NAME and GRADE");
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