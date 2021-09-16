#pragma once

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    static int _gradeRequired;
    static int _gradeExecute;
    std::string _target;
public:
    ShrubberyCreationForm(/* args */);
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();

    ShrubberyCreationForm *clone(std::string target);
    void execute(Bureaucrat const &executor) const;

    ShrubberyCreationForm(const ShrubberyCreationForm &other);
    ShrubberyCreationForm &operator = (const ShrubberyCreationForm &other);
};
