#include <string>

bool is_dot(std::string str)
{
		if (str.find('.') == std::string::npos
		|| str.find('.') == 0 || str.find('.') == str.length() - 1
		|| str.find('.') != str.rfind('.'))
			return true;
		return false;
}

bool is_dash(std::string str)
{
	if (str.find('-') != std::string::npos && (str.find('-') != str.rfind('-')
		|| str.find('-') != 0))
		return true;
	return false;
}

bool is_valid_sym(std::string str)
{
	size_t i = 0;

	while (i < str.length() - 1)
	{
		if (!isdigit(str[i]) && str[i] != '-' && str[i] != '.')
			return false;
		i++;
	}
	return true;
}

bool	is_char(std::string const & str)
{
	if (str.length() != 1 || isdigit(str[0]))
		return false;
	return true;
}

bool	is_int(std::string const & str)
{
	size_t	i = 0;

	if (str.find('-') != std::string::npos && 
	(str.find('-') != str.rfind('-') || str.find('-') != 0))
		return false;
	while (i < str.length())
	{
		if (!isdigit(str[i]) && str[i] != '-')
			return false;
		i++;
	}
	return true;
}

bool	is_float(std::string const & str)
{
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return true;
	if (is_dot(str) || str.find('f') != str.length() - 1)
		return false;
	if (is_dash(str))
		return false;
	if (!is_valid_sym(str))
		return false;
	return true;
}

bool	is_double(std::string const & str)
{
	if (str == "-inf" || str == "+inf" || str == "nan")
		return true;
	if (is_dot(str))
		return false;
	if (is_dash(str))
		return false;
	if (!is_valid_sym(str))
		return false;
	return true;
}

int	check(std::string const & str)
{
	if (is_char(str))
		return 1;
	if (is_int(str))
		return 2;
	if (is_float(str))
		return 3;
	if (is_double(str))
		return 4;
	return 0;
}