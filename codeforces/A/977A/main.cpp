#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n, k;
    cin >> n >> k;

    while(k > 0){
        if(n%10==0){
            n = n/10;
            k--;
        }   
        else {
            n = n-1;
            k--;
        }
    }
    cout << n;
}


int main(){
    solve();
    return 0;
}