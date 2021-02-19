//
// Created by 王泽 on 2021/2/19.
//

#include <iostream>
#include "iomanip"
using namespace std;
/**
 * 求长度为num的数组的平均数
 * @param a
 * @param num
 * @return
 */
double getAvg(int a[100],int num){
    double sum = 0.0;
    for (int i = 0; i < num; ++i) {
        sum += a[i];
    }
    return sum/num;
}

int main(){
    int stuNum, classNum;
    int grade[50][5];   //保存所有学生的各科成绩
    double avgStu[50];     //保存每个学生的平均成绩
    double avgClass[5];    //保存每门课的平均成绩

    while (cin >> stuNum >> classNum){
        for (int i = 0; i < stuNum; ++i) {
            for (int j = 0; j < classNum; ++j) {
                cin >> grade[i][j];
            }
        }
        //求每个学生的平均成绩
        for (int i = 0; i < stuNum ; ++i) {
            avgStu[i] = getAvg(grade[i],classNum);
        }
        for (int i = 0; i < stuNum; ++i) {
            if(i != stuNum-1){
                cout << fixed << setprecision(2) << avgStu[i] << " ";
            } else
                cout << fixed << setprecision(2) << avgStu[i] << endl;
        }
        //求每门课程的平均成绩
        int revGrade[5][50];
        for (int i = 0; i < classNum; ++i) {
            for (int j = 0; j < stuNum; ++j) {
                revGrade[i][j] = grade[j][i];
            }
        }
        for (int i = 0; i < classNum; ++i) {
            avgClass[i] = getAvg(revGrade[i], stuNum);
        }
        for (int i = 0; i < classNum; ++i) {
            if (i != classNum-1){
                cout << fixed << setprecision(2) << avgClass[i] << " ";
            } else
                cout << fixed << setprecision(2) << avgClass[i] << endl;
        }
        //统计各科成绩均大于等于平均成绩的学生数量
        int higherThanAvg = 0;
        int flag;
        for (int i = 0; i < stuNum; ++i) {
            flag = 0;
            for (int j = 0; j < classNum; ++j) {
                if (grade[i][j] >= avgClass[j])
                    flag++;
            }
            if(flag == classNum)
                higherThanAvg++;
        }
        cout << higherThanAvg << endl << endl;
    }
    return 0;
}
