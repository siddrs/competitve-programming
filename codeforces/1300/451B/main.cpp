/*
    author: sidrs
    created: 2024-07-23 15:00:07
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long long> vll;

#define pb push_back
#define nl "\n"
const long long MOD = 1e9 + 7;
const long long INF = 1e9;
const long double PI = 3.141592653589793238462;

void solve();

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("problemname.in", "r", stdin);
    // freopen("problemname.out", "w", stdout);

    solve();

    return 0;
}

void solve(){
    ll n; cin >> n;
    vll arr;
    vll sarr;
    ll temp;
    for (ll k = 0; k < n; k++){
        cin >> temp;
        arr.push_back(temp);
        sarr.push_back(temp);
    }

    sort(sarr.begin(), sarr.end());

    // Debugging
    // cout << "Array\n";
    // for (int i = 0; i < arr.size(); i++){
    //     cout << arr[i] << " ";
    // }
    // cout << "\nSorted \n";
    // for (int i = 0; i < sarr.size(); i++){
    //     cout << sarr[i] << " ";
    // }


    ll l = 0; ll r = 0;
    for (ll i = 0; i < n; i++){
        if (arr[i] != sarr[i]){
            l = i; break;
        }
    }
    for (ll j = (n-1); j >= 0; j--){
        if (arr[j] != sarr[j]){
            r = j; break;
        }
    }

    // cout << l << " " << r << nl;

    int flag = 3;
    // for (int h = l; h <= r; h++){
    //     if (sarr[h] == sarr[((arr.size()-r)+l)-h]) {
    //         flag = 1;
    //     } else {
    //         flag = 0;
    //         break;
    //     }
    // }

    ll p = l; ll q = r;
    while (p <= r) {
        if (sarr[p] == arr[q]){
            flag = 1;
        } else { 
            flag = 0; break;
        }
        p++; q--;
    }
    if (flag == 1) {
        cout << "yes\n" << l+1 << " " << r+1 << nl;
    } else if (flag == 0) {
        cout << "no\n";
    }
} 