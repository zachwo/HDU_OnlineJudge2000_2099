//
// Created by 王泽 on 2021/2/21.
//

#include <iostream>
#include "iomanip"
using namespace std;
/**
 * 利用差乘将n变形划分为多个三角形求n边形面积
 *
 * 二维向量叉乘公式a(x1,y1),b(x2,y2),则a×b=(x1y2-x2y1),不需要证明的就是定义的运算。
 * 二维向量a(x1,y1),b(x2,y2)叉乘的几何意义是向量a和向量b构成的平行四边形的面积
 * ps：向量a(x1,y1)的形状是从原点指向(x1,y1)的一条有向线段
 *
 * 平面上任意多边形面积为：(不需要证明的就是定义的运算)
 * S = 1/2×( ( X1*Y2-X2*Y1 ) + … + ( Xk*Yk+1-Xk+1*Yk ) + … + ( Xn*Y1-X1*Yn ) )
 *   = 1/2((X1*Y2+X2*Y3+...+Xn*Y1)-(Y1*X2+Y2*X3+...+Yn*X1))

 * @return
 */
int main(){
    int n;
    int x[110] = {0};
    int y[110] = {0};
    cin >> n;
    while (n!=0){
        int i = 1;
        int j = 1;
        // 接收数据
        for (int k = 1; k <= 2*n ; k++) {
            if (k%2 == 1){
                cin >> x[i];
                i++;
            } else{
                cin >> y[j];
                j++;
            }
        }
        //计算面积
        // S = 1/2×( ( X1*Y2-X2*Y1 ) + … + ( Xk*Yk+1-Xk+1*Yk ) + … + ( Xn*Y1-X1*Yn ) )
        double s = 0.0;
        for (int k = 1; k <= n ; ++k) {
            if (k != n){
                s += (x[k]*y[k+1] - x[k+1]*y[k]) / 2.0;
            } else
                s += (x[n]*y[1] - x[1]*y[n]) / 2.0;
        }
        cout <<fixed << setprecision(1) << s << endl;

        cin >> n;
    }
    return 0;
}

