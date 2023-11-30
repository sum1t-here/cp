#include <iostream>
#include <string>

std::string compareIfElse(int a, int b)
{
    if (a > b)
        return "greater";
    else if (a < b)
        return "smaller";
    else
        return "equal";
}

int main()
{
    int a, b;
    std::cin >> a;
    std::cin >> b;

    std::cout << compareIfElse(a, b) << std::endl;

    return 0;
}