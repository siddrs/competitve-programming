/*
 *    author: sidrs
 *    created: 28-07-2024 20:17:40
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
    vector<int> b;
    for (int i = 0; i < n-1; i++){
        int temp; cin >> temp;
        b.push_back(temp);
    }
    vector<int> num {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> a(0);

    while (a.size() < n){
        for (int i = 0; i < num.size(); i++){
            for (int j = 0; j < num.size(); j++){
                if (i == j){
                    continue;
                } else {
                    if (num[i] & num[i] == b[i]){
                        a.push_back(i);
                        a.push_back(j);
                    }
                }
            }
        }
    }
    if (a.size() == 0){
        cout << -1 << nl;
    } else {
        for (int i = 0; i < a.size(); i++){
            cout << a[i] << " ";
        }
    }

} 