#include <iostream>
#include <array>

int main()
{
    std::array<int, 1> a = { 0 };
    std::array<int, 1>b = a;

    std::cout << (a == b) << ", " << (&a == &b) << std::endl;
    return 0;
}
