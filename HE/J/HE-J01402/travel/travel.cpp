#include<bits/stdc++.h>
using namespace std;
int a,c,da,ba;
string d,b;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c)cout<<1;
	else 
	cout<<0;
	ba=(b[0]-'0')*10+(b[1]-'0');
	da=(d[0]-'0')*10+(d[1]-'0');
	if(ba==da&&a==c)cout<<1;
	else cout<<0;
	if(b[2]>='A'&&b[2]<='C'&&d[2]>='A'&&d[2]<='C'&&ba==da&&a==c)cout<<1;
	else if(b[2]>='D'&&b[2]<='F'&&d[2]>='D'&&d[2]<='F'&&ba==da&&a==c)cout<<1;
	else cout<<0;
	if(b[2]>='A'&&b[2]<='C'&&d[2]>='A'&&d[2]<='C'&&ba==da&&a==c)
	{if(b[2]-d[2]==1||d[2]-b[2]==1)cout<<1;else cout<<0;}
	else if(b[2]>='D'&&b[2]<='F'&&d[2]>='D'&&d[2]<='F'&&ba==da&&a==c)
	{if(b[2]-d[2]==2||d[2]-b[2]==2)cout<<1;else cout<<0;}
	else cout<<0;
	return 0;
}
