/*
*	author: sidrs
* 	created: 2024-07-11 20:29:51
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

    int n, k;
    cin >> n >> k;
    vi big;
    int temp;
    for (int i = 0; i < k; i++){
        cin >> temp;
        big.push_back(temp);
    }

    vi nonOne;
    int ones = 0;
    int steps = 0;
    int max = 0;

    sort(big.begin(), big.end());

    for (int i = 0; i < k-1; i++){
        if (big[i]!=1){
            nonOne.push_back(big[i]);
        }
        else if (big[i]==1){
            ones++;
        }
    }

    for (int i = 0; i < nonOne.size(); i++){
        steps += (nonOne[i]-1);
        ones += nonOne[i];
    }


    // cout << "ans: " << ones << " steps: " << steps << nl;
    cout << ones + steps << nl;

} 