#pragma once
# include <iostream>
# include <string>
# include "Form.hpp"
# define FORMS 3

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();
		Intern &	operator=( Intern const & rhs );
		Form*		makeForm(std::string const name, std::string const target);

	private:
		Form		*_forms[3];

};