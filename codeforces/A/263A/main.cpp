/*
    author: sidrs
    created: 2024-07-11 18:18:49
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

    solve();

    return 0;
}

void solve(){

    int arr[5][5] = {0};
    int x = 0; int y = 0;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> arr[i][j];
            if (arr[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }
    cout << abs(y-2) + abs(x-2) << nl;

} 