#include<bits/stdc++.h>
using namespace std;



int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    int a,b;
    string str1,str2;
    cin >> a >> str1 >> b >>str2;
    if(a == b)
    {
        cout <<'1';
    }
    else
    {
        cout <<"0000";
        return 0;
    }
    if(str1[0] == str2[0] and str1[1] == str2[1])
        cout <<'1';
    else
    {
        cout <<"000";
        return 0;
    }
    char t_1 = str1[2],t_2 = str2[2];
    if(t_1 == 'A' or t_1 == 'B' or t_1 == 'C')
    {
        if(t_2 == 'A' or t_2 == 'B' or t_2 == 'C')
        {
            cout << '1';
            if(abs(t_1 - t_2) == 1)
                cout << '1';
            else
                cout <<'0';

        }
        else
        {
            cout << "00";
        }
    }
    else
    {
        if(t_2 == 'D' or t_2 == 'E')
            cout <<"11";
        else
            cout << "00";
    }
    return 0;
}
