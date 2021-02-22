//
// Created by 王泽 on 2021/2/22.
//

#include <iostream>
#include <algorithm>
#include "iomanip"
using namespace std;
/**
 * 相隔1个蜂房（假设蜂房a为1号房）1->2 1步
 * 相隔2个蜂房（假设蜂房a为1号房）1->3 2步
 * 相隔3个蜂房（假设蜂房a为1号房）1->4 3步
 * 相隔4个蜂房（假设蜂房a为1号房）1->5 5步
 * 相隔5个蜂房（假设蜂房a为1号房）1->6 8步 ...
 * 这个时候已经能看出了，这是一个简单的递推关系
 * @return
 */
int main(){
    int n;
    cin >> n;
    while (n){
        int a, b;
        cin >> a >> b;
        long long route[60] = {0,1,2};
        int length = b-a;
        if (length > 2){
            for (int i = 3; i <= length ; ++i) {
                route[i] = route[i-1] + route[i-2];
            }
        }

        cout << route[length] << endl;

        --n;
    }
    return 0;
}

