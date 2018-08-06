#include <iostream>

int getUserInput()
{
    std::cout << "Please enter an integer: ";
    int value;
    std::cin >> value;
    return value;
}

int getMathematicalOperation()
{
    std::cout << "Please enter which operator you want (1 = +, 2 = -, 3 = *, 4 = /): ";
    int op;
    std::cin >> op;

    return op;
}

int calculateResult(int x, int op, int y)
{
    if (op == 1)
        return x + y;
    if (op == 2)
        return x - y;
    if (op == 3)
        return x * y;
    if (op == 4)
        return x / y;

    return x = y;
}

void printResult(int result)
{
    std::cout << "Your result is: " << result << std::endl;
}

int main()
{
    int input1 = getUserInput();

    int op = getMathematicalOperation();

    int input2 = getUserInput();

    int result = calculateResult(input1, op, input2);

    printResult(result);

    return 0;
}