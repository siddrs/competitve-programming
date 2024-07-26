/*
    author: sidrs
    created: 2024-06-11 21:52:10
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

    int tc;
    cin >> tc;
    while (tc--){
        solve();
    }

    return 0;
}

void solve(){

    ll l, r, k;
    cin >> l >> r >> k;


    ll c = 0;
    for (int i = pow(10,l); i <= pow(10,r); i++){
        
        // D(i)
        int sum_i = 0;
        while(i > 0){
            int last = (i%10);
            sum_i += last;
            i /= 10;
        }

        // D(i*k)
        int sum_ik = 0;
        int m = i*k;
        while(m > 0){
            int last = (m%10);
            sum_ik += last;
            m /= 10;
        }

        // if D(i*k) == k*D(i)
        if (sum_ik == k*sum_i){
            c++;
        }
    }
    cout << c % MOD << nl;


} 