#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    /* data */
public:
    RobotomyRequestForm(int gradeRequired, int gradeExecute);
    ~RobotomyRequestForm();

    RobotomyRequestForm(const RobotomyRequestForm &other);
    RobotomyRequestForm &operator = (const RobotomyRequestForm &other);
};
