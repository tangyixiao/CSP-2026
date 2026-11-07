#include <bits/stdc++.h>
using namespace std;

string s1,c1,s2,c2;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin >> s1>>c1>>s2>>c2;
    if(s1==s2)
    {
        cout<<1;
        if(c1[0]==c2[0] && c1[1]==c2[1])
        {
            cout <<1;
            char a=c1[2],b=c2[2];
            if((a<='C' && b<='C') || (a>'C' && b>'C'))
            {
                cout <<1;
                if(a+1==b || b+1==a)
                {
                    cout <<1;
                }
                else
                {
                 cout <<0;
                }
            }
            else
            {
                cout <<0<<0;
            }
        }
        else
            cout <<0<<0<<0;

    }
    else
    {
        cout <<0<<0<<0<<0;
    }
    return 0;
}
