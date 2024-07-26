/*
    author: sidrs
    created: 2024-06-09 16:54:58
*/

#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
using namespace std;

void solve(){
    ll n;
    cin >> n;
    ll k = 2;
    
    while (true){
        ll s = (pow(2,k++)-1);
        if (n%s == 0){
            cout << n/s << nl;
            break;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--){
        solve();
    }
    return 0;
}