#include <bits/stdc++.h>
using namespace std;
string c1,c2,c3,c4,ans;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    cin>>c1>>c2>>c3>>c4;
    if (c1==c3)
    {
        ans+='1';
    }
    else
    {
        ans+='0';
    }
    if (c2[0]==c4[0] && c2[1]==c4[1])
    {
        ans+='1';
    }
    else
    {
        ans+='0';
    }
    int z=0;
    if (((c2[2]<='C' && c4[2]<='C') || (c2[2]=='D' && c4[2]=='F')) || (c2[2]=='F' && c4[2]=='D'))
    {
        ans+='1';
        z++;
    }
    else
    {
        ans+='0';
    }
    if (c2[2]==c4[2]+1 || c2[2]==c4[2]-1)
    {
        if (z==1)
        {
            ans+='1';
        }
        else
        {
            ans+='0';
        }
    }
    else
    {
        ans+='0';
    }
    cout<<ans;
    return 0;
}
