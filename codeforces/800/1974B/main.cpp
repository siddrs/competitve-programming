/*
    author: sidrs
    created: 2024-06-11 18:56:52
*/

#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
using namespace std;

void solve(){
    
    int n;
    string b;
    cin >> n;
    cin >> b;
    string aux = b;
    sort(aux.begin(), aux.end());
    cout << aux;
    
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while(T--){
        solve();
    }    
    
    return 0;
}