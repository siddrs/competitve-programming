/*
 *    author: sidrs
 *    created: 28-07-2024 20:01:31
**/

#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
typedef long long ll;
typedef long double ld;
const long long MOD = 1e9 + 7;

void solve();

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("problemname.in", "r", stdin);
    // freopen("problemname.out", "w", stdout);

    int t; 
    cin >> t;
    while (t--) solve();

    return 0;
}

void solve(){

    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        arr.push_back(temp);
    }
    int max = 0;
    for (int i = 0; i < n; i++){
        if (i % 2 == 0){
            if (arr[i] >= max) {
                max = arr[i];
            }
        }
    }
    cout << max << nl;


} 