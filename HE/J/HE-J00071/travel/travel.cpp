#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,c3,c4;
	cin>>c1>>c2>>c3>>c4;
	if(c1==c3)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
		return 0;
	}
	bool flag=0;
	for(int i=0;i<2;i++)
	{
		if(c2[i]!=c4[i])
		{
			flag=1;
		}
	}
	if(flag)
	{
		cout<<0;
		cout<<0;
		cout<<0;
		return 0;
	}
	else
	{
		cout<<1;
	}
	if((c2[2]=='A'&&c4[2]=='B')||(c2[2]=='A'&&c4[2]=='C')||(c2[2]=='B'&&c4[4]=='A')||(c2[2]=='B'&&c4[2]=='C')||(c2[2]=='C'&&c4[2]=='B')||(c2[2]=='C'&&c4[2]=='A'))
	{
		cout<<1;
	}
	else if((c2[2]=='D'&&c4[2]=='F')||(c2[2]=='F'&&c4[4]=='D'))
	{
		cout<<1;
	}
	else
	{
		cout<<0;
		cout<<0;
		return 0;
	} 
	if(c2[2]+1==c4[2]||c2[2]-1==c4[2])
	{
		cout<<1; 
	}
	else
	{
		cout<<0;
	}
	return 0;
} 

