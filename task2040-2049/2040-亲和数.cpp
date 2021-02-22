//
// Created by 王泽 on 2021/2/22.
//

#include <iostream>
#include <algorithm>
#include "iomanip"
using namespace std;

int main(){
    int m;
    cin >> m;
    while(m){
        int a,b;
        cin >> a >> b;
        int suma = 0;
        int sumb = 0;
        for (int i = 1; i <= a/2; ++i) {
            if (a%i == 0){
                suma += i;
            }
        }
        for (int i = 1; i <= b/2; ++i) {
            if (b%i == 0){
                sumb += i;
            }
        }
        if(suma == b && sumb == a){
            cout << "YES" << endl;
        }else
            cout << "NO" << endl;
        --m;
    }

    return 0;
}

