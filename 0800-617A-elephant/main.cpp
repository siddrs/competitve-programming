/*
    THIS CODE CAN BE IMPROVED MASSIVELY
*/

#include <iostream>

int main(){

    int x;
    int steps;
    std::cin >> x;

    int quotient = x / 5;
    int remainder = x % 5;


    if (remainder != 0) {
        if (remainder == 4){
            steps = quotient + 1;
        }
        else if (remainder == 3){
            steps = quotient + 1;
        }
        else if (remainder == 2){
            steps = quotient + 1;
        }
        else if (remainder == 1){
            steps = quotient + 1;
        }
    }
    else if (remainder == 0) {
        steps = quotient;
    } 

    std::cout << steps;

    return 0;
}