#include "Data.hpp"
#include <iostream>
#include <stdint.h>
#include <iomanip>

uintptr_t	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	deserialize(uintptr_t ptr)
{
	return reinterpret_cast<Data *>(ptr);
}

int main(void)
{
	Data		*data_ptr = new Data(100);
	uintptr_t	ptr = serialize(data_ptr);
	Data		*old_data = deserialize(ptr);

	std::cout << "Data address: " << data_ptr << " -- Value: " << data_ptr->getValue() << std::endl;
	std::cout << "Serialized value (uintptr): " << ptr << " -- base(Data *): " << std::setbase(16) << ptr << std::setbase(10) << std::endl;
	std::cout << "Data deserialized address: " << old_data << " -- Value: " << old_data->getValue() << std::endl;
	delete data_ptr;
	return 0;
}
