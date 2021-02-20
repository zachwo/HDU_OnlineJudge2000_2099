//
// Created by 王泽 on 2021/2/20.
//

#include <iostream>
#include "iomanip"
using namespace std;

int main(){
    char str[110];
    int x = 'a' - 'A';
    while (cin.getline(str,110)){
        int length = strlen(str);
        // 如果字符串第一个字符是空格，或者不是a～z之间的字符，则不进行处理
        if (str[0] != ' ' && (str[0]>='a' && str[0]<='z')){
            str[0] -= x;
        }
        //前一个字符是空格且该字符不是空格，则大写处理
        for (int i = 1; i < length; ++i) {
            if (str[i] != ' ' && str[i-1] == ' ')
                str[i] -= x;
        }

        cout << str << endl;
    }
    return 0;
}
