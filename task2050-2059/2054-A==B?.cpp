#include <iostream>
using namespace std;
/*
 * 不给定限制范围，你可以意想到n种可能性（坑点所在）
 * 本题主要考察点在于小数点后0的处理，可以不考虑两个数前面无效0和无效符号的处理（函数erase_zero_left()处理了左边的无效0）
 * 没有-0 VS 0.000；-0000123.4 vs -123.4这种奇葩数值的比较
 * 增加检验数据
 * 55.0000和55           YES
 * 987.98和987.98000     YES
 * 87和87.01             NO
 * 0.0和0                YES
 *
 * 主要用到字符串处理函数
 * strstr（char *a, char *b）用于检验目标字符串中第一次出现某个字符或者某段字符的位置
 * 该函数返回在字符串 a 中第一次出现 b 字符串的位置，如果未找到则返回 null。
 *
 * strcmp（）用于字符串的比较，若字符串相等，则返回0
 * 同时字符串数组题目没有声明大小，尽量开到最大，这里开到10000，可以AC
 */

//去除整数/浮点数左边没有意义的0
void erase_zero_left(char (&a)[100000]){
    if(a[0] == '0' && strlen(a)!= 1){   //如果a= "0"则不处理
        int loc;
        for (loc = 0; a[loc] == '0'; ++loc) {}
        char *b = a+loc; //b指向字符串a第一个不为0的字符位置
        if (a[loc] != '.'){
            for (int i = 0; i < strlen(b); ++i) {
                a[i] = b[i];
            }
            a[strlen(b)] = '\0';
        } else{
            a[0] = '0';
            for (int i = 1; i <= strlen(b); ++i) {
                a[i] = b[i-1];
            }
            a[strlen(b)+1] = '\0';
        }

    }
}

// 去除小数点后面多余的0，如果后面全为0，则去除小数点
void erase_zero_right(char (&a)[100000]){
    //整数不处理，只处理浮点数
    if (strstr(a,".")!= NULL){
        int length = strlen(a);
        for (int i = length-1; a[i] == '0' ; --i) {
            a[i] = '\0';
            length--;
        }
        //如果最后只剩下小数点，则小数点也去除
        if (a[length-1] == '.'){
            a[length-1] = '\0';
            length--;
        }
    }
}

int main(){
    char a[100000], b[100000];
    while (cin >> a >> b){
        //如果同时处理左右，一定要先处理左边，先处理右边小数部分有可能会吃掉'.'导致左边处理出错
        //erase_zero_left(a);
        erase_zero_right(a);
        //erase_zero_left(b);
        erase_zero_right(b);
        // strcmp（）用于字符串的比较，若字符串相等，则返回0
        if (strcmp(a,b) == 0){
            cout << "YES" << endl;
        }else
            cout << "NO" << endl;
    }
}

//测试用
//int main(){
//    char a[1000];
//    while (cin >> a){
//        erase_zero_left(a); //一定要先处理左边，先处理右边小数部分有可能会吃掉'.'导致左边处理出错
//        erase_zero_right(a);
//
//        cout << a << endl;
//    }
//}