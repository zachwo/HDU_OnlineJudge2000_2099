//
// Created by 王泽 on 2021/2/21.
//

#include <iostream>
#include "iomanip"
using namespace std;

int main(){
    int n;
    int hourA, minA, secA;
    int hourB, minB, secB;
    cin >> n;
    while (n){
        cin >> hourA >> minA >> secA;
        cin >> hourB >> minB >> secB;
        int sec = secA + secB;
        int min = minA + minB;
        int hour = hourA + hourB;
        if(sec > 60){   //最极端的情况就是A和B都是60，这种情况sec需要加1，min同理
            sec -= 60;
            min ++;
        }
        if (min > 60){
            min -= 60;
            hour ++;
        }
        cout << hour << " " << min << " " << sec << endl;
        n--;
    }
    return 0;
}

