#include<bits/stdc++.h>
using namespace std;
int a,b,c,d;
char x,y;
int main() 
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>a>>b>>x>>c>>d>>y;
	if(a!=c)
	{
		cout<<"0000";
		return 0;
	}
	cout<<'1';
	if(b!=d)
	{
		cout<<"000";
		return 0;
	}
	cout<<'1';
	if((x=='D'&&y!='F')||(x=='F'&&y!='D')||(y=='D'&&x!='F')||(y=='F'&&x!='D'))
	{
		cout<<"00";
		return 0;
	}
	cout<<'1';
	if(abs(x-y)>1)
	{
		cout<<'0';
		return 1;
	}
	cout<<'1';
	return 0;
}
