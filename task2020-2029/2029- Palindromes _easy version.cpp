//
// Created by 王泽 on 2021/2/20.
//

#include <iostream>
#include "iomanip"
using namespace std;
/**
 * “回文串”是一个正读和反读都一样的字符串，比如“level”或者“noon”等等就是回文串。
 * 请写一个程序判断读入的字符串是否是“回文”.
 * @return
 */
int main(){
    int n;
    cin >> n;
    getchar();
    while (n){
        char str[100];
        cin.getline(str,100);
        int length = strlen(str);

        bool isHuiWen = true;
        for (int i = 0; i < length/2; ++i) {
            if (str[i] != str[length-1-i]){
                isHuiWen = false;
                break;
            }
        }
        if (isHuiWen){
            cout << "yes" << endl;
        } else
            cout << "no" << endl;

        n--;
    }
    return 0;
}
