#include <iostream>
#include <fstream>

using namespace std;

int base_conversion(int number, int base);

int main() {
    ifstream numbers("numbers.txt");
    int x, y;
    while (!numbers.eof()){
        numbers >> x >> y;
        numbers << base_conversion(x, y);
    }

    return 0;
}

//string base_conversion(int number, int base){
//    array places[];
//    int result = number;
//    int total = 0;
//    while (result >= base){
//        places[count] = result % base;
//        result = result/base;
//        total = total + 1;
//    }
//    string final;
//    for (int i = total; i > 0; i--) {
//        final << places[i-1];
//    }
//    return final;
//}
