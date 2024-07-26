/*
    author: sidrs
    created: 2024-06-11 20:08:45
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
    while(tc--){
        solve();
    }

    return 0;
}

void solve(){

    int n;
    cin >> n;
    int x = 0;
    int maxSum = 0;

    for (int i = 2; i <= n; i++){
        int sum = 0;    
        for (int j = 1; i*j <= n; j++){
            sum += i*j;
        }
        if (sum > maxSum){
            maxSum = sum;
            x = i;
        }      
    }
    cout << x << nl;
} 