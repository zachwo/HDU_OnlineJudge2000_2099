#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;
/*
 * 看似简单实际没有那么容易
 * 原因就是高精度问题，如果是超长的数列呢？？？int、long long、double都放不下呢？
 * 如果含有浮点类型呢？
 * 所以这道题要用高精度的思想来做：字符串
 *
 * 四种情况：
 * 浮点数和浮点数比较 xxx.xxx vs xxx.xxx
 * 整数和整数比较 xxx vs xxx
 * 整数和浮点数比较 xxx vs xxx.xxx
 * 浮点数和整数比较 xxx.xxx vs xxx
 *
 * 特殊情况：-0 vs 0; -0.000 vs 0
 * @return
 */
 bool isPositive(char &c){
    if (c == '-'){
        return false;
    } else
        return true;
 }
 /**
  * 判断是否为浮点数
  * @param str
  * @param length
  * @return
  */
 bool isFloat(char (&str)[50]){
//     bool flag = false;
//     for (int i = 0; i < strlen(str); ++i) {
//         if (str[i] == '.'){
//             flag = true;
//             break;
//         }
//     }
//     return flag;
    if(strstr(str,".") != NULL){
        return true;
    } else{
        return false;
    }
 }
 /**
  * 整数和浮点数进行比较的时候，只有整数部分相等，小数部分全为零才相等
  * @param flo
  * @param in
  * @return
  */
 bool float_VS_int(char (&flo)[50],char (&in)[50]){
     if (strlen(flo)<=strlen(in)){
         if(strcmp(in,"-0") && strcmp(flo,"0.0")){
             return true;
         } else{
             return false;
         }
     } else{
         bool INT = true;
         bool POINT = true;
         bool DECIMAL = true;
         //确定浮点位置:如果两个数相等，那么flo[strlen(in)] == '.';
         if (flo[strlen(in)] != '.'){
             POINT = false;
         }
         //确定整数部分是否相等
         for (int i = 0; i < strlen(in); ++i) {
             if (flo[i] != in[i]){
                 INT = false;
                 break;
             }
         }
         //确定小数部分是否全为0
         for (int i = strlen(in)+1; i < strlen(flo) ; ++i) {
             if (flo[i] != '0'){
                 DECIMAL = false;
                 break;
             }
         }
         if (INT && POINT && DECIMAL){
             return true;
         } else{
             return false;
         }
     }

 }

 int main(){
    char a[50], b[50];
    while (~scanf("%s %s",a,b)){
        int lenA = strlen(a);
        int lenB = strlen(b);
        int flag = false;
        //都是整数或者都是浮点数：逐位比较
        if ( (isFloat(a) && isFloat(b))||
        (!isFloat(a) && !isFloat(b)) ){
            if (lenA == lenB){
                int count = 0;
                for (int i = 0; i < lenA; ++i) {
                    if (a[i] == b[i])
                        count++;
                }
                if (count == lenA)
                    flag = true;
            } else{
                if(strcmp(a,"-0")&&strcmp(b,"0") || strcmp(b,"-0")&&strcmp(a,"0"))
                    flag = true;
            }
        } else{
            if (isFloat(a)){   //a是浮点数，b是整数
                flag = float_VS_int(a,b);
            } else{                     //b是浮点数，a是整数
                flag = float_VS_int(b,a);
            }
        }

        if(flag){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }
    return 0;
}

