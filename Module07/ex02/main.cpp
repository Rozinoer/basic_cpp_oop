#include <iostream>
#include "Array.hpp"

#define MAX_VAL 3
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 10;
        numbers[i] = value;
    }
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    try
    {
        numbers[2] = 2;
        numbers[-1] = -1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[2] = 100;
        numbers[100] = 100;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << numbers << std::endl;
    return 0;
}