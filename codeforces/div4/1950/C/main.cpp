#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){

        int hh, mm;
        char cl;
        scanf("%d%c%d", &hh, &cl, &mm);

        int nh, nm;
        if ((hh >= 0 and mm < 60) and (hh <= 11 and mm < 60)){
            if (hh == 0) {nh = 12; nm = mm;}
            else {nh = hh; nm = mm;}
            cout << setfill('0') << setw(2) << nh << ":" << setfill('0') << setw(2) << nm << " AM\n";
        }
        else if ((hh >= 12 and mm < 60) and (hh <= 23 and mm < 60)){
            if (hh != 12) {nh = hh - 12; nm = mm;} 
            else {nh = hh; nm = mm;}
            cout << setfill('0') << setw(2) << nh << ":" << setfill('0') << setw(2) << nm << " PM\n"; 
        }
    }

    return 0;
}
