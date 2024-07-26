/*
    author: sidrs
    created: 2024-07-20 20:03:39
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

int hsh[100];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin >> tc;
    while(tc--){
        solve();
    }

    return 0;
}

void solve(){

    int n;
    cin >> n; 
    bool flag = false;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        hsh[x]++;
    }
    for (int h = 1; h <= 50; h++){  
        if(hsh[h] % 2 != 0) {
            flag = true;
            break;
        } 
    }
    cout << (flag ? "YES" : "NO") << endl;
}