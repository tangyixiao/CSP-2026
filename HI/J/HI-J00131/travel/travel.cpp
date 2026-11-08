#include <bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	int f=0,f2=0,f3=0;

	if(a==c)f3=1;
	else f3=0;
	cout<<f3;
	
	if(b.substr(0,2)==d.substr(0,2)&&f3==1)f=1;
	else f=0;
	cout<<f;
	
	if(f==1&&f3==1)
	{
		if(!(b[2]=='C'&&d[2]=='D')&&!(d[2]=='C'&&b[2]=='D')) f2=1;
		else f2=0;
		cout<<f2;
	}
	else cout<<0;
	
	if(f==1&&f3==1)
	{
		if(abs(b[2]-d[2])==1&&f2) cout<<1;
		else cout<<0;
	}
	else cout<<0;
	return 0;
}
