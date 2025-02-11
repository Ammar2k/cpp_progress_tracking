#include <iostream>

int main()
{
    std::cout << "Enter the number to be multiplied by two: ";

    int num{ };
    std::cin >> num;
    
    std::cout << "The result is: " << num * 2 << '\n';

    return 0;
}
