#include<bits/stdc++.h>
using namespace std;

void solve(){
    string str1, str2;
    cin >> str1;
    cin >> str2;

    for (int i = 0; i < str1.size(); i++){
        str1[i] = tolower(str1[i]);
    }
    for (int i = 0; i < str2.size(); i++){
        str2[i] = tolower(str2[i]);
    }

    if (str1 < str2){
        cout << "-1";
    }
    else if (str1 == str2){
        cout << "0";
    }
    else if (str1 > str2){
        cout << "1";
    }

}

int main(){
    solve();
    return 0;
}