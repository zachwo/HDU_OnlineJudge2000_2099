//
// Created by 王泽 on 2021/2/23.
//

#include <iostream>
#include <algorithm>
#include "iomanip"
using namespace std;
/**
 * 第一块横放时，放置种数为a[n-2]
 * 第一块竖放时，放置种数为a[n-1]
 * 递推公式为 a[n] = a[n-1] + a[n-2];
 * @return
 */
int main(){
    int n;
    while (cin >> n){
        long long arr[60] = {0,1,2};

        if (n>2){
            for (int i = 3; i <= n; ++i) {
                arr[i] = arr[i-1] + arr[i-2];
            }
        }
        cout << arr[n] << endl;
    }
    return 0;
}

