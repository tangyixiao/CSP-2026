#include<bits/stdc++.h>
#define ll long long
using namespace std;
string cr,sr,cx,sx;//a0 b1 c2 d3 f4

int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>cr>>sr>>cx>>sx;
    if(cr==cx)
    {
        cout<<1;
        if(sr[0]==sx[0]&&sr[1]==sx[1])
        {
            cout<<1;
            if((sr[2]-'A'>=0&&sr[2]-'A'<=2&&sx[2]-'A'>=0&&sx[2]-'A'<=2)||(sr[2]-'A'>2&&sr[2]-'A'<=5&&sx[2]-'A'>2&&sx[2]-'A'<=5))
            {
                cout<<1;
                if((sr[2]=='A'&&sx[2]=='B')||(sr[2]=='B'&&sx[2]=='C')||(sr[2]=='D'&&sx[2]=='F'))
                {
                    cout<<1;
                }
                else
                {
                    cout<<"0";
                }
            }
            else
            {
                cout<<"00";
            }
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
// 02 12D 02 12F
