#include <iostream>
#include "iomanip"
using namespace std;
/**
 * 贪心算法（区间贪心）
 * @return
 */
int main(){
    int n;
    cin >> n;
    while (n!=0){
        int start[110] = {0};
        int end[110] = {0};
        int i = 1;
        int j = 1;
        for (int k = 1; k <= 2*n ; ++k) {
            if (k%2 == 1){
                cin >> start[i];
                i++;
            } else{
                cin >> end[j];
                j++;
            }
        }
        //统计每个节目的时长
        int last[110] = {0};
        for (int k = 1; k <=n; ++k) {
            last[k] = end[k] = end[k];
        }


        cin >> n;
    }
    return 0;
}

