#include <iostream>
#include "iomanip"
using namespace std;
/**
 * 这题是中规中矩的求最小公倍数，
 * 思路：一般求最小公倍数，就是要先求最大公约数，
 * 用辗转相除法求最大公约数
 * 方法的核心是代码是 while(j!=0) { c=i%j; i=j; j=c; }
 * i是两数中较大的，j是两数中较小的，c是他们的余数
 * 模拟一下流程
 * 142 & 8:
 * 142%8=6
 * 8%6=2
 * 6%2=0
 * 2%0 stop
 * 得出2是142和8的最大公约数
 *
 * 两个数的最小公倍数是这两个数的乘积/最大公约数
 * 这题其实就这么多，但有个地方太坑爹了,就是过界问题，可能两数相乘会超过 int 的最大界限，所以最好是先除,
 * 即：x * y / maxGongYueShu 改为x / maxGongYueShu * y
 * @return
 */
int getMinGongBeiShu(int x, int y){
    int t1 = x;
    int t2 = y;
    if (t1 < t2){
        int t = t1;
        t1 = t2;
        t2 = t;
    }
    while (t2!=0){
        int c = t1%t2;
        t1 = t2;
        t2 = c;
    }
    int maxGongYueShu = t1;
    return x / maxGongYueShu * y;
}
int main(){
    int n;
    while (cin >> n){
        int array[1000] = {0};
        for (int i = 0; i < n; ++i) {
            cin >> array[i];
        }
        int minGongBeiShu = array[0];
        for (int i = 1; i < n; ++i) {   //两个数两个数地求最小公倍数
            minGongBeiShu = getMinGongBeiShu(minGongBeiShu,array[i]);
        }
        cout << minGongBeiShu << endl;
    }
    return 0;
}
