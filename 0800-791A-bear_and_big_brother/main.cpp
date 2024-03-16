#include <bits/stdc++.h>

void solve(){
    int a, b;
    std::cin >> a >> b;
    
    int ans = 0;
    while (a <= b){
        a *= 3;
        b *= 2;
        ans ++;
    }
    std::cout << ans;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0; 
}