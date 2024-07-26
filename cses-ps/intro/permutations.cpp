#include<bits/stdc++.h>
using namespace std;
int main(){

    long long n;
    cin >> n;

    if (n == 1){
        cout << 1;
    }
    else if (n == 2 or n == 3){
        cout << "NO SOLUTION";
    }
    else {
        if (n % 2 != 0){
            for (int i = 1; i <= ((n - 1) / 2); i++){
                cout << 2*i << " ";
            }
            for (int i = 1; i <= ((n + 1) / 2); i++){
                cout << ((2*i) - 1) << " ";
            }
           
        }
        else {
            for (int i = 1; i <= (n / 2); i++){
                cout << 2*i << " ";
            }
            for (int i = 1; i <= (n / 2); i++){
                cout << ((2*i) - 1) << " ";
            }
           
        }
    }
    return 0;
}