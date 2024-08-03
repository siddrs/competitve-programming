/*
    author: sidrs
    created: 2024-06-15 11:35:02
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

    solve();

    return 0;
}

void solve(){

    ll n;
    cin >> n;
    if (n%2 == 0){
        if (n%4 == 0){
            cout << (n/4)-1 << nl;
        } else {
            cout << (n/4) << nl;
        }
    }
    else {
        cout << 0 << nl;
    }
    
} 