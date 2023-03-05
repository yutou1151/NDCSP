#include <iostream>
#include <cmath>
using namespace std;

int main()
{
float P, D, DL, C;
cout << "C: ";
cin >> C;
cout << "D: ";
cin >> D;

P = D * sin(C * M_PI / 180.0);
DL = D * cos(C * M_PI / 180.0);
 
cout << P << endl;
cout << DL <<endl;
 
//C = atan(P / DL);
//D = P / sin(C);

}