#include <iostream>


// asks the user to enter 3 numbers and prints the numbers
int main()
{
    std::cout << "Enter 3 numbers: ";

    int x {};
    int y {};
    int z {};

    std::cin >> x >> y >> z;

    std::cout << "You entered: " << x << ", " << y << ", " << z << ".\n";
}
