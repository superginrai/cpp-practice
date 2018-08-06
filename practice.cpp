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

int main()
{
    int x = getValueFromUser();
    int y = getValueFromUser();

    std::cout << x << " + " << y << " = " << x + y << std::endl;

    return 0;
}