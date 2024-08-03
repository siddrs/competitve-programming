/*
    author: sidrs
    created: 2024-07-28 17:53:31
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

    string s;
    cin >> s;
    int sum = 0;
    int count = 0;
    while (s.size() > 1){
        sum = 0;
        for (int i = 0; i < s.size(); i++){
            sum += (int)(s[i] - '0');
        }
        s = to_string(sum);
        count++;
    }
    cout << count;

} 