//
// Created by 王泽 on 2021/2/25.
//
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
/*
 * 输入两个16进制数A，B
 * 计算A+B,并以16进制输出
 */
//将16进制每位字符转为整数类型；
int change(char &c){
    int ans;
    switch (c) {
        case '0': ans = 0;break;
        case '1': ans = 1;break;
        case '2': ans = 2;break;
        case '3': ans = 3;break;
        case '4': ans = 4;break;
        case '5': ans = 5;break;
        case '6': ans = 6;break;
        case '7': ans = 7;break;
        case '8': ans = 8;break;
        case '9': ans = 9;break;
        case 'A': ans = 10;break;
        case 'B': ans = 11;break;
        case 'C': ans = 12;break;
        case 'D': ans = 13;break;
        case 'E': ans = 14;break;
        case 'F': ans = 15;break;
    }
    return ans;
}
//将16进制数转为10进制数
long long sixteenToTen(char A[]){
    long long ans = 0;
    int x = 0;
    for (int i = strlen(A) - 1; i > 0 ; --i) {
        int t = change(A[i]);
        ans += t * pow(16,x);
        x++;
    }
    //左起第一位单独处理
    if (A[0] == '+'){
        ans *= 1;
    } else if(A[0] == '-'){
        ans *= -1;
    } else{
        int t = change(A[0]);
        ans += t * pow(16,x);
    }
    return ans;
}
int main(){
    char A[100000],B[100000];
    while (cin >> A >> B){
        long long a = sixteenToTen(A);
        long long b = sixteenToTen(B);
        long long sum = a+b;
        if (sum < 0){
            cout << "-";
            sum = abs(sum);
        }
        if (sum == 0){
            cout << 0 <<endl;
            continue;
        }
        char str[100000];
        int i = 0;
        while (sum>0){
            int t = sum % 16;
            switch (t) {
                case 0: str[i] = '0';break;
                case 1: str[i] = '1';break;
                case 2: str[i] = '2';break;
                case 3: str[i] = '3';break;
                case 4: str[i] = '4';break;
                case 5: str[i] = '5';break;
                case 6: str[i] = '6';break;
                case 7: str[i] = '7';break;
                case 8: str[i] = '8';break;
                case 9: str[i] = '9';break;
                case 10: str[i] = 'A';break;
                case 11: str[i] = 'B';break;
                case 12: str[i] = 'C';break;
                case 13: str[i] = 'D';break;
                case 14: str[i] = 'E';break;
                case 15: str[i] = 'F';break;
            }
            sum /= 16;
            i++;
        }
        for (int j = i-1; j >= 0; --j) {
            cout << str[j];
        }
        cout << endl;
    }
    return 0;
}

