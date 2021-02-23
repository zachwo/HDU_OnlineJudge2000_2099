//
// Created by 王泽 on 2021/2/23.
//

#include <iostream>
#include <algorithm>
#include "iomanip"
using namespace std;
/*
 * 将十进制改为二进制
 * 1000 转为二进制： 1111101000，共十位
 */
int main(){
    int n;
    while (cin >> n){
        int t = n;
        int arr[20] = {0};
        int i = 0;
        while (n>0){
            arr[i] = n%2;
            i++;
            n = n/2;
        }
        if (t>0){
            for (int j = i-1; j >= 0 ; --j) {
                cout << arr[j];
            }
        } else {
            cout << arr[0];
        }
        cout << endl;
    }
    return 0;
}

