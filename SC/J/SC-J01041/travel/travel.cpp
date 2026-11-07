#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	bool lzy=0,jhy=0;
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c)
	{
		lzy=1;
		cout<<1;
	}
	else cout<<0;
	string n="",m="";
	n+=b[0];
	n+=b[1];
	m+=d[0];
	m+=d[1];
	//cout<<n<<' '<<m<<endl;
	if(n==m&&lzy)
	{
		jhy=1;
		cout<<1;
	}
	else cout<<0;
	bool f=0;
	char i=b[2],j=d[2];
	//cout<<i<<' '<<j<<endl;
	if(i<='C'&&j<='C'&&jhy)
	{
		f=1;
		
		cout<<1;
	}
	else if(i>'C'&&j>'C'&&jhy)
	{
		f=1;
		cout<<1;
	}
	else cout<<0;
	if(f)
	{
		int x=abs(i-j);
		if((i=='D'&&j=='F')||x==1)cout<<1;
		else cout<<0;
	}
	else cout<<0;
	return 0;
}