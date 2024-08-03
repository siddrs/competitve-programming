/*
 *   author: sidrs
 *   created: 2024-07-28 17:03:09
**/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define nl "\n"

void solve();

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

void solve(){

    int n; 
    cin >> n;
    vector<pair<int, int>> lines;

    for (int i = 0; i < n; i++){
        // birds on each line
        int b; cin >> b;
        lines.push_back(make_pair(i + 1, b));
    }

    int m;
    cin >> m;
    vector<pair<int, int>> killed;

    for (int i = 0; i < m; i++){
        // killings input
        int x, y; cin >> x >> y;
        killed.push_back(make_pair(x, y));

        // calculations 
        int j = killed[i].first - 1;
        if (j == 0) {
            lines[j+1].second += (lines[j].second - killed[i].second);
            lines[j].second = 0;
        }
        else if (j == n-1) {
            lines[j-1].second += (killed[i].second - 1);
            lines[j].second = 0;
        } 
        else {
            lines[j-1].second += (killed[i].second - 1);
            lines[j+1].second += (lines[j].second - killed[i].second);
            lines[j].second = 0;
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << lines[i].second << nl;
    }
} 