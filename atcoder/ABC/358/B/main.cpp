/*
    author: sidrs
    created: 2024-06-15 17:33:21
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

    int n, a;
    cin >> n >> a;
    int tArr[n];
    for (int i=0; i < n; i++){
        cin >> tArr[i];
    }

    int time[n];
    for (int i=0; i < n; i++){
        time[0] = tArr[0];
        if(tArr[i] <= time[i]){
            time[i+1] = a+time[i];
            // cout << a+tArr[i] << nl;
        } 
        else {
            time[i+1] = tArr[i]+a;
        }
    }

    for (int i=1; i<=n; i++){
        cout << time[i] << nl;
    }

} 