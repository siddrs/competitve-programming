#include <iostream>

int main(){

    int x;
    int steps;
    std::cin >> x;

    int quotient = x / 5;
    int remainder = x % 5;


    if (remainder != 0) {
        steps = quotient + 1;
    }
    else if (remainder == 0) {
        steps = quotient;
    } 

    std::cout << steps;

    return 0;
}