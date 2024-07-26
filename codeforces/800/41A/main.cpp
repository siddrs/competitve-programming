/*
    author: sidrs
    created: 2024-06-13 10:31:58
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

    string s, r;
    cin >> s;
    cin >> r;
    string rr = r;

    if (s.size() == r.size()){
        int j = 0;
        int i = s.size()-1;
        while (i >= 0){
            rr[j] = r[i];
            j++;
            i--;
        }
        if (rr == s){
            cout << "YES" << nl;
        } else {
            cout << "NO" << nl;
        }
    } 
    
    else {
        cout << "NO" << nl;
    }
} 