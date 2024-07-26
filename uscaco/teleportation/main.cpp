/*
    author: sidrs
    created: 2024-07-23 16:12:09
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long long> vll;

#define nl "\n"

void solve();

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);

    solve();

    return 0;
}

void solve(){

    int a, b, x, y;
    cin >> a >> b >> x >> y;
    
    if ((abs(a-x)+abs(b-y)) < abs(a-b)) {
        cout << (abs(a-x)+abs(b-y)) << nl;
    } 
    else if ((abs(a-y)+abs(b-x)) < abs(a-b)) {
        cout << (abs(a-y)+abs(b-x)) << nl;
    } 
    else {
        cout << abs(a-b) << nl;
    }

} 