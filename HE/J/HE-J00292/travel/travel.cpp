#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in" , "r" , stdin);
    freopen("travel.out" , "r" , stdout);
    string R , X , R_1[1005] , X_1[1005] ;
    for(int i = 1; i <= 17; i++)
    {
        cin >> R >> X;
        if(R != "01" && R != "16")
        {
            if(X != "01" && X != "16")
            {
                if(R == X)
                {
                    cout << 1 ;

                }
            }
        }
        else
        {
            cout << 0000;
        }

    }
    for(int i = 1; i <= 18; i++)
    {
        cin >> R_1[i] >> X_1[i];
        if(R_1[2] == "A" || R_1[2] == "B" || R_1[2] == "C")
        {
            if(X_1[2] == "A" || X_1[2] == "B" || X_1[2] == "C")
            {
                cout << 1;
            }
        }
        if(R_1[2] == "A" && X_1[2] == "B")
        {
            cout << 1;
        }
        if(R_1[2] == "B" && X_1[2] == "C")
        {
            cout << 1;
        }
        if(R_1[2] == "D" && X_1[2] == "F")
        {
            cout << 1;
        }
        if(X_1[2] == "A" && R_1[2] == "B")
        {
            cout << 1;
        }
        if(X_1[2] == "B" && R_1[2] == "C")
        {
            cout << 1;
        }
        if(X_1[2] == "D" && R_1[2] == "F")
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }

    }
    return 0;
}
