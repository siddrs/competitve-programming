#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int s {0};

    while (n != 1){
        if (n % 6 == 0){
            n /= 6;
            s++;
        }
        else{
            if (n % 3 == 0){
                n *= 2;
                s++;
            }
            else {
                s = -1;
                break;
            }
        }
    }
    cout << s << "\n";
}

int main(){

    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }

    return 0;

}