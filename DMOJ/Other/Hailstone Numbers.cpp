#include <iostream>

int main()
{
    int x;
    std::cin >>  x;
    int num{ 0 };
    while (x != 1) {
    if (x % 2 == 0) {
        x /= 2;
    }
    else {
        x = (3 * x) + 1;
    }
    num++;
}
std::cout << num;
}
