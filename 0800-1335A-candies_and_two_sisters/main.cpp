#include <bits/stdc++.h>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    std::cin >> t;
    while (t--){
        unsigned int n;
        std::cin >> n;
        unsigned int a, b;

        a = n-1;
        b = 1;
        int ans = 0;

        while (a > b)
        {
            a--;
            b++;
            ans++;    
        }

        std::cout << ans << "\n";
    }

    return 0;
}