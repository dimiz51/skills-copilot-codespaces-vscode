#include <iostream>


int add(int a, int b){
    return a + b;
}


int main(int, char**){
    std::cout << "Hello, from testcop!\n";
    std::cout << "1 + 2 = " << add(1, 2) << "\n";
}
