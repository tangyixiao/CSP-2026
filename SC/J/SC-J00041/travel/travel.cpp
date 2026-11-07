#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	char x=b[2],y=d[2];
	if(x>y) swap(x,y);
	if(a==c) cout<<1;
	else
	{
		cout<<"0000";
		return 0;
	}
	if(b[0]==d[0]&&b[1]==d[1]) cout<<1;
	else 
	{
		cout<<"000";
		return 0;
	}
	if((x<='C'&&y<='C')||(x>'C'&&y>'C')) cout<<1;
	else
	{
		cout<<"00";
		return 0;
	}
	if(x=='A'&&y=='C') cout<<0;
	else cout<<1;
	return 0;
	
} 