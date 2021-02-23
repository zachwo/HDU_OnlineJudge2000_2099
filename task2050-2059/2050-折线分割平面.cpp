//
// Created by 王泽 on 2021/2/23.
//

#include <iostream>
#include <algorithm>
#include "iomanip"
using namespace std;
/**
 * 复试考察意义不大
 * 解析：http://blog.sina.com.cn/s/blog_ac5ed4f3010194i8.html
 * @return
 */
int main(){
    int c;
    cin >> c;
    while(c){
        long long n;
        cin >> n;
        cout << 2*n*n-n+1<<endl;
        c--;
    }
    return 0;
}

