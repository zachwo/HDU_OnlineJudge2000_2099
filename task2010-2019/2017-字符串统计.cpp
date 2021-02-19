#include <iostream>
#include "iomanip"
using namespace std;
/**
 * cin不能读取回车和空格字符
 * cin遇到回车与空格结束读取
 *
 * 获取字符串的长度用strlen(str)
 * @return
 */
int main() {
    int n;
    cin >> n;
    char str[1000]; //设置一个足够大的字符数组接收字符串
    int count[1000] = {0};  //每个字符串初始定义数字字符出现次数为0
    for (int i = 0; i < n; ++i){
        cin >> str;
        int len = strlen(str);

        for (int j = 0; j < len; ++j)
            if (str[j]>='0' && str[j]<='9')
                count[i] ++;
    }

    for (int i = 0; i < n; ++i)
        cout << count[i] << endl;

    return 0;
}
