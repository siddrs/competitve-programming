/*
    author: sidrs
    created: 2024-06-15 18:10:35
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

    int n, m;
    cin >> n >> m;
    int N[n]; int M[m];
    for (int i = 0; i < n; i++){
        cin >> N[i];
    } 
    for (int i = 0; i < m; i++){
        cin >> M[m];
    }

    vi prices;
    int sum = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (N[j] >= M[i]) {
                
            }

        }
        int output = *min_element(prices.begin(), prices.end());
        sum += output;
    }
    cout << sum << nl;
} 