#include <iostream>
#include "iomanip"
using namespace std;

/**
 * float，double分别遵循R32-24,R64-53的标准，他们的位数分别是23,52，即误差在2^-23,2^-52；
 * 所以float的精度误差在1e-6，double精度误差在1e-15 。
 * 所以要判断一个单精度浮点数：则是if( fabs(f_float) <= 1e-6)；
 * 要判断一个双精度浮点数：则是if( fabs(d_double) <= 1e-15 )；
 * 判断两个浮点数相等：
 * if( fabs(a_float-b_float) <= 1e-6)；
 * if( fabs(x_double-y_double) <= 1e-15)；
 * @return
 */

int main() {
    int n;
    int fuShu, zero, zhengShu;
    cin >> n;
    while (n!=0){
        double array[100];
        fuShu = zero = zhengShu = 0;
        for (int i = 0; i < n; ++i)
            cin >> array[i];

        for (int i = 0; i < n; ++i) {
            if (array[i]<0)
                fuShu++;
            if (fabs(array[i])<=1e-15)  //注意浮点数判断为0的标准
                zero++;
            if (array[i]>0)
                zhengShu++;
        }
        cout << fuShu << " " << zero << " " << zhengShu << endl;

        cin >> n;
    }
    return 0;
}
