#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    /* data */
public:
    PresidentialPardonForm(/* args */);
    PresidentialPardonForm(int gradeRequired, int gradeExecute);
    ~PresidentialPardonForm();
};
