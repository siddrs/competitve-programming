/*
    author: sidrs
    created: 2024-06-09 22:32:28
*/

#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
using namespace std;

void solve(){

    int n, m;
    cin >> n >> m;
    int d = n;
    for(int i = 1; i <= n; i++){
        if (i % m == 0){
            d++;
        }
    }   
    for (int i = n+1; i <= d; i++){
        if (i % m == 0){
            d++;
        }
    }
    cout << d;
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}