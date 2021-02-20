#include <iostream>
#include "iomanip"
using namespace std;

int main(){
    char str[110];
    while (cin.getline(str,110)){
        int length = strlen(str);
        //获取最大字母max
        int max = str[0];
        for (int i = 0; i < length; ++i) {
            if (str[i] > max){
                max = str[i];
            }
        }
        //输出str的时候在所有最大字母后面输出(max)
        for (int i = 0; i < length; ++i) {
            cout << str[i];
            if (i != length-1){
                if(str[i] == max)
                    cout << "(max)";
            } else{
                if (str[i] == max){
                    cout << "(max)" << endl;
                } else
                    cout << endl;
            }
        }


    }
    return 0;
}
