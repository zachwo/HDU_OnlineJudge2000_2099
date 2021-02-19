#include <iostream>
#include "iomanip"
using namespace std;

/**
 * 判定三位数x是否为水仙花数
 * 注意一定要用一个临时变量获取x的值
 * 否则下面x == (a*a*a + b*b*b + c*c*c)比较的时候x只剩下百位一个数了
 * @param x
 * @return
 */
bool isShuiXian(int x){
    int t = x;
    int a = t%10;
    t /= 10;
    int b = t%10;
    t /= 10;
    int c = t;
    if (x == (a*a*a + b*b*b + c*c*c))
        return true;
    return false;
}

int main() {
    int m, n;
    int flower[1000];
    while (cin >> m >> n){
        flower[1000] = {0};
        int j = 0;
        int number = 0;
        for (int i = m; i <= n ; ++i) {
            if (isShuiXian(i)){
                flower[j++] = i;
                number ++;
            }
        }

        if (number == 0){
            cout << "no" << endl;
        } else{
            for (int i = 0; i < number; ++i) {
                if (i!=number-1){
                    cout << flower[i] << " ";
                } else
                    cout << flower[i] << endl;
            }
        }
    }

    return 0;
}
