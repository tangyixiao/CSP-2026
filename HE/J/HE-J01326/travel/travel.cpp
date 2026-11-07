#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	int e=(a[0]-'0')*10+(a[1]-'0');
	int f=(c[0]-'0')*10+(c[1]-'0');
	if(e==f)
		cout<<"1";
	else
	{
		cout<<"0000";
		return 0;
	}
	if(b[0]==d[0]&&b[1]==d[1])
		cout<<"1";
	else
	{
		cout<<"000";
		return 0;
	}
	if((b[2]>='A'&&b[2]<='C'&&d[2]>='A'&&d[2]<='C')||(b[2]>='E'&&b[2]<='F'&&d[2]>='E'&&d[2]<='F'))
		cout<<"1";
	else
	{
		cout<<"00";
		return 0;
	}
	if(abs(b[2]-d[2])==1)
		cout<<"1";
	else
		cout<<"0";
		
	return 0;
} 
