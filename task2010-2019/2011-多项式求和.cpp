#include <iostream>
#include "iomanip"
using namespace std;

/**
 * 注意sum += (1.0/i)
 * 如果是sum += (1/i)会造成精度损失
 * @param x
 * @return
 */
double getSum(int x){
    double sum = 0;
    for (int i = 1; i <= x; ++i) {
        if (i%2 != 0){
            sum += (1.0/i);
        }else
            sum -= (1.0/i);
    }
    return sum;
}


int main() {
    int m;
    int array[100];

    cin >> m;
    for (int i = 0; i < m; ++i)
        cin >> array[i];

    for (int i = 0; i < m; ++i) {
        cout << fixed << setprecision(2) << getSum(array[i]) << endl;
    }

    return 0;
}
