/*
    author: sidrs
    created: 2024-06-10 23:20:00
*/

#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
using namespace std;

void solve(){
    
    char n;
    cin >> n;
    string str = "codeforces";
    int flag = 0;
    for (int i = 0; i < str.size(); i++){
        if (n == str[i]){
            flag = 1;
            break;
        }
    }
    if (flag){
        cout << "YES" << nl;
    }
    else {
        cout << "NO" << nl;
    }
    
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc;
    cin >> tc;
    while (tc--){
        solve();
    }
    
    return 0;
}