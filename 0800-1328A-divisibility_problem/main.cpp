#include <iostream>

int main(){

    // Input Test Cases
    int t;
    std::cin >> t;

    while (t-- > 0){

        int a, b;
        std::cin >> a >> b;

        // std::cout << (b - (a % b)) << "\n";
        if (a % b == 0){
            std::cout << "0\n";
        }
        else {
            std::cout << (b - (a % b)) << "\n";
        }

    }
    return 0;
}