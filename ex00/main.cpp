#include <iostream>
#include <cstring>
#include <cctype>

int ft_isalpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

char ft_toupper(char c)
{
    if (ft_isalpha(c))
    {
        if (c >= 'a' && c <= 'z')
            return (c - ('a' - 'A'));
        return (c);
    }
    else
    {
        return (c);
    }
}

int main(int argc, char **argv)
{
    int i = 1;
    size_t j;

    if (argc <= 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }

    while (i < argc)
    {
        std::string str(argv[i]);
        j = 0;
        while (j < strlen(argv[i]))
        {
            std::cout << ft_toupper(str[j]);
            j++;
        }
        if (i < argc - 1) {
            std::cout << " ";
        }
        i++;
    }
    std::cout << std::endl;

    return 0;
}
