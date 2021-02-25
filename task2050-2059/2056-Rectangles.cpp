//
// Created by 王泽 on 2021/2/25.
//
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
/*
 * 给定两个矩形以及这两个矩形对角线上的坐标，计算这两个矩形相交部分的面积，这两个矩形的边与xy轴平行。
 *
 * 输入数据有多组，每组数据是8个正数x1,y1,x2,y2,x3,y3,x4,y4；
 * 其中(x1,y1),(x2,y2)是第一个矩形对角线上的坐标，(x3,y3),(x4,y4)是第一个矩形对角线上的坐标
 * 输出两个矩形相交部分的面积，保留两位小数
 */

int main(){
    double x1,y1,x2,y2,x3,y3,x4,y4;
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4){
        //第一步：求出每个矩形覆盖的xy轴区间；
        double minX1,maxX1,minY1,maxY1; //第一个矩形区间:(minX1,maxX1),(minY1,maxY1)
        double minX2,maxX2,minY2,maxY2; //第二个矩形区间:(minX2,maxX2),(minY2,maxY2)
        if (x1 > x2){
            minX1 = x2;
            maxX1 = x1;
        } else{
            minX1 = x1;
            maxX1 = x2;
        }
        if (y1 > y2){
            minY1 = y2;
            maxY1 = y1;
        } else{
            minY1 = y1;
            maxY1 = y2;
        }
        if (x3 > x4){
            minX2 = x4;
            maxX2 = x3;
        } else{
            minX2 = x3;
            maxX2 = x4;
        }
        if (y3 > y4){
            minY2 = y4;
            maxY2 = y3;
        } else{
            minY2 = y3;
            maxY2 = y4;
        }
        //第二步：求出（minX1,maxX1）与（minX2,maxX2）的交集
        double minX,maxX;
        if (minX1 >= maxX2 || minX2 >= maxX1){
            minX = maxX = 0.0;  //x轴区间没交集
        } else{
            if (minX1 > minX2){ //下限的找大的
                minX = minX1;
            } else{
                minX = minX2;
            }
            if (maxX1 > maxX2){ //上限的找小的
                maxX = maxX2;
            } else{
                maxX = maxX1;
            }
        }
        //第三步：求出（minY1,maxY1）与（minY2,maxY2）的交集
        double minY,maxY;
        if (minY1 >= maxY2 || minY2 >= maxY1){
            minX = maxX = 0.0;  //y轴区间没交集
        } else{
            if (minY1 > minY2){ //下限的找大的
                minY = minY1;
            } else{
                minY = minY2;
            }
            if (maxY1 > maxY2){ //上限的找小的
                maxY = maxY2;
            } else{
                maxY = maxY1;
            }
        }
        double area = 1.0*(maxX - minX) * (maxY - minY);
        cout << fixed << setprecision(2) << area << endl;
    }
    return 0;
}
