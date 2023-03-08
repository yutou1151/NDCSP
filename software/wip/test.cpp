#include <iostream>
#include <cmath>
using namespace std;

float xP, xDL, C, D, DL, x;
int main()
{
xP = 2.16666;
xDL = 1.5;

    C = (xP * 180.0 / M_PI) / (xDL * 180.0 / M_PI);
    D = (xP * 180.0 / M_PI) / sin(C * 180.0 / M_PI);

cout << xP << endl;
cout << xDL << endl;
cout << C << endl;
cout << D << endl;
}