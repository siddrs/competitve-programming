/*
    author: sidrs
    created: 2024-06-11 21:03:52
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
    ll arr[n];
    for (ll i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll c = 0;

    for (ll i = 1; i <= n; i++){
        ll narr[i];

        for (ll j = 0; j < i; j++){
            narr[j] = arr[j];
        }

        ll sum = 0;
        for (int k = 0; k < i; k++){
            sum += narr[k];
        }

        for (ll h = 0; h < i; h++){
            if (narr[h] == sum - narr[h]) {
                c++;
            } 
        }
        
    }
    cout << c << nl;

} 