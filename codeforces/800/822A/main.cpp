#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    int m = min(x, y);
    int fact = 1;
    for (int i = m; i > 0; i--){
        fact *= i;        
    }
    cout << fact << endl;
}