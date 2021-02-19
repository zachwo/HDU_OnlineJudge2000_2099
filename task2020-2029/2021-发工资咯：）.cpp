//
// Created by 王泽 on 2021/2/19.
//

#include <iostream>
#include "iomanip"
using namespace std;

int getZhangShu(int x){
    int count = 0;
    count += x/100;
    x = x%100;
    count += x/50;
    x = x%50;
    count += x/10;
    x = x%10;
    count += x/5;
    x = x%5;
    count += x/2;
    x = x%2;
    count += x;
    return count;
}

int main(){
    int n;
    int salary[100] = {0};

    cin >> n;
    while (n != 0){
        for (int i = 0; i < n; ++i) {
            cin >> salary[i];
        }
        int total = 0;
        for (int i = 0; i < n; ++i) {
            total += getZhangShu(salary[i]);
        }
        cout << total << endl;

        cin >> n;
    }

    return 0;
}
