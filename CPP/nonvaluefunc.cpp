#include <iostream>

void print() // note: void return type
{
    std::cout << "A";

    return; // the function will return to the caller here (note: no return value)

    std::cout << "B"; // this will never be printed
}

int main()
{
    print();

    return 0;
}