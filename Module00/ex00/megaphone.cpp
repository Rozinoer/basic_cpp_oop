#include <iostream>

int main(int argc, char *argv[])
{
    int i = 1;
    int j = 0;
    std::string str;

    if (argc > 1)
    {
        while (i < argc)
        {
            str = argv[i];
            while (j < (int)str.size())
            {
                if (islower(str[j]))
                    std::cout << (char)toupper(str[j]);
                else
                    std::cout << str[j];
                j++;
            }
            i++;
            j = 0;
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (0);
}