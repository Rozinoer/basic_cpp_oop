#include "Contact.hpp"

int Contact::_nbContact = 0;

std::string Contact::getName()
{
    return (this->_firstName);
}

int Contact::getNbContact()
{
    return (this->_nbContact);
}

std::string Contact::getParam(int i)
{
    if (i == 0)
        return (this->_param[0]);
    else if (i == 1)
        return (this->_param[1]);
    else if (i == 2)
        return (this->_param[2]);
    else
        return (this->_param[3]);
}

Contact::Contact()
{
    this->_firstName = "Null";
    this->_lastName = "Null";
    this->_nickname = "Null";
    this->_phoneNumber = "Null";
    this->_darkestSecret = "Null";
}

Contact::Contact(std::string name, std::string lastName, std::string nickname,
        std::string phoneNumber, std::string darkestSecret, int index)
{
    this->_firstName = name;
    this->_lastName = lastName;
    this->_nickname = nickname;
    this->_phoneNumber = phoneNumber;
    this->_darkestSecret = darkestSecret;
    this->_nbContact++;
    this->_param[0] = std::to_string(index);
    this->_param[1] = name;
    this->_param[2] = lastName;
    this->_param[3] = nickname;
}