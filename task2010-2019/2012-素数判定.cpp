#include <iostream>
#include "iomanip"
using namespace std;

/**
 * 判断x是否是素数
 * 循环条件考虑到精度问题推荐用i*i <= x而不是i<=(int)sqrt(x)
 * @param x
 * @return
 */
bool isSuShu(int x){
    for (int i = 2; i*i <= x; ++i) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main() {
    int x, y;
    cin >> x >> y;
    while (x!=0 || y!=0){
        int array[100];
        int num = y-x+1;    //表达式的所有取值个数
        int j = 0;
        for (int i = x; i <= y ; ++i)
            array[j++] = pow(i,2) + i +41;

        bool isAllSuShu = true;
        for (int i = 0; i < num; ++i) {
            if (!isSuShu(array[i])){
                isAllSuShu = false;
                break;
            }
        }

        if (isAllSuShu){
            cout << "OK" << endl;
        } else{
            cout << "Sorry" << endl;
        }

        cin >> x >> y;
    }
    return 0;
}
