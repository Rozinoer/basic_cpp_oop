#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    static int _gradeRequired;
    static int _gradeExecute;
    std::string _target;
public:
    PresidentialPardonForm(/* args */);
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();

    PresidentialPardonForm *clone(std::string target);
    void execute(Bureaucrat const &executor) const;

    PresidentialPardonForm(const PresidentialPardonForm &other);
    PresidentialPardonForm &operator = (const PresidentialPardonForm &other);
};
