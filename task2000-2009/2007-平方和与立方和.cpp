#include <iostream>
#include "iomanip"
using namespace std;
/**
 * 给定两个整数m n
 * 求m～n之间所有偶数的平方和与所有奇数的立方和
 * 有个坑，那就是需要判断m和n的两个数的大小
 * @return
 */
int main() {
    int m, n;
    int sumOu, sumJi;
    while (cin >> m >> n){
        sumOu = sumJi = 0;
        if (m>n){
            for (int i = n; i <= m ; ++i) {
                if(i%2 == 0){
                    sumOu += pow(i,2);
                } else
                    sumJi += pow(i,3);
            }
        } else{
            for (int i = m; i <= n ; ++i) {
                if(i%2 == 0){
                    sumOu += pow(i,2);
                } else
                    sumJi += pow(i,3);
            }
        }
        cout << sumOu << " " << sumJi << endl;
    }
    return 0;
}
