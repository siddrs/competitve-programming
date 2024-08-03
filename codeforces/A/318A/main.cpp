#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    if (n % 2 == 0) {
        if (k <= n/2){
            cout << ((2 * k) - 1);
        }
        else if (k > n/2) {
            k = (k - n/2);
            cout << (2 * k);
        }
    } 
    else {
        if (k <= ((n + 1) / 2)) {
            cout << ((2 * k) - 1);
        }
        else if (k > ((n + 1) / 2)) {
            k = (k - ((n + 1) / 2));
            cout << (2 * k);
        }
    }

}



/*
10 7
1 3 5 7 9 2 4 6 8 10

*/