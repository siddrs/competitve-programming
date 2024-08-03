/*
    author: sidrs
    created: 2024-06-13 09:54:19
*/

#include<bits/stdc++.h>
using namespace std;

/* TYPES */
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long long> vll;

/* FUNCTIONS */
#define pb push_back

/* UTILS */
#define nl "\n"
const long long MOD = 1e9 + 7;
const long long INF = 1e9;
const long double PI = 3.141592653589793238462;

void solve();

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

void solve(){

    string s;
    cin >> s;
    int upper = 0;
    int lower = 0;

    for (int i = 0; i < s.size(); i++){
        if (isupper(s[i])) { 
            upper++;
        }
        else if (islower(s[i])){
            lower++;
        }
    }
    for (int j = 0; j < s.size(); j++){
        if (upper > lower){
            s[j] = toupper(s[j]);
        } else if (upper < lower) {
            s[j] = tolower(s[j]);
        } else if (upper == lower){
            s[j] = tolower(s[j]);
        }
    }
    cout << s << endl;
} 