/*
    author: sidrs
    created: 2024-06-12 10:00:45
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
#define nl "\n"
#define yessir cout << "YES" << nl;
#define nosir cout << "NO" << nl;

/* UTILS */
const long long MOD = 1e9 + 7;
const long long INFI = 1e9;
const long double PIE = 3.141592653589793238462;

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

    ll l, r, a;
    cin >> l >> r >> a;
    
    if (l/a == r/a){
        cout << (r/a)+(r%a) << nl;
    }
    else {
        cout << max(((r/a - 1) + (a-1)), (r/a + r%a)) << nl;   
    }

} 