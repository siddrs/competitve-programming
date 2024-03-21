#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    cin >> x4 >> y4;
    int s;
    if (x1 == x2) {s = y2-y1;}
    else if (x1 == x3) {s = y3-y1;}
    else if (x1 == x4) {s = y4-y1;}
    std::cout << s*s << "\n";
}


int main() {
    int Tc;
    cin >> Tc;
    while (Tc--){
        solve();
    } 
    
    return 0;
}