//
// Created by 王泽 on 2021/2/19.
//

#include <iostream>
#include "iomanip"
using namespace std;
/**
 * 传递数组的引用void test(int (&a)[n])，调用的时候必须要传递一个元素有n个的数组
 * @param list
 * @param length
 * @param x
 */
void sort(int (&list)[110], int n){
    for (int i = 0; i <n-1 ; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (abs(list[i]) < abs(list[j])){
                int t = list[i];
                list[i] = list[j];
                list[j] = t;
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    while (n!=0){
        int list[110] = {0};
        for (int i = 0; i < n; ++i) {
            cin >> list[i];
        }
        sort(list,n);
        for (int i = 0; i < n; ++i) {
            if (i != n-1){
                cout << list[i] << " ";
            } else{
                cout << list[i] << endl;
            }
        }

        cin >> n;
    }

    return 0;
}
