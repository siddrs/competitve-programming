#include <bits/stdc++.h>

int main() {

    int a, b, c;
    int k, l, m, n;
    std::cin >> k >> l >> m >> n;

    int sumABC = (a + b + c);
    int sumAB = (a + b);
    int sumBC = (b + c);
    int sumAC = (a + c);


    if (k > l && k > m && k > n) {
        sumABC = k;
        sumAB = l;
        sumBC = m;
        sumAC = n;
    }
    else if (l > k && l > m && l > n) {
        sumABC = l;
        sumAB = k;
        sumBC = m;
        sumAC = n;
    }
    else if (m > k && m > l && m > n) {
        sumABC = m;
        sumAB = k;
        sumBC = l;
        sumAC = n;
    }
    else if (n > k && n > l && n > m) {
        sumABC = n;
        sumAB = k;
        sumBC = l;
        sumAC = m;
    }

    a = ((sumAB - sumBC + sumAC) / 2);
    b = ((sumBC - sumAC + sumAB) / 2);
    c = ((sumAC - sumAB + sumBC) / 2) ;

    if ((a+b+c) == sumABC){
        std::cout << a << " " << b << " " << c;
    }

    return 0;
}