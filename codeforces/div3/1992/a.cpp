/*
*	author: sidrs
* 	created: 2024-07-11 20:07:09
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

    int arr[3];
    for (int i = 0; i < 3; i++){
        cin >> arr[i];
    }
    
    int i = 5;
    sort(arr, arr+3);
    
    while (i > 0){
        arr[0] += 1;
        sort(arr, arr+3);
        i--;
    }

    cout << arr[0]*arr[1]*arr[2] << nl;


} 