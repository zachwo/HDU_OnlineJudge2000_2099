//
// Created by 王泽 on 2021/2/20.
//

#include <iostream>
#include "iomanip"
using namespace std;

/**
 * 字符的输出相关问题详见：https://blog.csdn.net/qq_25245961/article/details/77414134
 *
 * cin>>的结束符，回车，或者空格都可以，
 * 但是当cin读取结束后，cin的结束符还会再缓冲区中存在，并让下次需要读取时进行读取
 * 所以在使用 cin 后若要使用 getline() 必须要把前面cin遗留的结束符处理掉，
 * 解决方法为：在使用getline()之前，加入一行getline()/getchar()来处理cin留下的结束符；
 *
 * cin.getline(arrayname,size) // 接受一个字符串，可以接收空格并输出，长度不超过size
 * getline()中的结束符可以是回车，结束后，结束符不放入缓存区;
 * cin的结束符，结束后，结束符还在缓存区；
 *
 * strlen(str) 是用于求字符串数组的长度
 *
 * C语言标识符由字母（A-Z,a-z）、数字（0-9）、下划线“_”组成，
 * 并且首字符不能是数字，但可以是字母或者下划线。
 * @return
 */
bool isBiaoShiFu(char *str, int length){
    if (!((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z') || str[0]=='_'))
        return false;
    for (int i = 0; i < length; ++i) {
        if (!((str[i] >= 'a' && str[i] <= 'z') ||
              (str[i] >= 'A' && str[i] <= 'Z') ||
              str[i]=='_' ||
              (str[i] >= '0' && str[i] <= '9'))){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    char strs[100][50];
    while (cin >> n){
        getchar();
        for (int i = 0; i < n; ++i) {
            cin.getline(strs[i],50);
        }
        for (int i = 0; i < n; ++i) {
            if (isBiaoShiFu(strs[i],strlen(strs[i]))){
                cout << "yes" << endl;
            } else
                cout << "no" << endl;
        }
//        for (int i = 0; i < n; ++i) {
//            cout << strs[i] <<endl;
//        }
    }

    return 0;
}
