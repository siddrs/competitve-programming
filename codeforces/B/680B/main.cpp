/*
 *    author: sidrs
 *    created: 03-08-2024 23:34:27
**/

#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
typedef long long ll;
typedef long double ld;
const long long MOD = 1e9 + 7;

void solve();

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("problemname.in", "r", stdin);
    // freopen("problemname.out", "w", stdout);

    solve();

    return 0;
}

void solve(){

    int n, a;
    cin >> n >> a;
    vector<int> arr;
    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        arr.push_back(temp);
    }

    int count = 0;

    if (arr[a - 1] == 1) count++;

    for (int i = 1; i < n; i++){

        if ((a - 1) - i >= 0 or (a - 1) + i < n){            

            if ((((a - 1) - i) >= 0) && (((a - 1) + i) < n)) {
                if ((arr[(a - 1) - i] == 1) && (arr[(a - 1) + i] == 1)){
                    count += 2;
                }
            }

            else if ((a - 1) + i < n){
                if (arr[(a - 1) + i] == 1){
                    count++;
                }
            }

            else if ((a - 1) - i >= 0){
                if (arr[(a - 1) - i] == 1){
                    count++;
                }
            }
        }
    }

    cout << count << endl;

} 