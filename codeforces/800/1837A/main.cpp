/*
    author: sidrs
    created: 2024-06-13 09:38:27
*/

#include<bits/stdc++.h>
using namespace std;

/* TYPES */
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long long> vll;

/* FUNCTIONS */
#define pb push_back

/* UTILS */
#define nl "\n"
const long long MOD = 1e9 + 7;
const long long INF = 1e9;
const long double PI = 3.141592653589793238462;

void solve();

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

void solve(){

    int x, k;
    cin >> x >> k;
    
    if (x % k) {
        cout << 1 << nl << x << nl; 
    } else {
        cout << 2 << nl << 1 << " " << (x-1) << nl;
    }
} 