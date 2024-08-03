/*
    author: sidrs
    created: 2024-07-18 21:57:30
*/

#include <bits/stdc++.h>
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

    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }

    return 0;
}

void solve(){

    int n, x, temp; cin >> n >> x;
    vi line;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        line.push_back(temp);
    }
    line.insert(line.begin(), 0);
    line.push_back(x);

    int maxdiff = 0; int diff = 0;
    for (int i = 1; i < line.size(); i++){
        diff = line[i]-line[i-1];
        if (i == line.size()-1){
            diff = 2 * (line[line.size()-1]-line[line.size()-2]);
        } 
        if (diff > maxdiff) maxdiff = diff;
    }

    cout << maxdiff << nl;

}  