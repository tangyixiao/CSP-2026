#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,c,s=0;
	string b,d;
	cin>>a>>b>>c>>d;
	if(a==c) s++;
	else
	{
		cout<<"0000";
		return 0;
	}
	if(b[0]==d[0]&&b[1]==d[1]) s++;
	else 
	{
		cout<<"1000";
		return 0;
	}
	if(((b[2]=='A'||b[2]=='B'||b[2]=='C')&&(d[2]=='A'||d[2]=='B'||d[2]=='C'))||((b[2]=='D'||b[2]=='F')&&(d[2]=='D'||d[2]=='F'))) s++;
	else
	{
		cout<<"1100";
		return 0;
	}
	if((b[2]=='D'&&d[2]=='F')||(b[2]=='F'&&d[2]=='D')) s++;
	if((b[2]+1==d[2]||b[2]-1==d[2]))
	{
		s++;
		if(b[2]=='C'&&d[2]=='D'||b[2]=='D'&&d[2]=='C') s--;
	}
	if(s==4) cout<<"1111";
	else if(s==3) cout<<"1110";
	return 0;
} 