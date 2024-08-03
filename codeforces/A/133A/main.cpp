#include<bits/stdc++.h>
using namespace std;

void solve(){
    //HQ9+
    string str;
    int flag {0};
    cin >> str;
    
    for (int i = 0; i < str.size(); i++){
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9'){
            flag = 1;
        }
    }

    if (flag){
        cout << "YES";
    } else {
        cout << "NO";
    }
}

int main(){
    solve();
    return 0;
}