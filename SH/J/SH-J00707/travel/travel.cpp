#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==c)
    {
        cout<<1;
        string x=b.substr(0,2);
    string y=d.substr(0,2);
    if(x==y)
	{

	  cout<<1;
	  if(b[2]<='C')
    {
        if(d[2]<='C')
        {
            cout<<1;
            if(abs(d[2]-b[2])==1)
    {
        cout<<1;

    }
    else cout<<0;
        }
        else
        {
            cout<<"00";
            return 0;
        }
    }
    else
    {
        if(d[2]>'C')
        {
            cout<<11;
            return 0;
        }
        else
        {
         cout<<"00";
         return 0;
        }
    }

	}
    else cout<<"000";

    }
    else cout<<"0000";
    return 0;
}
