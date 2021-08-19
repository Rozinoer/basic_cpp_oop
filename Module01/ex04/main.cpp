#include <iostream>
#include <fstream>

int strReplace( std::string filename, std::string line, std::string s1, std::string s2)
{
    std::ofstream out;

    out.open(filename, std::ios::app);
    if (!(out.is_open()))
        return (1);
    std::size_t ind;
    while ((ind = line.find(s1)) != std::string::npos)
    {
        line.erase(ind, s1.size());
        line.insert(ind, s2);
    }
    out << line << std::endl;
    out.close();
    return (0);
}

int main ( int argc, char *argv[] )
{
    std::string line;
    std::string filename = "./";
    filename.append(argv[1]);
    filename.append(".replace");
    if ( argc != 4)
        return (1);
    std::ifstream in("./src.txt"); // окрываем файл для чтения
    if (in.is_open())
    {
        while (getline(in, line))
        {
            if (strReplace(filename, line, argv[2], argv[3]) == 1)
            {
                in.close();
                return (1);
            }
        }
    }
    in.close();     // закрываем файл
    return (0);
}