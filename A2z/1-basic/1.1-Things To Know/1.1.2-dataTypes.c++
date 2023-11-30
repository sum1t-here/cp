#include <iostream>
#include <string>

int dataTypes(std::string type)
{
    if (type == "Integer" || type == "Float")
        return 4;
    else if (type == "Long" || type == "Double")
        return 8;
    else if (type == "Character")
        return 1;
    else
        return -1;
}

int main()
{
    std::string type = "Long";

    std::cout << dataTypes(type) << std::endl;

    return 0;
}