#include <string>
#include <iostream>
#include <climits>
#include <iomanip>
#include <cerrno>
#include <cfloat>
#include <cstdlib>
#include <math.h>

void	to_char(std::string const & str)
{
	char	c = str[0];

	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

bool	to_int(std::string const & str)
{
	char staticChar;
	double staticDouble;
	float staticFloat;
	long int	l = strtol(str.data(), NULL, 10);
	int			i;

	if (l > INT_MAX || l < INT_MIN)
	{
		std::cerr << "Error: int value out of range" << std::endl;
		return (false);
	}
	i = atoi(str.data());
	staticChar = static_cast<char>(i);
	staticFloat = static_cast<float>(i);
	staticDouble = static_cast<double>(i);
	//----------------------char---------------------
	if (i > CHAR_MAX || i < CHAR_MIN)
		std::cout << "char: impossible" << std::endl;
	else if (!(32 <= staticChar && staticChar <= 126))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << staticChar << "'" << std::endl;
	//-----------int_Float_Double---------------------------
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << staticFloat << ".0f" << std::endl;
	std::cout << "double: " << staticDouble << ".0" << std::endl;
	return (1);
}

bool	to_float(std::string const & str)
{
	char staticChar;
	int staticInt;
	double staticDouble;
	// string to double (atof)
	float	f = strtod(str.data(), NULL);;

	if (errno == ERANGE)
	{
		std::cerr << "Error: float value out of range" << std::endl;
		return (false);
	}
	// f = atof(str.data()); // string to double (strtod)
	staticChar = static_cast<char>(f);
	staticInt = static_cast<long>(f);
	staticDouble = static_cast<double>(f);
	//----------------------char---------------------
	if (staticInt > CHAR_MAX || staticInt < CHAR_MIN)
		std::cout << "char: impossible" << std::endl;
	else if (!(32 <= (staticChar) && (staticChar) <= 126))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << staticChar << "'" << std::endl;
	//-----------------------int---------------------
	if (staticInt > INT_MAX || staticInt < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << staticInt << std::endl;
	//-----------------------float---double-------------------
	if (fmod(f, 1))
	{
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << staticDouble << std::endl;
	}
	else
	{
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << staticDouble << ".0" << std::endl;
	}
	return (1);
}

bool	to_double(std::string const & str)
{
	char staticChar;
	int staticInt;
	double staticDouble;
	float staticFloat;
	double	d = strtod(str.data(), NULL);

	if (errno == ERANGE)
	{
		std::cerr << "Error: double value out of range" << std::endl;
		return (false);
	}
	staticChar = static_cast<char>(d);
	staticInt = static_cast<long>(d);
	staticDouble = static_cast<double>(d);
	staticFloat = static_cast<float>(d);
	//----------------------char---------------------
	if (staticInt > CHAR_MAX || staticInt < CHAR_MIN)
		std::cout << "char: impossible" << std::endl;
	else if (!(32 <= (staticChar) && (staticChar) <= 126))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << staticChar << "'" << std::endl;
	//-----------------------int---------------------
	if (staticInt > INT_MAX || staticInt < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << staticInt << std::endl;
	//-----------------------float---------------------
	if (fmod(staticFloat, 1))
		std::cout << "float: " << staticFloat << "f" << std::endl;
	else
		std::cout << "float: " << staticFloat << ".0f" << std::endl;
	//-----------------------double---------------------
	if (fmod(d, 1))
		std::cout << "double: " << d << std::endl;
	else
		std::cout << "double: " << d << ".0" << std::endl;
	return (1);
}

bool	convert(std::string const & str, int code)
{
	switch (code)
	{
	case 1:
		to_char(str);
		return 1;
		break;
	case 2:
		return to_int(str);
		break;
	case 3:
		if (str == "nanf" || str == "+inff" || str == "-inff")
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << str << std::endl;
			std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
			return (1);
		}
		return (to_float(str));
		break;
	case 4:
		if (str == "nan" || str == "+inf" || str == "-inf")
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << str << "f" << std::endl;
			std::cout << "double: " << str << std::endl;
			return (1);
		}
		return (to_double(str));
		break;
	
	default:
		break;
	}
	return (0);
}