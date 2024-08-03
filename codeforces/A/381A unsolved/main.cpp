/*
    author: sidrs
    created: 2024-07-27 00:30:02
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
    vector<int> arr;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    int l = 0; int r = (n - 1);
    int p = l; int q = r; int j = 0;
    int s = 0; int d = 0;

    while(j < ){
        // Sereja moves first -> First iteration of the loop when j is 0;
        if (j % 2 == 0){
            s += max(arr[p+j], arr[q-j]);
        } else {
            d += max(arr[p+j], arr[q-j]);
        }
        p++; q--;
        j++;
    }
    cout << s << " " << d << nl;
} 