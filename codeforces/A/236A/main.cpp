/*
    author: sidrs
    created: 2024-07-26 23:28:30
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

    string s;
    cin >> s;
    sort(s.begin(), s.end());
    s.push_back('0');
    int cuont = 0;
    for (int i = 1; i <= s.size(); i++){
        if (s[i-1] != s[i]) {
            cuont++;
        }
    }
    cuont -= 1;
    if (cuont % 2 != 0){
        cout << "IGNORE HIM!" << nl;
    } else {
        cout << "CHAT WITH HER!" << nl;
    }

} 