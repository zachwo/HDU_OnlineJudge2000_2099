#include <iostream>
#include "iomanip"
using namespace std;

/**
 * 从第一阶楼梯爬到第四阶楼梯的方法数目是从第一阶楼梯爬到第二阶楼梯和第三阶楼梯的方法数目之和.
 * 同理从第一阶楼梯爬到第五阶楼梯的方法数目是从第一阶楼梯爬到第三阶楼梯和第四阶楼梯方法数目之和。
 * 从第一阶梯爬到第n阶梯是从第一阶梯爬到第n-1和第n-2的方法数目之和
 * @return
 */
int main(){
    int n;
    int m[100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> m[i];
    }

    int array[41] = {0,1,1};
    for (int i = 3; i <= 40; ++i) {
        array[i] = array[i-1] + array[i-2];
    }

    for (int i = 0; i < n; ++i) {
        cout << array[m[i]] << endl;
    }

    return 0;
}
//下面的写法也正确
//int main(){
//    int n;
//    int m;
//    cin >> n;
//
//    int array[41] = {0,1,1};
//    for (int i = 3; i <= 40; ++i) {
//        array[i] = array[i-1] + array[i-2];
//    }
//
//    while (n--){
//        cin >> m;
//        cout << array[m] << endl;
//    }
//
//    return 0;
//}