#include "Contact.hpp"
#include "PhoneBook.hpp"

static void addContact(PhoneBook *book)
{
    static int num = 0;

    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
    
    std::cout << "firstName:";
    std::cin >> firstName;
    std::cout << std::endl << "lastName:";
    std::cin >> lastName;
    std::cout << std::endl << "nickname:";
    std::cin >> nickname;
    std::cout << std::endl << "PhoneNumber:";
    std::cin >> phoneNumber;
    std::cout << std::endl << "Darkesr Secret:";
    std::cin >> darkestSecret;
    std::cout << std::endl;
    
    book->_list[num % 8] = Contact(firstName, lastName,
    nickname, phoneNumber, darkestSecret, num % 8);
    num++;
}

static int header()
{
    int i = 0;
    int l = 0;
    std::string label[4];
    label[0] = "index";
    label[1] = "First name";
    label[2] = "Last name";
    label[3] = "nickname";
    std::cout << std::setfill('-') << std::setw(44);
    std::cout << "" << std::endl << std::setfill(' ');
    while (i <= 44)
    {
        if ( i % 11 == 0)
            std:: cout << '|';
        if (i == 44)
        {
            std::cout << std::endl;
            break ;
        }
        i++;
        std::cout << std::setw(10);
        std::cout << label[l];
        l++;
        i+=10;
    }
    std::cout << std::setfill('-') << std::setw(44);
    std::cout << "" << std::endl;
    std::cout << std::setfill(' ');
    return (0);
}

static int body(PhoneBook *book)
{
    int i = 0;
    int j = 0;
    int fl = 0;
    while (j < book->_list[0].getNbContact())
    {        
        while (i <= 44)
        {
            if ( i % 11 == 0)
                std:: cout << '|';
            if (i == 44)
            {
                std::cout << std::endl;
                break ;
            }
            i++;
            if (book->_list[j].getParam(fl).size() > 10)
            {
                std::cout << book->_list[j].getParam(fl).substr(0, 9) << '.';
            }
            else
            {
                std::cout << std::setw(10);
                std::cout << book->_list[j].getParam(fl);
            }
            fl++;
            i+=10;
        }
        i = 0;
        j++;
        fl = 0;
    }
    return (0);
}

static int tail()
{
    std::cout << std::setfill('-') << std::setw(44);
    std::cout << "" << std::endl << std::setfill(' ');
    return (0);
}

static int searchContact(PhoneBook *book)
{

    header();
    body(book);
    tail();
    std::string cin_str;
    int cin_index;
    int index = book->_list[0].getNbContact();

    while (1)
    {
        std::cout << "\033[0mEnter index contact or '-1' to exit \"SEARCH\": ";
        std::cin >> cin_str;
        if (cin_str == "-1")
            break;
        if (isdigit(cin_str[0]) && atoi(&cin_str[0]) >= 0)
            cin_index = atoi(&cin_str[0]);
        else
            cin_index = 10;
        if (cin_index < index)
        {
            std::cout  << book->_list[cin_index].getParam(1) << std::endl;
            std::cout << book->_list[cin_index].getParam(2) << std::endl;
            std::cout << book->_list[cin_index].getParam(3) << std::endl;
        }
        else
            std::cout << "\n\033[31mThis index was not exist. Correct your input.\n\033[0m" << std::endl;
    }
    return (0);
}

static int book(std::string cmd, PhoneBook *book)
{
    if (cmd == "ADD")
    {
        addContact(book);
    }
    else if (cmd == "SEARCH")
    {
        searchContact(book);
    }
    return (0);
}

int main()
{
    std::string cmd;
    PhoneBook pb = PhoneBook();

    while (1)
    {
        std::cout << "What do U want to do?" << std::endl;
        std::cout << "ADD contact" << std::endl;
        std::cout << "SEARCH contact" << std::endl;
        std::cout << "EXIT" << std::endl;
        std::cin >> cmd;
        if (cmd == "ADD" || cmd == "SEARCH")
        {
            book(cmd, &pb);
        }
        else if (cmd == "EXIT")
            break ;
    }
    return (0);
}