#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
bool flag=true;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c)
	{
		cout<<1;
		for(int i=0;i<2;i++)
		{
			if(b[i]!=d[i])
			{
				flag=false;
			}
		}
		if(!flag)
		{
			cout<<"000"<<"\n";
			return 0;
		}
		cout<<1;
		if((b[2]<='C'&&d[2]<='C')||(b[2]>'C'&&d[2]>'C'))
		{
			cout<<1;
			if(b[2]==d[2]-1)
			{
				cout<<1<<"\n";
			}
			else
			{
				cout<<0<<"\n";
			}
		}
		else
		{
			cout<<"00"<<"\n";
		}
	}
	else
	{
		cout<<"0000"<<"\n";
	}
	return 0;
}
