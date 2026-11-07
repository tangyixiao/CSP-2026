#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int r=0,t=1;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	
	if(b[2]>'C'&&d[2]<='C'||d[2]>'C'&&b[2]<='C')
	  r=1;
	if(b[2]<='C'&&d[2]=='B'||d[2]<='C'&&b[2]=='B'||b[2]>'C'&&d[2]>'C')
	  t=0;
	if(a==c&&b[0]==d[0]&&b[1]==d[1]&&r!=1&&t!=1)
	{
		cout<<1111;
	}
	else if(a!=c)
	  cout<<0000;
	else if(b[0]!=d[0]||b[1]!=d[1])
	  cout<<1000;
	else if(r==1)
	  cout<<1100;
	else
	  cout<<1110;
	  
return 0;
}
