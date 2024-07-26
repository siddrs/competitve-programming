#include<iostream>
using namespace std;
int main(){

    long long n;
    cin >> n;

    long long i {1};
    long long sum {0};

    while (i < n) {
        long long num = 0;
        cin >> num;
        sum += num;
        i++;
    }

    cout << ((n*(n+1))/2) - sum;

    return 0;
}