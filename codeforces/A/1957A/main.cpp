/*
    author: sidrs
    created: 2024-06-08 18:43:38
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int uc {0};
    int lc {0};

    for (int i = 0; i < s.size(); i++){
        if (isupper(s[i])) uc++;
        else if (islower(s[i])) lc++;
    }
    
    if (uc > lc){
        // All Lower to Upper
        for (int j = 0; j < s.size(); j++){
            s[j] = toupper(s[j]);
        }    
    }
    else {
        // All Upper to Lower
        for (int j = 0; j < s.size(); j++){
            s[j] = tolower(s[j]);
        }    
    }
    
    cout << s;

    return 0;
}

