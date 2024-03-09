#include<bits/stdc++.h>

int main(){

    int n;
    std::cin >> n;

    double p[n];
    for (int i = 0; i < n; i++) {
        std::cin >> p[i];
    }
    
    double totalOrangeJuice;
    double orangeJuice; 


    for (int j = 0; j < n; j++){
        orangeJuice = ((p[j])/100);
        totalOrangeJuice += orangeJuice;
    }
    double output = (( totalOrangeJuice / ((double)n) ) * 100);
    std::cout << output;

    return 0;
}