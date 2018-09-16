#include <iostream>

int fib(int a);

int main(int argc, char *argv[]) {
    std::cout << argv[1] << std::endl;
//    int search = *argv[1];

//    std::cout << "Fibonacci number at position " << search << " is: " << fib(search) << std::endl;
    return 0;
}

int fib(int a){
    if (a == 1 || a == 2)
        return 1;
    else
        return fib(a-1) + fib (a-2);
}