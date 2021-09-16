#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string _target;
    static int _gradeRequired;
    static int _gradeExecute;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm();

    RobotomyRequestForm *clone(std::string target);
    void execute(Bureaucrat const &executor) const;

    RobotomyRequestForm(const RobotomyRequestForm &other);
    RobotomyRequestForm &operator = (const RobotomyRequestForm &other);
};
