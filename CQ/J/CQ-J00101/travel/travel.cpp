#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	long long x,y,z,w;
	char ch,hc;
	cin>>x>>y>>ch>>z>>w>>hc;
	if(x==z)cout<<'1';
	else cout<<'0';
	if(x==z&&y==w)cout<<'1';
	else cout<<'0';
	if(x==z&&y==w)
	{
		if((ch=='D'&&hc=='F')||(ch=='F'&&hc=='D'))cout<<'1';
		else if((ch=='A'&&hc=='B')||(ch=='A'&&hc=='C')||(ch=='B'&&hc=='A')||(ch=='B'&&hc=='C')||(ch=='C'&&hc=='A')||(ch=='C'&&hc=='B'))cout<<'1';
		else cout<<'0';
	}
	else cout<<'0';
	if(x==z&&y==w)
	{
		if(abs(ch-hc)==1&&!((ch=='C')&&(hc=='D'))&&!((ch=='D')&&(hc=='C')))cout<<'1';
		else cout<<'0';
	}
	else cout<<'0';
	return 0;
}
