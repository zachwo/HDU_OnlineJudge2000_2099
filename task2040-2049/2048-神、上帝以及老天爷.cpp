//
// Created by 王泽 on 2021/2/23.
//

#include <iostream>
#include <algorithm>
#include "iomanip"
using namespace std;
/**
 * https://baike.baidu.com/item/%E9%94%99%E6%8E%92%E5%85%AC%E5%BC%8F/10978508?fr=aladdin
 * 错排公式：D(n) = (n-1) [D(n-2) + D(n-1)]
 * 特殊地，D(1) = 0, D(2) = 1.
 * n个元素的全排列：A(n,n) = n!
 * @return
 */
int main(){
    int c;
    cin >> c;
    while(c){
        int n;
        cin >> n;
        long long d[30] = {0,0,1};
        if (n>=3){
            for (int i = 3; i <= n ; ++i) {
                d[i] = (i-1)*(d[i-2] + d[i-1]);
            }
        };
        //计算n的阶乘（A(n,n)）,即全部排列方法；
        long long total = 1;
        for (int i = 1; i <= n ; ++i) {
            total *= i;
        }
        cout << fixed << setprecision(2) << (double)100.0*d[n]/total << "%" << endl;
        --c;
    }
    return 0;
}

