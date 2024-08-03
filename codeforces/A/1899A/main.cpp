/*
    author: sidrs
    created: 2024-06-14 11:09:49
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

    int n;
    cin >> n;
    if (n % 3 == 0){
        cout << "Second" << nl;
    }
    else {
        cout << "First" << nl;
    }
    
} 


// #include <cstdio>

// int main(){

//     long t; scanf("%ld", &t);
//     while(t--){
//         long x, k; scanf("%ld %ld", &x, &k);
//         if(x % k){printf("1\n%ld\n", x);}
//         else{printf("2\n1 %ld\n", x - 1);}
//     }

// }