#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,c;
	char b[5],d[5];
	cin>>a;
	for(int i=1; i<=3; i++)
		cin>>b[i];
	cin>>c;
	for(int i=1; i<=3; i++)
		cin>>d[i];
	if(a!=c)
	{
		cout<<"0000";
		return 0;
	}
	if(b[1]!=d[1] || b[2]!=d[2])
	{
		cout<<"1000";
		return 0;
	}
	if((b[3]=='A' || b[3]=='B' || b[3]=='C') && (d[3]=='D' || d[3]=='F') || (d[3]=='A' || d[3]=='B' || d[3]=='C') && (b[3]=='D' || b[3]=='F'))
	{
		cout<<"1100";
		return 0;
	}
	if(!((b[3]=='A' && d[3]=='B' || b[3]=='B' && d[3]=='C' || b[3]=='D' && d[3]=='F') || (d[3]=='A' && b[3]=='B' || d[3]=='B' && b[3]=='C' || d[3]=='D' && b[3]=='F')))
	{
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0;
} 
