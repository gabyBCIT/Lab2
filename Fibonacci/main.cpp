#include <iostream>

int fib(int a);

int main(int argc, char *argv[]) {
    int s = std::stoi(argv[1]);
    std::cout << "Fibonacci number " << s << " is: " << fib(s) << std::endl;
    return 0;
}

int fib(int a){
    if (a == 1 || a == 2)
        return 1;
    else
        return fib(a-1) + fib (a-2);
}