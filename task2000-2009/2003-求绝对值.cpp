#include <iostream>
#include "iomanip"
using namespace std;
/**
 * C语言中求绝对值的函数有两种，分别为abs()、fabs()
 * abs()函数用来对整型变量求绝对值，
 * fabs()函数用来对浮点型变量求绝对值。
 * @return
 */
int main() {
    double x;
    while (cin >> x){
        cout << fixed << setprecision(2) << fabs(x) << endl;
    }
    return 0;
}
