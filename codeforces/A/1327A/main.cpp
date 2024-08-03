/*
    author: sidrs
    created: 2024-06-14 12:03:12
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

    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }

    return 0;
}

void solve(){

    ll n, k;
    cin >> n >> k;

    // odd n -> odd k
    // even n -> even k

    // if ((n%2 == 0 and k%2 == 0) or (n%2!=0 and k%2!=0)) {
    if ((n%2 == k%2) and (n >= k*k)){
        cout << "YES" << nl;
    
    } else {
        cout << "NO" << nl;
    }
}