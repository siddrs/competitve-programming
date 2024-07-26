/*
    author: sidrs
    created: 2024-06-13 10:02:12
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

    string str;
    cin >> str;
    int flag = 0;
    if (str.size() > 10){
        flag = 1;
    }

    if(flag){
        cout << str[0] << str.size()-2 << str[str.size()-1] << endl;
    } else {
        cout << str << endl;
    }

} 