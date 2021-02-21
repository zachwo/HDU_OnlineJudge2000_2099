//
// Created by 王泽 on 2021/2/21.
//

#include <iostream>
#include "iomanip"
using namespace std;

int main(){
    int n;
    while (cin >> n){
        int YangHui[40][40] = {0};
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= i; ++j) {
                if (j==1 || j==i){      //每行第一个和最后一个数字单独处理
                    YangHui[i][j] = 1;
                } else{
                    YangHui[i][j] = YangHui[i-1][j-1] + YangHui[i-1][j];
                }
            }
        }


        //打印输出杨辉三角
        for (int i = 1; i <= n ; ++i) {
            for (int j = 1; j <= i ; ++j) {
                if(j != i){
                    cout << YangHui[i][j] << " ";
                } else
                    cout << YangHui[i][j] << endl;
            }
        }
        cout << endl;

    }
    return 0;
}

