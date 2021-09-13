#include <iostream>

class Exception : public std::exception
{
private:
    const char *_error;
public:
    Exception(const char *error);
    const char* what() const throw();
};
