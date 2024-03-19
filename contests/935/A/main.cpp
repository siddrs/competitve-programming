#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c;
    int tents = 0;
    int tentA, tentB, tentC;
    cin >> a >> b >> c;

    if (b%3 == 0){
        tentA = a;
        tentB = b/3;
        if (c%3 != 0) {tentC = c/3 + 1;}
        else tentC = c/3;
        tents = tentA + tentB + tentC;
    }
    else if (b%3 == 1){
        tentA = a;
        if ((c + b%3) >= 3){
            c = c - 2;
            b = b + 2;
            tentB = b/3;
            if (c%3 != 0) {tentC = c/3 + 1;}
            else tentC = c/3;
            tents = tentA + tentB + tentC;
        } 
        else if (c + b%3 < 3)
        {
            tents = -1;
        }
    }
     else if (b%3 == 2){
        tentA = a;
        if ((c + b%3) >= 3){
            c = c - 1;
            b = b + 1;
            tentB = b/3;
            if (c%3 != 0) {tentC = c/3 + 1;}
            else tentC = c/3;   
            tents = tentA + tentB + tentC;
        }
        else if (c + b%3 < 3)
        {
            tents = -1;
        }
   }

    std::cout << tents << "\n";


}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}