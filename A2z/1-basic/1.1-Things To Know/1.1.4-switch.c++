#include <iostream>
#include <cmath>
#include <vector>

double areaSwitchCase(int ch, std::vector<double> a)
{
    switch (ch)
    {
    case 1:
        return M_PI * a[0] * a[0]; // Use M_PI for pi
    case 2:
        return a[0] * a[1];
    default:
        return 0;
    }
}

int main()
{
    int choice;
    std::vector<double> dimensions;

    // Get user input
    std::cout << "Enter choice (1 for circle, 2 for rectangle): ";
    std::cin >> choice;

    if (choice == 1)
    {
        std::cout << "Enter radius: ";
        double radius;

        std::cin >> radius;
        dimensions.push_back(radius);

        // Calculate and print the area
        double result = areaSwitchCase(choice, dimensions);
        std::cout << "Area: " << result << std::endl;
    }
    else if (choice == 2)
    {
        std::cout << "Enter dimensions: ";
        double dimension;
        for (int i = 0; i < 2; ++i)
        {
            std::cin >> dimension;
            dimensions.push_back(dimension);
        }
    }
    else
    {
        std::cout << "Invalid choice." << std::endl;
    }

    return 0;
}