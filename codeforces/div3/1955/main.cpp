#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, p1, p2; cin >> n >> p1 >> p2;

        if (p2 > 2*p1){
            cout << n*p1 << "\n";    
        }
        else if (p2 <= 2*p1){
            if (n%2 == 0){
                cout << (n/2)*p2 << "\n";
            } else {
                cout << ((n/2)*p2) + p1 << "\n";
            }
        }
    }
    return 0;
}