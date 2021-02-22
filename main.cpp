#include <iostream>
#include <algorithm>
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
 * @return
 */
int main(){
    int m;
    cin >> m;
    getchar();
    while(m){
        char code[60];
        cin.getline(code,60);
        int length = strlen(code);
        int flag = true;
        if (length < 8 || length > 16){
            flag = false;
        }
        int sum = 0;
        for (int i = 0; i < length; ++i) {
            if (code[i] >= 'A' && code[i] <= 'Z'){
                sum++;
                break;
            }
        }
        for (int i = 0; i < length; ++i) {
            if (code[i] >= 'a' && code[i] <= 'z'){
                sum++;
                break;
            }
        }
        for (int i = 0; i < length; ++i) {
            if (code[i] >= '0' && code[i] <= '9'){
                sum++;
                break;
            }
        }
        for (int i = 0; i < length; ++i) {
            bool flag = false;
            switch (code[i]) {
                case '~' : flag = true ;break;
                case '!' : flag = true ;break;
                case '@' : flag = true ;break;
                case '#' : flag = true ;break;
                case '$' : flag = true ;break;
                case '%' : flag = true ;break;
                case '^' : flag = true ;break;
            }
            if (flag){
                sum++;
                break;
            }
        }
        if (sum < 3)
            flag = false;
        if (flag){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
        --m;
    }
    return 0;
}

