#pragma once
# include <iostream>
# include <string>

class Data
{
	private:
		int	_value;
	public:

		Data();
		Data(Data const & src);
		Data(int value);
		~Data();

		Data &operator=( Data const & rhs );
		int	getValue() const;

};

std::ostream &operator<<( std::ostream & o, Data const & i );