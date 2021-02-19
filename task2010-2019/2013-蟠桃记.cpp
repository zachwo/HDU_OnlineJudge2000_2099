#include <iostream>
#include "iomanip"
using namespace std;

int main() {
    int n;
    while (cin >> n){
        int sum = 1;
        for (int i = n-1; i > 0 ; --i) {
            sum = 2*(sum+1);
        }
        cout << sum << endl;
    }
    return 0;
}
