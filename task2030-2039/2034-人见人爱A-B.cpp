//
// Created by 王泽 on 2021/2/21.
//

#include <iostream>
#include "iomanip"
using namespace std;
/**
 *同一个集合中不会有两个相同的元素
 * 注意考虑n、m为0的情况
 * 从小到大输出结果
 * 传递数组的引用void test(int (&a)[n])，调用的时候必须要传递一个元素有n个的数组
 * @return
 */
void sort(int (&a)[110],int n){
    for (int i = 0; i < n-1; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (a[i] > a[j]){
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}

int main(){
    int n, m;
    int arrN[110], arrM[110];
    cin >> n >> m;
    while (n!=0 || m!=0){
        for (int i = 0; i < n; ++i) {
            cin >> arrN[i];
        }
        for (int i = 0; i < m; ++i) {
            cin >> arrM[i];
        }
        int num = 0;
        int aMinusB[110] ={0};
        if(n!=0 && m!=0){
            for (int i = 0; i < n; ++i) {
                int flag = true;
                for (int j = 0; j < m; ++j) {
                    if (arrM[j] == arrN[i]){
                        flag = false;
                        break;
                    }
                }
                if (flag){
                    aMinusB[num] = arrN[i];
                    num++;
                }
            }
        }
        if(n!=0 && m == 0){
            for (int i = 0; i < n; ++i) {
                aMinusB[i] = arrN[i];
            }
            num = n;
        }
        //输出结果
        if (num != 0){
            sort(aMinusB,num);
            for (int i = 0; i < num; ++i) {
                cout << aMinusB[i] << " ";
//                if (i != num-1){
//                    cout << aMinusB[i] << " ";
//                } else
//                    cout << aMinusB[i] << endl;
            }
            cout << endl;
        } else
            cout << "NULL" << endl;

        cin >> n >> m;
    }
    return 0;
}

