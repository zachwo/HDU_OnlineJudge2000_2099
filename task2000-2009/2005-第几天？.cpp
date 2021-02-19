#include <iostream>
#include "iomanip"
using namespace std;
/**
 * 一般能被4整除的年份是闰年，不能被4整除的年份是平年
 * 但是如果是世纪年（也就是整百年），就只有能被400整除才是闰年，否则就是平年
 * 闰年的2月有29天，平年的2月只有28天。
 * @return
 */
int main() {
    int runYear[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int pingYear[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int year, month, day;
    while (scanf("%d/%d/%d",&year,&month,&day)!=EOF){
        int count =0;
        if ((year%4 == 0 && year%100 != 0) || year%400 == 0){   //是闰年
            for (int i = 0; i < month-1; ++i) { //注意是month-1，因为当月还没过完
                count += runYear[i];
            }
            count += day;
        }else{  //是平年
            for (int i = 0; i < month-1; ++i) {
                count += pingYear[i];
            }
            count += day;
        }
        cout << count << endl;
    }

    return 0;
}
