#include <iostream>
#include "iomanip"
using namespace std;

bool isJishu(int x){
    if (x%2 == 0)
        return false;
    return true;
}
int main() {
    int n;
    while (cin >> n){
        int array[1000] = {0};    //规定一个足够大的数组存储输入的整数,初始值全为0
        int product = 1;    //假设每组数据必定至少存在一个奇数

        for (int i = 0; i < n ; ++ i)
            cin >> array[i];
        for (int i = 0; i < n; ++i) {
            if (isJishu(array[i]))
                product *= array[i];
        }
        cout << product << endl;
    }
    return 0;
}
