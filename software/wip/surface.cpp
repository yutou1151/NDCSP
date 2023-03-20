#include <iostream>
#include <cmath>
using namespace std;

float C, D, DL, P, xC, xD, xDL, xP;
double convertxC(double radian)
{
	return(xC * (180 / M_PI));
}

int main()
{
    int sel;
    cout << "(1) C,D" << endl;
    cout << "(2) DL,P" << endl;
    cout << "choose: ";
    cin >> sel;
    if (sel == 1)
    {
        {
            int inp;
            printf("(1) D \n");
            printf("(2) DM \n");
            printf("(3) DMS \n");
            cout << "choose C input format: ";
            cin >> inp;
            if (inp == 1)
            {
                cout << "Degress: ";
                cin >> xC;
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

                    xC = m / 60 + d;
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

                        xC = (s / 60 + m) / 60 + d;
                    }
                }
            }
        }
        {
            int inp;
            printf("(1) D \n");
            printf("(2) DM \n");
            printf("(3) DMS \n");
            cout << "choose D input format: ";
            cin >> inp;
            if (inp == 1)
            {
                cout << "Degress: ";
                cin >> xD;
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

                    xD = m / 60 + d;
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

                        xD = (s / 60 + m) / 60 + d;
                    }
                }
            }
        }
        P = xD * sin(xC * M_PI / 180.0);
        DL = xD * cos(xC * M_PI / 180.0);
        cout << "P= " << P << endl;
        cout << "DL= " << DL << endl;
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
            xC = atan(xP / xDL);
            C = convertxC(xC);
            
            D = (xP * (180 / M_PI)) / sin(C);    //wip
            cout << "xP " << xP << endl;    //wip
            cout << "xDL " << xDL << endl;    //wip
            cout << "C = " << C << endl;
            cout << "D = " << D << endl;
        }
    }
    system("pause");
    return 0;
}

/**
P = D * sin(C);
DL = D * cos(C);

C = atan(P / DL);
D = P / sin(C);
**/
/**
平面航法：
1.已知C,D求DL,P
P=D*sinC  DL=D*cosC
2.已知DL,P求C,D
C=tan-1(P/DL) D=P/sinC
平面航法：
1.C=5 D=188
ANS:DL=187.3'N P=16.4'E
2.DL=2°10'N P=90'W
ANS:C=325.3° D=158.1'
**/
