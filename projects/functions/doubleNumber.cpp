#include <iostream>


int doubleNumber(int num)
{
    return num * 2;
}


int main()
{
    int num {};
    std::cout << "Enter a number you want to double: ";
    std::cin >> num;

    std::cout << "The double of " << num << " is " << doubleNumber(num) << '\n';
    
    return 0;
}
