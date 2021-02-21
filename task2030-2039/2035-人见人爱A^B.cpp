//
// Created by 王泽 on 2021/2/21.
//

#include <iostream>
#include "iomanip"
using namespace std;
/**
 * 上来直接求阶乘肯定爆栈溢出
 * 每次计算完使用取余运算只保留最后三位即可,eg
 * 6530 * 6530 = (6000+530)*6530 = 6*6530*1000(最后三位肯定为0，必舍弃) + 530*6530
 * 阶乘全部完毕之后，不要忘了最后结果再进行一次result % 1000
 * @return
 */

int main(){
    int a, b;
    cin >> a >> b;
    while (a!=0 || b!=0){
        int result = 1;
        for (int i = 1; i <= b; ++i) {
            if (result/1000 > 0)
                result %= 1000;
            result *= a;
        }
        if (result/1000 > 0)
            result %= 1000;

        cout << result << endl;
        cin >> a >> b;
    }

    return 0;
}

