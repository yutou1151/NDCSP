#include <iostream>
#include <cmath>
using namespace std;

float P, DLo, L, xDLo, xL, xP;

int main()
{
cout << "L" << ":";
cin >> xL;
cout << "P" << ":";
cin >> xP;

L = xL * M_PI / 180.0;
P = xP * M_PI / 180.0; 

DLo = xP / cos(L);

cout << "L : " << L << endl;
cout << "P : " << P << endl;
cout << "DLo : " << DLo << endl;
}
/*completed*/
/**
L=50°4'N D=50'
ANS:Dlo=1°17.9'E

已知L,P求Dlo
Dlo=P/cosL
**/