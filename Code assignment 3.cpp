#include <iostream>

int myFunc(int a)
{
    return a * 3;
}

int myFunc(int a, int b)
{
    return a + b;
}

int main()
{
    std::cout << myFunc(5) << std::endl;
    std::cout << myFunc(4, 6) << std::endl;

    return 0;
}