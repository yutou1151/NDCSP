#include <iostream>
#include <cmath>
using namespace std;

float P, DLo, L, xDlo, xL, xDL, xP;

int main()
{
    int sel;
    cout << "(1) L,Dlo" << endl;
    cout << "(2) L,D" << endl;
    cout << "choose: ";
    cin >> sel;
    if (sel == 1)
    {
        {
            int inp;
            printf("(1) D \n");
            printf("(2) DM \n");
            printf("(3) DMS \n");
            cout << "choose L input format: ";
            cin >> inp;
            if (inp == 1)
            {
                cout << "Degress: ";
                cin >> xL;
            }
            else
            {
                if (inp == 2)
                {
                    float d, m;

                    cout << "Degress: ";
                    cin >> d;

                    cout << "Minute: ";
                    cin >> m;

                    xL = m / 60 + d;
                }
                else
                {
                    if (inp == 3)
                    {
                        float d, m, s;

                        cout << "Degress: ";
                        cin >> d;

                        cout << "Minute: ";
                        cin >> m;

                        cout << "Second: ";
                        cin >> s;

                        xL = (s / 60 + m) / 60 + d;
                    }
                }
            }
        }
        {
            int inp;
            printf("(1) D \n");
            printf("(2) DM \n");
            printf("(3) DMS \n");
            cout << "choose Dlo input format: ";
            cin >> inp;
            if (inp == 1)
            {
                cout << "Degress: ";
                cin >> xDlo;
            }
            else
            {
                if (inp == 2)
                {
                    float d, m;

                    cout << "Degress: ";
                    cin >> d;

                    cout << "Minute: ";
                    cin >> m;

                    xDlo = m / 60 + d;
                }
                else
                {
                    if (inp == 3)
                    {
                        float d, m, s;

                        cout << "Degress: ";
                        cin >> d;

                        cout << "Minute: ";
                        cin >> m;

                        cout << "Second: ";
                        cin >> s;

                        xDlo = (s / 60 + m) / 60 + d;
                    }
                }
            }
        }
        DLo = xDlo * M_PI / 180.0;
        L = xL * M_PI / 180.0; 
        P = xDlo * cos(xL * M_PI / 180.0);
        cout << "DLo : " << DLo << endl;
        cout << "P : " << P << endl;
    }
    else
    {
        if (sel == 2)
        {
            {
                int inp;
                printf("(1) D \n");
                printf("(2) DM \n");
                printf("(3) DMS \n");
                cout << "choose DL input format: ";
                cin >> inp;
                if (inp == 1)
                {
                    cout << "Degress: ";
                    cin >> xDL;
                }
                else
                {
                    if (inp == 2)
                    {
                        float d, m;

                        cout << "Degress: ";
                        cin >> d;

                        cout << "Minute: ";
                        cin >> m;

                        xDL = m / 60 + d;
                    }
                    else
                    {
                        if (inp == 3)
                        {
                            float d, m, s;

                            cout << "Degress: ";
                            cin >> d;

                            cout << "Minute: ";
                            cin >> m;

                            cout << "Second: ";
                            cin >> s;

                            xDL = (s / 60 + m) / 60 + d;
                        }
                    }
                }
            }
            {
                int inp;
                printf("(1) D \n");
                printf("(2) DM \n");
                printf("(3) DMS \n");
                cout << "choose P input format: ";
                cin >> inp;
                if (inp == 1)
                {
                    cout << "Degress: ";
                    cin >> xP;
                }
                else
                {
                    if (inp == 2)
                    {
                        float d, m;

                        cout << "Degress: ";
                        cin >> d;

                        cout << "Minute: ";
                        cin >> m;

                        xP = m / 60 + d;
                    }
                    else
                    {
                        if (inp == 3)
                        {
                            float d, m, s;

                            cout << "Degress: ";
                            cin >> d;

                            cout << "Minute: ";
                            cin >> m;

                            cout << "Second: ";
                            cin >> s;

                            xP = (s / 60 + m) / 60 + d;
                        }
                    }
                }
            }
        L = xL * M_PI / 180.0;
        P = xP * M_PI / 180.0; 
        DLo = xP / cos(L);

cout << "L : " << L << endl;
cout << "P : " << P << endl;
cout << "DLo : " << DLo << endl;
        }
    }
    system("pause");
    return 0;
}



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