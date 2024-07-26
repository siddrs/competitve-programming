/*
    author: sidrs
    created: 2024-06-11 19:55:38
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

    int T;
    cin >> T;
    while (T--){
        solve();
    }


    return 0;
}

void solve(){

    string a, b;
    cin >> a >> b;

    string an = a;
    string bn = b;

    an[0] = b[0];
    bn[0] = a[0];

    cout << an << " " << bn << nl; 

} 