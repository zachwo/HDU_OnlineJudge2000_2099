#include <iostream>
#include "iomanip"
using namespace std;
/**
 * 此题描述我认为有一点问题
 * 正确解释为初始母牛第一年没生小牛，从第二年开始每年生一个，否则第二年的牛数量应该为3不为2
 *
 * 其实是很简单很简单的题，但是写了很久，没弄懂数学关系..
 * 其实就是（去年的牛）+（新生的小牛）
 * （新生的小牛）=（四年前的牛），因为（四年前的牛）都有生育能力，对应下来就是（i-3）
 * 对于第n年母牛的总数num[n] = num[n-1] + num[n-3];

 * @return
 */

int main() {
    int n;
    cin >> n;
    while (n!=0){
        int num[60]={0};
        for (int i = 1; i <= n; ++i) {
            if (i <= 4){
                num[i] = i;
            }else{
                num[i] = num[i-1] + num[i-3];
            }
        }
        cout << num[n] << endl;

        cin >> n;
    }
    return 0;
}
