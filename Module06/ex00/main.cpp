#include <string>
#include <iostream>

int		check(std::string const & str);
bool	convert(std::string const & str, int idx);

int main(int argc, char *argv[])
{
	std::string str;
	int idx;
	str = argv[1];
	if (argc != 2 || str.empty())
	{
		std::cerr << "Error: argument" << std::endl;
		return (1);
	}
	idx = check(str);
	if (!idx || !convert(str, idx))
	{
		std::cerr << "Error: impossible conversion" << std::endl;
		return (1);
	}
	return (0);
}
