#include <bits/stdc++.h>
#include <string>

void solve(){

    int n;
    std::cin >> n;
    std::string array[n];
    for (int i = 1; i <= n; i++){
        std::cin >> array[i];
    }
    for (int i = 1; i <= n; i++){
        std::cout << array[i] << "\n";
    }


}

int main(){

    solve();

    return 0;
}