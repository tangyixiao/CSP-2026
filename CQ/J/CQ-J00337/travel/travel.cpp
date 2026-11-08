#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string a,b,a2,b2;
    cin>>a>>b>>a2>>b2;
    if(a==a2)
    {
        cout<<"1";
        if(b[0]==b2[0]&&b[1]==b2[1])
        {
            cout<<"1";
            if(!((b[2]=='C'&&b2[2]=='D')||(b[2]=='D'&&b2[2]=='C')))
            {
                cout<<"1";
                if(b[2]==b2[2]+1||b[2]==b2[2]-1)
                {
                    cout<<"1";
                }
                else cout<<"0";
            }
            else cout<<"00";
        }
        else
        {
            cout<<"000";
        }
    }
    else
    {
        cout<<"0000";
    }
    return 0;
}