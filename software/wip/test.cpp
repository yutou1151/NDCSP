#include <iostream>
#include <cmath>
using namespace std;
float xP, xDL, C, D, DL, x, xC, xD, rD;
double convertxC(double radian)
{
	return(xC * (180 / M_PI));
}



int main()
{
xP = 90;
xDL = 130;

    xC = (atan (xP / xDL));
    C = convertxC(xC);
    D = (xP) / sin(xC);

cout << xP << endl;
cout << xDL << endl;
cout << C << endl;
cout << D << endl;
}

/**
atan(P/Dl)
D=P/sinC



**/

 
