/*
    author: sidrs
    created: 2024-07-28 15:27:20
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

    solve();

    return 0;
}

void solve(){

    int a, b;
    cin >> a >> b;

    switch (max(a, b))
    {
        case 6:
            cout << "1/6" << nl;
         break;
        case 5:
            cout << "1/3" << nl;
            break;
        case 4:
            cout << "1/2" << nl;
            break;
        case 3: 
            cout << "2/3" << nl;
            break;
        case 2:
            cout << "5/6" << nl;
            break;
        case 1:
            cout << "1/1" << nl;
            break;
    }

} 