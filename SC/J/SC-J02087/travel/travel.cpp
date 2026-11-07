#include<bits/stdc++.h>
using namespace std;
int c1,c2,a,b,c,d;
string p1,p2;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>c1>>p1>>c2>>p2;
    if(c1==c2)
    {
        a=1;
        if((p1[0]-'0')*10+p1[1]-'0'==(p2[0]-'0')*10+p2[1]-'0')
        {
            b=1;
            if((p1[2]<'D'&&p2[2]<'D')||(p1[2]>='D'&&p2[2]>='D'))
            {
                c=1;
                int x=p1[2]-'A',r=p2[2]-'A';
                if(max(x,r)-min(x,r)==1)
                {
                    d=1;
                }
                else
                {
                    d=0;
                }
            }
            else
            {
                c=0;
            }
        }
        else
        {
            b=0;
        }
    }
    else
    {
        a=0;
    }
    cout<<a<<b<<c<<d;
    return 0;
}