#include <iostream>
#include <cmath>
using namespace std;

float L1, L2, DL;

int main()
{
    cout << "Input L1, choose mode" << endl;
    int inpL1;
    printf("(1) D \n");
    printf("(2) DM \n");
    printf("(3) DMS \n");
    cout << "choose: ";
    cin >> inpL1;
    if (inpL1 == 1)
    {
        cout << "Degress: ";
        cin >> L1;
    }
    else
    {
        if (inpL1 == 2)
        {
            float d, m;

            cout << "Degress: ";
            cin >> d;

            cout << "Minute: ";
            cin >> m;

            L1 = m / 60 + d;
        }
        else
        {
            if (inpL1 == 3)
            {
                float d, m, s;

                cout << "Degress: ";
                cin >> d;

                cout << "Minute: ";
                cin >> m;

                cout << "Second: ";
                cin >> s;

                L1 = (s / 60 + m) / 60 + d;
            }
        }
    }

    cout << "Input L2, choose mode" << endl;
    int inpL2;
    printf("(1) D \n");
    printf("(2) DM \n");
    printf("(3) DMS \n");
    cout << "choose: ";
    cin >> inpL2;
    if (inpL2 == 1)
    {
        cout << "Degress: ";
        cin >> L2;
    }
    else
    {
        if (inpL2 == 2)
        {
            float d, m;

            cout << "Degress: ";
            cin >> d;

            cout << "Minute: ";
            cin >> m;

            L2 = m / 60 + d;
        }
        else
        {
            if (inpL2 == 3)
            {
                float d, m, s;

                cout << "Degress: ";
                cin >> d;

                cout << "Minute: ";
                cin >> m;

                cout << "Second: ";
                cin >> s;

                L2 = (s / 60 + m) / 60 + d;
            }
        }
    }

    cout << "Input DL, choose mode" << endl;
    int inpDL;
    printf("(1) D \n");
    printf("(2) DM \n");
    printf("(3) DMS \n");
    cout << "choose: ";
    cin >> inpDL;
    if (inpDL == 1)
    {
        cout << "Degress: ";
        cin >> DL;
    }
    else
    {
        if (inpDL == 2)
        {
            float d, m;

            cout << "Degress: ";
            cin >> d;

            cout << "Minute: ";
            cin >> m;

            DL = m / 60 + d;
        }
        else
        {
            if (inpDL == 3)
            {
                float d, m, s;

                cout << "Degress: ";
                cin >> d;

                cout << "Minute: ";
                cin >> m;

                cout << "Second: ";
                cin >> s;

                DL = (s / 60 + m) / 60 + d;
            }
        }
    }
    float x = (acos((sin(L1 * M_PI / 180.0) * sin(L2 * M_PI / 180.0)) + (cos(L1 * M_PI / 180.0) * cos(L2 * M_PI / 180.0) * cos(DL * M_PI / 180.0))) * 180.0 / M_PI) * 60.0;
    cout << "answer= " << x << endl;
    system("pause");
    return 0;
}
