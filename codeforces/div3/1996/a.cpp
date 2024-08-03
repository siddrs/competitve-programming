/*
    author: sidrs
    created: 2024-07-26 22:27:08
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long long> vll;

#define pb push_back
#define nl "\n"
const long long MOD = 1e9 + 7;
const long long INF = 1e9;
const long double PI = 3.141592653589793238462;

void solve();

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("problemname.in", "r", stdin);
    // freopen("problemname.out", "w", stdout);

    int tc; cin >> tc;
    while (tc--){
        solve();
    }

    return 0;
}

void solve(){
    int n; cin >> n;
    if (n % 4 == 0) cout << n/4 << nl;
    else cout << (n/4) + 1 << nl;
} 