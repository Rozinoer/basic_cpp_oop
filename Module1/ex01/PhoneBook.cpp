#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    int i = 0;
    while (i <= 7)
    {
        this->_list[i] = Contact();
        i++;
    }
}