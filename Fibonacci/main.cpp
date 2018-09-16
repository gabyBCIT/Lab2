#include <iostream>
#include <cstring>

int fib(int a);
int a = 0;

int main(int argc, char *argv[]) {
    std::cout << "Before search" << std::endl;
    int search = atoi(argv[1]);
    std::cout << "After search" << std::endl;
    std::cout << "Before fib" << std::endl;

//    std::cout << "Fibonacci number at position " << search << " is: " << fib(search) << std::endl;
    std::cout << "After fib" << std::endl;

    return 0;
}

int fib(int a){
    a += 1;
    std::cout << a << std::endl;
    if (a == 1 || a == 2)
        return 1;
    else
        return fib(a-1) + fib (a-2);
}