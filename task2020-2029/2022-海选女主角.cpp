//
// Created by 王泽 on 2021/2/19.
//

#include <iostream>
#include "iomanip"
using namespace std;


int main(){
    int m, n;
    int MM[100][100];

    while (cin >> m >> n){
        MM[100][100] = {0};
        for (int i = 1; i <= m ; ++i) {
            for (int j = 1; j <=n ; ++j) {
                cin >> MM[i][j];
            }
        }

        int Hang, Lie;
        Hang = Lie = 1;
        int max = abs(MM[1][1]);
        for (int i = 1; i <= m ; ++i) {
            for (int j = 1; j <=n ; ++j) {
                if(abs(MM[i][j]) > max){
                    max = abs(MM[i][j]);
                    Hang = i;
                    Lie = j;
                }
            }
        }
        cout << Hang << " " << Lie << " " << MM[Hang][Lie] << endl;

    }

    return 0;
}
