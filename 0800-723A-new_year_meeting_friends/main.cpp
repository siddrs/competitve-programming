#include<iostream>

int main(){
    int a, b, c;
    std::cin >> a >> b >> c;
    int midVal;
    int val1, val2;
    // Find the Middle Value 
    if ((a > b && a < c) || (a > c && a < b)){
        midVal = a;
        val1 = b;
        val2 = c;
    }
    else if ((b > a && b < c) || (b > c && b < a)){
        midVal = b;
        val1 = a;
        val2 = c;
    }
    else if ((c > a && c < b) || (c > b && c < a)){
        midVal = c;
        val1 = a;
        val2 = b;
    }

    std::cout << (abs(midVal - val1) + abs(val2 - midVal)) << "\n";
    

    return 0;
}