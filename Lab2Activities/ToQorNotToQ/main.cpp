#include <iostream>
#include <fstream>


int main() {
    std::ifstream fin;
    std::string word;
    int count = 0;
    fin.open("Hamlet.txt");
    while (fin >> word)
        count = count+1;
    std::cout << count << " words." << std::endl;
//    if (hamlet.is_open())
//        std::cout << "Hello, World!" << std::endl;
//    else
//        std::cout << "O fuck" << std::endl;
//    fin.close();
    return 0;
}