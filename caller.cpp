#include <iostream>

// void doPrint()
// {
//     std::cout << "In doPrint()" << std::endl;
// }

// int main()
// {
//     std::cout << "Starting main()" << std::endl;
//     doPrint();
//     std::cout << "Ending main()" << std::endl;

//     return 0;
int return5()
{
    return 5;
}

int main()
{
    std::cout << return5() << std::endl;
    std::cout << return5() + 2 << std::endl;

    return5();

    return 0;
}