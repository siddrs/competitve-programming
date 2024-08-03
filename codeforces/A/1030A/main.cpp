#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int k;
    int sum = 0;
    vector<int> arr;

    for(int i = 1; i <= n; i++){
        cin >> k;
        arr.push_back(k);
    }

    for(int j = 0; j < n; j++){
        sum = sum + arr[j];
    }

    if (sum == 0) cout << "EASY\n";    
    else cout << "HARD\n";

    return 0;
}