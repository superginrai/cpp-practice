#include <iostream>

// int main()
// {
//     std::cout << "Enter a number: ";
//     int x;
//     std::cin >> x;
//     std::cout << "You entered " << x << std::endl;
//     return 0;
// }

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int a;
    std::cin >> a;
    return a;
}

int doubleNumber(int x)
{
    return x * 2;
}

int main()
{
    int x = getValueFromUser();
    int y = doubleNumber(x);

    std::cout << x << " doubled is: " << y << std::endl;

    return 0;
}