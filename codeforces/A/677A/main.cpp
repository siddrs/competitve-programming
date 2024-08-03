/*
    author: sidrs
    created: 2024-07-25 23:59:19
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

    int n, h;
    cin >> n >> h;
    vector<int> arr;
    int count = 0;
    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        arr.push_back(temp);
        if (arr[i] > h) {
            count += 2;
        } else {
            count++;
        }
    }

    cout << count << nl;

} 