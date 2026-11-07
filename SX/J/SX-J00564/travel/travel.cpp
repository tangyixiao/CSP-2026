#include<bits/stdc++.h>
#define ll int
using namespace std;
ll x,y;
int main() 
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string a,aa,b,bb;
	cin>>a>>aa>>b>>bb;
	x=aa[0]*10+aa[1],y=bb[0]*10+bb[1];
	char xx=aa[2],yy=bb[2];
	if(xx>yy) swap(xx,yy);
	if(a!=b)
	{
		cout<<"0000";
	}
	else if(x!=y)
	{
		cout<<"1000";
	}
	else if(!((xx>='A'&&xx<='C'&&yy>='A'&&yy<='C')||(xx>='D'&&xx<='F'&&y>='D'&&yy<='F')))
	{
		cout<<"1100";
	}
	else if(!(xx+1==yy||(xx=='D'&&yy=='F')))
	{
		cout<<"1110";
	}
	else
	{
		cout<<"1111";
	}
	return 0;
}
