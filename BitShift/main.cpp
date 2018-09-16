#include <iostream>

int bitshift(int value, int shift, bool left);
int main() {
    int a = 1, b = 2, c = bitshift (a, b, true);
    std::cout << a << " shifted left by " << b << " = " << c << std::endl;
    a = 3, b = 7, c = bitshift (a, b, true);
    std::cout << a << " shifted left by " << b << " = " << c << std::endl;
    return 0;
}

int bitshift(int value, int shift, bool left){
    if (left)
        return value << shift;
    else
        return value >> shift;
}