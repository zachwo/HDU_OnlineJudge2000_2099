//
// Created by 王泽 on 2021/2/23.
//
#include <iostream>
#include <algorithm>
#include "iomanip"
using namespace std;

int main(){
    int n,m;    //n为列，m为行
    while (cin >> n >> m){
        char rectangle[80][80];
        //第一步：将需要输出的数组元素都设为' '
        for (int i = 0; i < m+2; ++i) {
            for (int j = 0; j < n+2 ; ++j) {
                rectangle[i][j] = ' ';
            }
        }
        //第二步：将四个角的数组元素设为'+'
        rectangle[0][0] = rectangle[0][n+1] = rectangle[m+1][0] = rectangle[m+1][n+1] = '+';
        //第三步：左右两边填充'｜'
        for (int i = 1; i <= m; ++i) {
            rectangle[i][0] = rectangle[i][n+1] ='|';
        }
        //第四步：上下两边填充'-'
        for (int i = 1; i <= n ; ++i) {
            rectangle[0][i] = rectangle[m+1][i] = '-';
        }

        for (int i = 0; i < m+2; ++i) {
            for (int j = 0; j < n+2; ++j) {
                cout << rectangle[i][j];
            }
            cout << endl;
        }

        cout << endl;
    }
    return 0;
}


