#pragma once

template<typename T> void	iter(T const *array, unsigned int const len, void (*f)(T const & arg))
{
	unsigned int	i = 0;

	while (i < len)
	{
		(f)(array[i]);
		i++;
	}
}
