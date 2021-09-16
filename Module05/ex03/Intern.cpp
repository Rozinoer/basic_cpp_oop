#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	_forms[0] = new ShrubberyCreationForm();
	_forms[1] = new RobotomyRequestForm();
	_forms[2] = new PresidentialPardonForm();
}

Intern::Intern( const Intern & src )
{
	size_t	i = 0;

	while (i < FORMS)
	{
		_forms[i] = src._forms[i];
		i++;
	}
}

Intern::~Intern()
{
	size_t	i = 0;

	while (i < FORMS)
	{
		if (_forms[i])
			delete _forms[i];
		i++;
	}
}


Intern &				Intern::operator=( Intern const & rhs )
{
	size_t	i = 0;

	while (i < FORMS)
	{
		if (_forms[i])
			delete _forms[i];
		_forms[i] = rhs._forms[i];
		i++;
	}
	return *this;
}

Form*	Intern::makeForm(std::string const name, std::string const target)
{
	size_t	i = 0;

	while (i < FORMS)
	{
		if (_forms[i]->getName() == name)
		{
			std::cout << "Intern creates " << name << std::endl;
			return (_forms[i]->clone(target));
		}
		i++;
	}
	std::cerr << "Intern couldnt't create form \"" << name << "\"" << std::endl;
	return (NULL);
}