#include <iostream>
#include <iomanip>

using namespace std;

/**
 * sqrt(x):输出根号下x
 * pow(x,n):输出x的n次方
 * setprecision(n):cout输出浮点型数据时最多保留两位小数，eg. 1.22222>1.22; 1.2>1.2
 * fixed << setprecision(n):输出时强制保留两位小数，eg. 1.22222>1.22; 1.2>1.20; 1>1.00
 * cout设置保留小数位数需要#include <iomanip>
 * @return
 */
int main() {
    float x1, y1, x2, y2;
    while (cin >> x1 >> y1 >> x2 >> y2){
        float distance = sqrt(pow(x1-x2,2)+pow(y1-y2, 2));
        cout << fixed << setprecision(2) << distance << endl;
//        printf("%.2f\n",distance);
    }
    return 0;
}
