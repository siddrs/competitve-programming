#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--){

        int n;
        cin >> n;
        vector<int> lv;
        int l = 0;

        for (int i = 0; i < n; i++){
            cin >> l;
            lv.push_back(l);
        }

        for (int k = 0; k < lv.size(); k++){
            cout << lv[k];
        }




    }

    return 0;
}