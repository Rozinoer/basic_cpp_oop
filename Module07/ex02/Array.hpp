#pragma once
# include <iostream>
# include <string>

template<typename T> class Array
{
	private:
		T			*_array;
		unsigned int _size;
	public:
		Array(): _size(0), _array(NULL) {};
		Array(unsigned int n): _array(new T[n]), _size(n) {};
		Array( Array const & other ): _size(other._size)
		{
			unsigned int i = 0;
			_array = new T[_size];

			while (i < _size)
			{
				_array[i] = other._array[i];
				i++;
			}
		};
		~Array() 
		{
			if (_array)
				delete [] _array;
		};
		Array &		operator=( Array const & other )
		{
			unsigned int	i = 0;

			if (this == &other)
				return (*this);
			if (_array)
				delete [] _array;
			_size = other._size;
			if (_size)
			{
				_array = new T[_size];
				while (i < _size)
				{
					_array[i] = other._array[i];
					i++;
				}
			}
			else
				_array = NULL;
		};
		T &	operator[](unsigned int i)
		{
			if (i >= _size)
			{
				throw Erange();
			}
			return (_array[i]);
		};
		T	operator[](unsigned int i) const
		{
			if (i >= _size)
			{
				throw Erange();
			}
			return (_array[i]);
		};
		unsigned int	size(void) const
		{
			return (_size);
		}
		class Erange: public std::exception
		{
			const char * what() const throw()
			{
				return ("Out of range");
			};
		};
};

template<typename T> std::ostream &	operator<<( std::ostream & o, Array<T> const & other )
{
	for (int i = 0;i < other.size(); i++)
		o << other[i] <<  std::endl;
	return (o);
}
