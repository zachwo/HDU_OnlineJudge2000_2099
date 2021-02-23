//
// Created by 王泽 on 2021/2/23.
//

#include <iostream>
#include <algorithm>
#include "iomanip"
using namespace std;
/**
 * 我们令f(n)为长度为n时的种数，即题目要求的输出。
 * 考虑f(n)时，即考虑n位置能填的字母，n位置能填的字母是受n-1位置字母影响的。
 * n-1位若为E/F，则n位可以填E/O/F，即f(n) = f(n-1)*3；
 * n-1位若为O，则n位可以填E/F，即f(n) = f(n-1)*2。
 * f(n-1)中n-1位为E/F的情况：f(n-2)*2
 * f(n-1)中n-1位为O的情况自然就是：f(n-1) - f(n-2)*2
 * 由此可得：
 * f(n) = ( f(n-2)*2 )*3 + ( f(n-1) - f(n-2)*2 )*2
 *      = ( f(n-1) + f(n-2) ) * 2
 * @return
 */
int main(){
    int n;
    while (cin >> n){
        long long arr[50] = {0,3,8};
        if (n>2){
            for (int i = 3; i <= n; ++i) {
                arr[i] = (arr[i-1] + arr[i-2]) * 2;
            }
        }
        cout << arr[n] << endl;
    }
    return 0;
}

