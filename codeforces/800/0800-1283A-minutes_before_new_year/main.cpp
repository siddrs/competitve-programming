#include <bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while (t--){

        int h, m;
        std::cin >> h >> m;

        int totalMinutes = (( h * 60 ) + m );
        std::cout << (1440 - totalMinutes) << "\n";


    }   
}