//
// Created by 王泽 on 2021/2/23.
//
#include <iostream>
#include <algorithm>
#include "iomanip"
using namespace std;
/*
 * n个灯从左向右、编号从1到n排成一行，
 * 所有灯开始的时候都是关闭的，然后对这一排灯执行一系列操作：
 * 对于第i次操作，编号是i的倍数的灯改变状态（开->关/关->开）
 * 0表示关，1表示开
 *
 * 每次测试用例输入一个数字n表示灯的个数
 * 输出第n个灯经过无限次操作后的状态
 *
 * 思路1：第n次之后的所有操作均不会再对n号灯及其之前的灯产生影响；
 * 思路2：第n/2次操作之后只有第n次操作会对n号灯产生影响；
 */
void switchLamp(int &x){
    if (x == 0){
        x = 1;
    } else{
        x = 0;
    }
}
//int main(){
//    long long n;
//    while (cin >> n){
//        int lampN = 0;
//        for (int i = 1; i <= n; ++i) {
//            if (n%i == 0){
//                switchLamp(lampN);
//            }
//        }
//        cout << lampN << endl;
//    }
//    return 0;
//}

//精简循环版：循环次数直接减少一半
int main(){
    long long n;
    while (cin >> n){
        int lampN = 0;
        for (int i = 1; i <= n/2; ++i) {
            if (n%i == 0){
                switchLamp(lampN);
            }
        }
        switchLamp(lampN);
        cout << lampN << endl;
    }
    return 0;
}

