#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int c1,c3;
char c2[10],c4[10];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1;
	for(int i=1;i<=3;i++)
	{
		cin>>c2[i];
	}
	cin>>c3;
	for(int i=1;i<=3;i++)
	{
		cin>>c4[i];
	}
	if(c1==c3)
	{
		cout<<"1";
	}
	else 
	{
		cout<<"0000";
		return 0;
	}
	if(c2[1]==c4[1]&&c2[2]==c4[2])
	{
		cout<<1;
	}
	else{
		cout<<"000";
		return 0;
	}
	if(((c2[3]=='F'||c2[3]=='D')&&(c4[3]=='F'||c4[3]=='D'))||((c2[3]=='A'||c2[3]=='B'||c2[3]=='C')&&(c4[3]=='A'||c4[3]=='B'||c4[3]=='C')))
	{
		cout<<1;
	}
	else
	{
		cout<<"00";
		return 0;
	}
	if((c2[3]=='F'||c2[3]=='D')&&(c4[3]=='F'||c4[3]=='D'))
	{
		cout<<"1";
		return 0;
	}
	if(c2[3]=='A'&&c4[3]=='B')
	{
		cout<<"1";
		return 0;
	}
	if(c2[3]=='C'&&c4[3]=='B')
	{
		cout<<"1";
		return 0;
	}
	else
	{
		cout<<0;
	}
	return 0;
}

