#include "Exception.hpp"

Exception::Exception(const char *error) : _error(error)
{

}

const char* Exception::what() const throw()
{
    return this->_error;
}