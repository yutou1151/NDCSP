#include <iostream>
#include <cmath>
using namespace std;

float P, DLo, L, xDLo, xL;

int main()
{
cout << "DLo" << ":";
cin >> xDLo;
cout << "L" << ":";
cin >> xL;

DLo = xDLo * M_PI / 180.0;
L = xL * M_PI / 180.0; 

P = xDLo * cos(xL * M_PI / 180.0);
cout << "DLo : " << DLo << endl;
cout << "L : " << L << endl;
cout << "P : " << P << endl;

}

/*completed*/

/**
1.L=55°30'S   Dlo=5°30'E
ANS:P=186.9'E
2.L=50°4'N D=50'
ANS:Dlo=1°17.9'E

1.已知L,Dlo求P(D)
P=Dlo*cosL
2.已知L,D求Dlo
Dlo=P/cosL
**/