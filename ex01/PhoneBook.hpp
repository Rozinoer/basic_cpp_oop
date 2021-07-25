# pragma once
#include <iostream>
#include <string>
#include <iomanip>
class Contact
{
    public:
        std::string getName()
        {
            return (this->_firstName);
        }
        int getNbContact()
        {
            return (this->_nbContact);
        }
        std::string getParam(int i)
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
        Contact()
        {
            _firstName = "Null";
            _lastName = "Null";
            _nickname = "Null";
            _phoneNumber = "Null";
            _darkestSecret = "Null";
        }
        Contact(std::string name, std::string lastName, std::string nickname,
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
    private:
        static int  _nbContact;
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNumber;
        std::string _darkestSecret;
        std::string _param[4];
};
int Contact::_nbContact = 0;

class PhoneBook
{
    public:
        Contact _list[8];
        PhoneBook()
        {
            int i = 0;
            while (i <= 7)
            {
                this->_list[i] = Contact();
                i++;
            }
        }
    private:
};