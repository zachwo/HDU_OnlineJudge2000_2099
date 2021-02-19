#include <iostream>
#include "iomanip"
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    while (n!=0 || m!=0){
        int array[110] = {0};

        if (n == 0){
            array[0]=m;
        } else {
            for (int i = 0; i < n; ++i){
                cin >> array[i];
            }
            int tag = 0;                    //开始排序
            for (int i = 0; i < n; ++i) {
                if (array[i] > m){
                    tag = i;
                    break;
                }
            }
            for (int i = n; i >tag ; --i) {
                array[i] = array[i-1];
            }
            array[tag] = m;
        }

        for (int i = 0; i < n+1; ++i) {
            if (i != n){
                cout << array[i] << " ";
            }else
                cout << array[i] << endl;
        }

        cin >> n >> m;
    }
    return 0;
}
