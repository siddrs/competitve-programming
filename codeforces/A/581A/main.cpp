/*
    author: sidrs
    created: 2024-06-11 17:40:02
*/

#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
using namespace std;

void solve(){
    
    int a, b;
    cin >> a >> b;
    cout << min(a,b) << " " << abs((a-b)/2) << nl;
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();    
    
    return 0;
}