#include <iostream>
#include "iomanip"
using namespace std;

int main() {
    int n;
    while (cin >> n){
        double score[100];
        int j = 0;
        for (int i = 0; i < n; ++i) {
            cin >> score[i];
        }

        double high = score[0];
        double low = score[0];
        for (int i = 1; i < n; ++i) {
            if (high < score[i])
                high = score[i];
            if (low > score[i])
                low = score[i];
        }

        double sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += score[i];
        }
        double avg = (sum - high - low)/(n-2.0);
        cout << fixed << setprecision(2) << avg <<endl;
    }
    return 0;
}
