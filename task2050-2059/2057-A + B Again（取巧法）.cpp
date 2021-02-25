//
// Created by 王泽 on 2021/2/25.
//
#include <iostream>
#include <iomanip>
using namespace std;
/*
 * 输入两个16进制数A，B
 * 计算A+B,并以16进制输出
 */

//这是一个取巧的办法  输入时接受16进制输出16进制
//对于oj测试案例来讲这种办法完全可以通过测试
//但从题目要求来看，无疑本题想考察字符串和int型之间的转换
/**
 * cin >> hex >> a >> b >>...;          //输入 16进制
 * cin >> dec >> a >> b >>...;          //输入 10进制
 * cin >> oct >> a >> b >>...;          //输入 8进制
 * cin >> a >> b >>...;                 //默认输入10进制
 *
 * cout <<hex<<c << endl;               //输出16进制(if c>=0)
 * cout << "-"<<hex<<c << endl;         //输出16进制(if c<0)
 * cout << dec << c << endl;            //输出10进制
 * cout << oct << c << endl;            //输出8进制
 * cout << c << endl;                   //默认输出10进制
 *
 * 可以使用setiosflags(ios::uppercase)将输出16进制时出现的小写字母变为大写
 * 使用setiosflags(ios::uppercase)需要#include <iomanip>
 * cout<<setiosflags(ios::uppercase)<<hex<<x<<endl;
 */
int main()
{
    long long a,b;  //为了避免长度不匹配，操作16进制数的时候必须使用long long
    while(cin>>hex>>a>>b){
        if (a+b>=0){
            cout<<setiosflags(ios::uppercase)<<hex<<abs(a+b)<<endl;
        }else
            cout<<"-"<<setiosflags(ios::uppercase)<<hex<<abs(a+b)<<endl;
    }
    return 0;
}

