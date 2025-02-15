#include <iostream>

int getValueUser()
{
    std::cout << "Enter a number: ";
    int input{ };
    std::cin >> input;
    return input;
}

int main()
{
    int num { getValueUser() };

    std::cout << num << " doubled is: " << num * 2 << ".\n";
    
    return 0;
}
