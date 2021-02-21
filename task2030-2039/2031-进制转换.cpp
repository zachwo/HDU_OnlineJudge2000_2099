//
// Created by 王泽 on 2021/2/21.
//

#include <iostream>
#include "iomanip"
using namespace std;
/**
 * 十进制数n转r进制数：https://blog.csdn.net/GeChan_W/article/details/88909996
 * @return
 */
int main(){
    int n ,r;
    while( cin >> n >> r){
        bool isFuShu = false;   //先检测是否为负数
        if(n < 0){
            isFuShu = true;
            n = abs(n);
        }
        int a[1000];
        int i = 0;
        while (n != 0){
            a[i] = n%r;
            n /= r;
            i++;
        }

        //逆向输出数组得到结果
        int length = i;     //因为上面最后一次while结束的时候i++了一次，所以此时i的值就是length；
        if (isFuShu)
            cout << "-";    //如果n是负数，在输出的结果前先输出一个负号
        for (int i = length - 1; i >= 0; --i) {
            if (a[i]<10){
                cout << a[i];
            }else{
                switch (a[i]) {
                    case 10: cout << 'A'; break;
                    case 11: cout << 'B'; break;
                    case 12: cout << 'C'; break;
                    case 13: cout << 'D'; break;
                    case 14: cout << 'E'; break;
                    case 15: cout << 'F'; break;
                }
            }
        }
        cout << endl;

    }
    return 0;
}

