#include <iostream>

int main ( void )
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "address:\t" << &str << std::endl;
    std::cout << "address by ptr:\t" << stringPTR << std::endl;
    std::cout << "address by ref:\t" << &stringREF << std::endl;

    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    return (0);
}