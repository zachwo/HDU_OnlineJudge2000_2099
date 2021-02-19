#include <iostream>
#include "iomanip"
using namespace std;

int main() {
    int n, m;
    int array[100];
    while (cin >> n >> m){
        int a = n / m;
        int b = n % m;
        int number = 2;

        if (b != 0){    //有余数除不尽
            for (int i = 0; i < a; ++i) {
                int sum = 0;
                for (int j = 0; j < m; ++j) {
                    sum += number;
                    number += 2;
                }
                cout << sum/m << " ";
            }

            int sum1 = 0;
            for (int i = 0; i < b; ++i) {
                sum1 += number;
                number += 2;
            }
            cout << sum1/b << endl;
        }else{  // 刚好除尽
            for (int i = 0; i < a; ++i) {
                int sum = 0;
                for (int j = 0; j < m; ++j) {
                    sum += number;
                    number += 2;
                }
                if (i != a-1){
                    cout << sum/m << " ";
                } else{
                    cout << sum/m << endl;
                }
            }
        }

    }


    return 0;
}
