/*
    author: sidrs
    created: 2024-06-11 10:23:58
*/

#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
using namespace std;

void solve(){
    
    int k, r;
    cin >> k >> r;

    int x = 1;

    while (true){
        if ( (((k*x)-r) % 10 == 0) or (((k*x)) % 10 == 0) ){
            cout << x << nl;
            break;
        }
        ++x;
    }

} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}