#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	bool bb,dd;
	cin>>a>>b>>c>>d;
	if(b[2]=='F'||b[2]=='D')bb=1;
	else bb=0;
	if(d[2]=='F'||d[2]=='D')dd=1;
	else dd=0;
	if(a==c)
	{
		cout<<"1";
		if(b[0]==d[0]&&b[1]==d[1])
		{
			cout<<"1";
			if(bb==dd)
			{
				cout<<"1";
				if(abs(int(b[2]-d[2]))==1)
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
