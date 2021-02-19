#include <iostream>
#include "iomanip"
using namespace std;

int main() {
    double n, m;
    while (cin >> n >> m){
        double sum = n;
        for (int i = 1; i < m ; ++i) {
            n = sqrt(n);
            sum += n;
        }
        cout << fixed << setprecision(2) << sum << endl;
    }
    return 0;
}
