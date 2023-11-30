// Find character

#include <iostream>

int main()
{
    char c;

    std::cin >> c;

    if (c >= 'A' && c <= 'Z')
        std::cout << 1;

    else if (c >= 'a' && c <= 'z')
        std::cout << 0;

    else
        std::cout << -1;

    return 0;
}
