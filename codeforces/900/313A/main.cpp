/*
    author: sidrs
    created: 2024-06-14 18:40:49
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
 
    int n;
    cin >> n;
 
    int n1 = n/10;
    int n2 = ((n/100)*10)+(n%10); 
 
    if (n >= 0){
        cout << n;
    } 
    else {
        if (n1 >= n2) {
            cout << n1;
        }
        else {
            cout << n2;
        }
    }
} 