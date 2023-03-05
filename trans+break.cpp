#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int inp;
    printf("(1) D \n");
    printf("(2) DM \n");
    printf("(3) DMS \n");
    cout << "choose: ";
    cin >> inp;

    while (inp == 1 or inp == 2 or inp == 3)
    {
        if (inp == 1)
        {
            float d;
            cout << "Degress: ";
            cin >> d;

            cout << d;

            printf("finish");
        }
        else
        {
            if (inp == 2)
            {
                float d, m, x;

                cout << "Degress: ";
                cin >> d;

                cout << "Minute: ";
                cin >> m;

                x = m / 60 + d;
                cout << x;
                printf("finish");
            }
            else
            {
                if (inp == 3)
                {
                    float d, m, s, x;

                    cout << "Degress: ";
                    cin >> d;

                    cout << "Minute: ";
                    cin >> m;

                    cout << "Second: ";
                    cin >> s;

                    x = (s / 60 + m) / 60 + d;
                    cout << x;

                    printf("finish");
                }
            }
        }
    }
    return 0;
}