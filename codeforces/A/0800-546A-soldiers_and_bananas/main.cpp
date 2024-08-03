#include<iostream>

int main(){

    int borrow;
    int k, n ,w;
    std::cin >> k >> n >> w;

    int buyMoney = ( (k * w * (w + 1))/2);

    if (n >= buyMoney){
        borrow = 0;
        std::cout << borrow;
    }
    else if (buyMoney > n){
        borrow = buyMoney - n;
        std::cout << borrow;
    }

    return 0;
}


/*
    Wants to buy 'w' bananas, has 'n' dollars
    Total money requied to buy w banans = 1k + 2k + 3k + ... ... + wk = [k * (1 + 2 + 3 + 4 .... + w) = [k * (w(w-1)/2)]
                                        = (k*w*(w+1))/2

*/