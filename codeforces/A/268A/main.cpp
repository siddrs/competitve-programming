/*
    author: sidrs
    created: 2024-07-28 14:14:01
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

    int n; cin >> n;
    vector<pair<int, int>> uni;

    for (int i = 0; i < n; i++){
        int h, g; cin >> h >> g;
        uni.push_back(make_pair(h, g));
    }

    int count = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (j == i){
                continue;
            } else {
                if (uni[i].first == uni[j].second){
                    count++;
                }
            }
        }
    }
    cout << count << nl;
} 