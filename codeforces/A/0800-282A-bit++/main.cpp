#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    int x = 0;
    vector<string> arr;
    string statement;

    for (int i = 0; i < n; i++){
        cin >> statement;
        arr.push_back(statement);
    }

    for (int i = 0; i < arr.size(); i++){
        if (arr[i] == "X++" or arr[i] == "++X" or arr[i] == "+X+"){
            x++;
        }
        else if (arr[i] == "X--" or arr[i] == "--X" or arr[i] == "-X-"){
            x--;
        } 
    }

    cout << x;
}

int main(){
    solve();
    return 0;
}