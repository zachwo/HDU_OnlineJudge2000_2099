//
// Created by 王泽 on 2021/2/22.
//

#include <iostream>
#include <algorithm>
#include "iomanip"
using namespace std;

int main(){
    int n;
    cin >> n;
    while (n){
        int a;
        cin >> a;
        int sheep = 3;
        for (int i = 0; i < a; ++i) {
            sheep = (sheep -1)*2;
        }
        cout << sheep << endl;
        --n;
    }
    return 0;
}

