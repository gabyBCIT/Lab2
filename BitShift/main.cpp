#include <iostream>

int bitshift(int value, int shift, bool left);
int main() {
    int a = 1, b = 2, c = bitshift (a, b, true);
    std::cout << a << " shifted left by " << b << " = " << c << std::endl;
    a = 3, b = 7, c = bitshift (a, b, true);
    std::cout << a << " shifted left by " << b << " = " << c << std::endl;
    a = 20, b = 2, c = bitshift (a, b, false);
    std::cout << a << " shifted right by " << b << " = " << c << std::endl;
    a = 5, b = 0, c = bitshift (a, b, false);
    std::cout << a << " shifted right by " << b << " = " << c << std::endl;
    a = 0, b = 13, c = bitshift (a, b, false);
    std::cout << a << " shifted right by " << b << " = " << c << std::endl;
    return 0;
}

int bitshift(int value, int shift, bool left){
    if (left)
        return value << shift;
    else
        return value >> shift;
}