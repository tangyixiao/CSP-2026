#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    bool a1=0,b1=0;
    cin>>c1>>s1>>c2>>s2;
    for(int i=0;i<2;i++)
    {
        if(c1[i]!=c2[i])
        {
            a1=1;
        }
    }
    if(a1==1)
    {
        cout<<"0000";
    }
    else
    {
        cout<<1;
        for(int i=0;i<2;i++)
        {
            if(s1[i]!=s2[i])
            {
                b1=1;
            }
        }
        if(b1==1)
        {
            cout<<"000";
        }
        else
        {
            cout<<1;
            if(s1[2]<='C'&&s2[2]<='C'||s1[2]>'C'&&s2[2]>'C')
            {
                cout<<1;
                if(s1[2]-s2[2]==1||s2[2]-s1[2]==1)
                {
                    cout<<1;
                }
                else
                {
                    cout<<0;
                }
            }
            else
            {
                cout<<"00";
            }
        }
    }
    return 0;
}
