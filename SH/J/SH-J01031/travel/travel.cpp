#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	int  bj=1; 
	if (a==c)
	{
		cout<<1;
	}
	else
	{
		cout<<00;
		bj=0;
	}
	if (b[0]==d[0] && b[1]==d[1] && bj==1)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
		bj=0;
	}
	if((b[2]%10+d[2]%10<=13 || b[2]%10+d[2]%10==17)&& bj==1)
	{
		cout<<1;
    }
	else
	{
		cout<<0;
		bj=0;
	}
	if (b[2]-d[2]==1 || d[2]-b[2]==1 && bj==1 )
	{
		cout<<1;
	}
	else
	{
	    cout<<0;
    }
	return 0;
} 
