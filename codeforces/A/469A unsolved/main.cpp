/*
    author: sidrs
    created: 2024-06-12 19:59:22
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

    int n;
    cin >> n;
    int N[n];
    for (int i = 0; i < n; i++){
        N[i] = i+1;
    }

    int p;
    cin >> p;
    int X[p];
    for (int i = 0; i < p; i++){
        cin >> X[i];
    }
    
    int q;
    cin >> q;
    int Y[q];
    for (int j = 0; j < q; j++){
        cin >> Y[j];
    }
} 