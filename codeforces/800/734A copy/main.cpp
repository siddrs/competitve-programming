/*
    author: sidrs
    created: 2024-07-26 00:07:43
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

    int n;
    cin >> n;
    char string[n];
    int a = 0; int d = 0;
    for (int i = 0; i < n; i++){
        cin >> string[i];
        if (string[i] == 'A'){
            a++;
        } 
        else if (string[i] == 'D'){
            d++; 
        }
    }
    if (a > d){
        cout << "Anton" << nl;
    } else if (a < d) {
        cout << "Danik" << nl;
    } else {
        cout << "Friendship" << nl;
    }
} 