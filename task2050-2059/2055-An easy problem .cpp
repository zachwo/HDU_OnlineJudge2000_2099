//
// Created by 王泽 on 2021/2/25.
//

#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    int T;
    cin >> T;
    while (T){
        char letter;
        int number;
        int ans;
        cin >> letter >> number;
        if (letter >= 'a' && letter <= 'z'){
            ans = number - (letter - 'a' + 1);
        } else{
            ans = number + (letter - 'A' + 1);
        }
        cout << ans << endl;
        --T;
    }
    return 0;
}