#include <iostream>
using namespace std;

void solve(){
    int a, b, c;
    cin >> a >> b >> c;

        if ( a < b and b < c){
            cout << "STAIR\n";
        } else if ( (b > a and b > c)){
            cout << "PEAK\n";
        }
        else {
            cout << "NONE\n";
        }
    
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}


