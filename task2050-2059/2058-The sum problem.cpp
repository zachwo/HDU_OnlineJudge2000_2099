//
// Created by 王泽 on 2021/2/25.
//
#include <iostream>
#include <iomanip>
using namespace std;
/*
 * 给定一个序列1,2,3，... N，计算所有可能的子序列，这些子序列元素的和为M。
 */
//方法一：暴力枚举
//理论可行，但是是数据量太大了，oj运行超时，时间复杂度为O（n^2）
//int main(){
//    long long n, m;
//    cin >> n >> m;
//    while (n!=0 || m!=0){
//        for (long long i = 1; i <= m; ++i) {
//            long long sum = 0;
//            for (long long j = i; j <= m; ++j) {
//                sum+=j;
//                if (sum == m){
//                    cout << "[" << i << "," << j << "]" << endl;
//                }
//                if(sum > m)
//                    break;
//            }
//        }
//        cout << endl;
//
//        cin >> n >> m;
//    }
//    return 0;
//}

// 方法二：分析公式，优化循环
// 设子序列长度为k,第一个元素为a
// m = k(a + a + k-1)/2 = ka + k(k-1)/2
// a = m/k - (k-1)/2
// 因为 0 < a <= m,即 0 < m/k - (k-1)/2 <= m;
// 所以k从1开始，0 < 2m - k(k-1) <=2km作为循环条件
// 由于题中所有数字均是正整数，因此我们只要以k为对象，弄一层循环，找出所有m/k-(k-1)/2为整数时的k值就好了。
int main(){
    long long n, m;
    cin >> n >> m;
    while (n!=0 || m!=0){
        // 由上面的式子可以推出，m与k的平方大致成正比例，又因为m<=1000000000,所有开一个100000的数组足够了
        int arr[100000];
        int i = 0;
        for (int k = 1;2*m - k*(k-1) > 0 && 2*m - k*(k-1) <= 2*k*m ; ++k) {
            double t = 1.0*m/k - 1.0*(k-1)/2;
            // C语言中，输出double类型(双精度实型)以及float类型(单精度实型)时，默认输出6位小数
            if ((int)t == (int)(t + 0.999999)){
                arr[i] = k;
                i++;
            }
        }
        for (int j = i-1; j >= 0; --j) {
            int x = m/arr[j] - (arr[j]-1)/2;
            cout << "[" << x << "," << x + arr[j]-1 << "]" << endl;
        }
        cout << endl;
        cin >> n >> m;
    }
    return 0;
}
