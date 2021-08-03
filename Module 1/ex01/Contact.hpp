# pragma once
#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
    public:
        std::string getName();
        int getNbContact();
        std::string getParam(int i);
        Contact();
        Contact(std::string name, std::string lastName, std::string nickname,
        std::string phoneNumber, std::string darkestSecret, int index);
    private:
        static int  _nbContact;
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNumber;
        std::string _darkestSecret;
        std::string _param[4];
};