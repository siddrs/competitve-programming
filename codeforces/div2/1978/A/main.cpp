/*
    author: sidrs
    created: 2024-06-16 14:42:35
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

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

void solve(){

    int n;
    cin >> n;
    int pages[n];
    for(int i = 0; i < n; i++){
        cin >> pages[i];
    }

    int max = pages[0];
    for(int i = 1; i < n-1; i++){
        if(pages[i] > max){
            max = pages[i];
        }
    }

    cout << pages[n-1] + max << nl;

} 