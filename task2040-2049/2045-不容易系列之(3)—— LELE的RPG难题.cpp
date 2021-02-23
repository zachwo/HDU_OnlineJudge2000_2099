//
// Created by 王泽 on 2021/2/23.
//
#include <iostream>
#include <algorithm>
#include "iomanip"
using namespace std;
/**
 * 思路：假设根结点为R,P,G其中一种,画出二叉树，找规律题
 * 可以递推，而第一个格子有三种情况最终乘3即可。
 * @return
 */
int main(){
    int n;
    while(cin >> n){
        long long arr[60]= {0,1,2,2};   //当二叉树为n层时叶子节点有几个
        if (n >= 4){
            for (int i = 4; i <= n; ++i) {
                arr[i] = arr[i-1] + 2*arr[i-2];
            }
        }
        cout << 3*arr[n] << endl;
    }
    return 0;
}


