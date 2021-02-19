#include <iostream>
#include "iomanip"
using namespace std;

int main() {
    int n;
    int array[100];
    while (cin >> n){
        for (int i = 0; i < n; ++i) {
            cin >> array[i];
        }

        int min = array[0];
        int tag = 0;
        for (int i = 1; i < n; ++i) {
            if (min > array[i]){
                min = array[i];
                tag = i;
            }
        }
        if(tag != 0){
            int t = array[0];
            array[0] = min;
            array[tag] = t;
        }

        for (int i = 0; i < n; ++i) {
            if (i != n-1){
                cout << array[i] << " ";
            } else
                cout << array[i] << endl;
        }
    }
    return 0;
}
