//
// Created by 王泽 on 2021/2/22.
//
#include <iostream>
#include <algorithm>
#include "iomanip"
using namespace std;
/**
 * 有个小坑： 题目没说三边一定是整数
 * @return
 */
int main(){
    int m;
    cin >> m;
    while (m){
        double line[3];
        cin >> line[0] >> line[1] >> line[2];
        sort(line,line+3);
        if (line[0] + line[1] > line[2] && line[2]-line[0] < line[1]){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        m--;
    }
    return 0;
}


