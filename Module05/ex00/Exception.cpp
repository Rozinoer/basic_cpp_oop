#include "Exception.hpp"

Exception::Exception(std::string error) : _error(error)
{
}

Exception::~Exception()
{
}

void Exception::error( void )
{
    std::cout << this->_error << std::endl;
}