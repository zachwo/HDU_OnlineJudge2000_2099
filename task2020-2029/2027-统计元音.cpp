//
// Created by 王泽 on 2021/2/20.
//

#include <iostream>
#include "iomanip"
using namespace std;

int main(){
    int n;
    int a,e,i,o,u;

    cin >> n;
    getchar();
    while (n){
        char str[110];
        cin.getline(str, 110);
        int length = strlen(str);
        a = e = i = o = u = 0;
        //开始统计：
        for (int j = 0; j < length; ++j) {
            switch (str[j]) {
                case 'a': a++; break;
                case 'e': e++; break;
                case 'i': i++; break;
                case 'o': o++; break;
                case 'u': u++; break;
            }
        }
        //输出：
        if(n!=1){
            cout << "a:" << a << endl;
            cout << "e:" << e << endl;
            cout << "i:" << i << endl;
            cout << "o:" << o << endl;
            cout << "u:" << u << endl << endl;
        } else{
            cout << "a:" << a << endl;
            cout << "e:" << e << endl;
            cout << "i:" << i << endl;
            cout << "o:" << o << endl;
            cout << "u:" << u << endl;
        }
        n--;
    }

    return 0;
}
