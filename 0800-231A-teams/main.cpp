#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int ans = 0;
    while (n--){
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b + c) >= 2) {
            ans++;
        }
    }
    cout << ans;
}

int main(){
    solve();
    return 0;
}