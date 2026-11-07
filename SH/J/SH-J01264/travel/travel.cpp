#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin >> c1 >> s1 >> c2 >> s2;
    if(c1 != c2)
    {
        cout << "0000";
    }
    else
    {
        if(s1.substr(0,2) != s2.substr(0,2))
        {
            cout << 1000;
        }
        else
        {
            char ch1 = s1[2];
            char ch2 = s2[2];
            bool b1 = 0;
            bool b2 = 0;
            if(ch1 <= 'C' && ch1 >= 'A')
            {
                b1 = 1;
            }
            if(ch2 <= 'C' && ch2 >= 'A')
            {
                b2 = 1;
            }
            if(b1 != b2)
            {
                cout << 1100;
            }
            else
            {
                if(abs(int(ch1) - int(ch2)) != 1)
                {
                    cout << 1110;
                }
                else
                {
                    cout << 1111;
                }
            }
        }
    }
    return 0;
}