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
 *
 * n个元素，错排m个：C(n,m)*D(m)
 * @return
 */

long long jieCheng(int n){
    long long ans = 1;
    for (int i = 1; i <= n; ++i) {
        ans *= i;
    }
    return ans;
}
/**
 * 从n个不同元素中每次取出m个不同元素（0≤m≤n）https://baike.baidu.com/item/%E7%BB%84%E5%90%88/12004197
 * @param n
 * @param m
 * @return
 */
long long C(int n, int m){
    return jieCheng(n) / (jieCheng(m) * jieCheng(n-m));
}

int main(){
    int c;
    cin >> c;
    while(c){
        int n, m;
        cin >> n >> m;
        long long d[30] = {0,0,1};
        if (m>=3){
            for (int i = 3; i <= m ; ++i) {
                d[i] = (i-1)*(d[i-2] + d[i-1]);
            }
        }
        long long ans = C(n,m)*d[m];
        //cout << C(n,m) << " " << d[m] << " " << ans << endl;
        cout << ans << endl;
        --c;
    }
    return 0;
}

