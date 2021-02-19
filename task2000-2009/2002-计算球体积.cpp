#include <iostream>
#include "iomanip"
using namespace std;
#define PI 3.1415927
/**
 * 因为double精度高，在计算过程累积的误差小，以后计算直接用double，放弃float
 * float可能因为误差累积就能影响到前三位了
 * 先除了3，就会产生一个有误差的数，然后往后乘，误差就会累积
 * 先用4乘，然后最后做不准确的除法，精度和误差会更小
 * @return
 */
int main() {
    double r;
    while (cin >> r){
        //double v = (4.0/3) * PI * pow(r,3);
        double v = 4.0 * PI * pow(r,3) / 3;
        printf("%.3f\n",v);
        //cout << fixed << setprecision(3) << v <<endl;
    }
    return 0;
}
