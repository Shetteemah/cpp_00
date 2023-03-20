# include <cstdio>
# include <cstring>
# include <iostream>

int ft_isalpha(char c)
{
    if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
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
    // printf("%d\n", ft_isalpha(c));
    if (ft_isalpha(c))
    {
        if (c >= 'a' && c <= 'z')
            c -= 32;
        // return (c);
        // printf("%d\n", c);
    }
    return (c);
    // }
}

int main(int argc, char **argv)
{
    size_t i = 1;
    size_t j;

    if (argc <= 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }

    while (i <= argc)
    {
        std::string str(argv[i]);
        j = 0;
        while (j < strlen(argv[i]))
        {
            std::cout << ft_toupper(str[j]);
            j++;
            // printf("%ld\n", strlen(argv[i]));
        }
        if (i < argc - 1) {
            std::cout << " ";
        }
        i++;
    }
    std::cout << std::endl;
    // printf("Hello from LinuxHint \n");

    return 0;
}
// int main() {


//     return 0;

// }
