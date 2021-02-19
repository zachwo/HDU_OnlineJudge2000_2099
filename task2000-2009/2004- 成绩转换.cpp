#include <iostream>
#include "iomanip"
using namespace std;

int main() {
    int grade;
    while (cin >> grade){
        if (grade >=0 && grade <= 100){
            if (grade>=90 && grade <=100)
                cout << "A" << endl;
            if (grade>=80 && grade <=89)
                cout << "B" << endl;
            if (grade>=70 && grade <=79)
                cout << "C" << endl;
            if (grade>=60 && grade <=69)
                cout << "D" << endl;
            if (grade>=0 && grade <=59)
                cout << "E" << endl;
        } else
            cout << "Score is error!" << endl;
    }
    return 0;
}
