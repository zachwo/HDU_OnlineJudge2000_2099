//
// Created by 王泽 on 2021/2/20.
//

#include <iostream>
#include "iomanip"
using namespace std;
/**
 * char类型的一个元素占一个字节。
 * 汉字机内码在计算机的表达方式的描述是，使用二个字节（macos貌似为三个字节），每个字节最高位一位为1。
 * 计算机中，补码第一位是符号位，1表示为负数，
 *
 * 判断一个汉字在该系统里占几个字节：
 * 先接收一个汉字，然后cout << length << endl;
 *
 * 所以汉字机内码的每个字节表示的十进制数都是负数
 * 统计输入字符串含有几个汉字，只需求出字符串中小于0的字符有几个，将它除以2就得到答案。
 * @return
 */
int main(){
    int n;
    cin >> n;
    getchar();
    while (n){
        char str[1000];
        cin.getline(str,1000);
        int length = strlen(str);

        int count = 0;
        for (int i = 0; i < length; ++i) {
            if ((int)str[i] < 0)
                count ++;
        }
        cout << count/2 << endl;    //for Windows
        //for macOS ：cout << count/3 << endl;

        n--;
    }
    return 0;
}

