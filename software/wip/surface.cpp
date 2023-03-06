#include <iostream>
#include <cmath>
using namespace std;

float C, D, DL, P;

int main()
{
    int sel;
    cout << "(1) C,D" << endl;
    cout << "(2) DL,P" << endl;
    cout << "choose: ";
    cin >> sel;
    if( sel == 1 ){
        cout << "1";
    }else{
        if (sel == 2){
            cout << "2";
        }else{
            cout << "fail";
            return 0;
        }
    }
    return 0;
}

P = D * sin(C);
DL = D * cos(C);
 
C = atan(P / DL);
D = P / sin(C);