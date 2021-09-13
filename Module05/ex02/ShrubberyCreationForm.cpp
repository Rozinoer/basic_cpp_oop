#include "ShrubberyCreationForm.hpp"
#include <fstream>
int ShrubberyCreationForm::_gradeExecute = 137;
int ShrubberyCreationForm::_gradeRequired = 145;

ShrubberyCreationForm::ShrubberyCreationForm(/* args */)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", _gradeRequired, _gradeExecute), _target(target)
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (ShrubberyCreationForm::_gradeExecute >= executor.getGrade())
    {
        std::ofstream	output;
	    const std::string	name = this->_target + "_shrubbery";
		output.open(name.data(), std::ofstream::trunc | std::ofstream::out);
        output << "           ^^^^^^^            _  _" << std::endl;
        output << "  .       <\\\\/%\\       .   /%\\/%\\     ." << std::endl;
        output << "      __.<\\\\%#//\\,_       <%%#/%%\\,__  ." << std::endl;
        output << ".    <%#/|\\\\%%%#///\\    /^%#%%\\///%#\\\\" << std::endl;
        output << "      \"\"/%/\"\"\\ \\\"\"//|   |/\"\"\'/ /\\//\"//'" << std::endl;
        output << " .     L/'`   \\ \\  `    \"   / /  ```" << std::endl;
        output << "        `      \\ \\     .   / /       ." << std::endl;
        output << " .       .      \\ \\       / /  ." << std::endl;
        output << "        .        \\ \\     / /          ." << std::endl;
        output << "   .      .    ..:\\ \\:::/ /:.     .     ." << std::endl;
        output << "______________/ \\__;\\___/\\;_/\\________________________________" << std::endl;
        output << "YwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYw" << std::endl;
        output.close();
	    std::cout << "Form " << this->_name << " has been executed by " << executor.getName() << std::endl;
    }
    else
        Form::_GradeTooLowException();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}