#include <bits/stdc++.h>

void solve(){
    
    // Test Cases
    int t;
    std::cin >> t;
    while (t-- > 0){
        
        int a, b;
        std::cin >> a >> b;

        if (a == b){
            int ans = 0;
            std::cout << ans << "\n";
        } 
        else {
            // Using the Ternary Operator
            int diff = (a > b) ? (a - b) : (b - a); 
            int quotient = (diff / 10);
            int ans = (diff % 10 == 0) ? (quotient) : (quotient + 1);
            std::cout << ans << "\n";
        }

    }
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    solve();

    return 0;
}