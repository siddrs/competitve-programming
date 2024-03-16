#include <bits/stdc++.h>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    std::cin >> t;
    while (t--){
        unsigned int n;
        std::cin >> n;

        int ans = 0;

        if (n % 2 == 0){
            ans = ((n-2)/2);
        } else {
            ans = ((n-1)/2);
        }
        std::cout << ans << "\n";
    }

    return 0;
}