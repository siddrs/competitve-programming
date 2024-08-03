#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main(){

    vector<int> arr;
    for (int i = 0; i < 4; i++){
        int temp; cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());

    int count = 0;
    arr.push_back(0);
    for (int i = 1; i <= 4; i++){
        if (arr[i] == arr[i-1]){
            count++;
        } 
    }
    std::cout << count << "\n";
    return 0;
}

 