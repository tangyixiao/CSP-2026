#include<bits/stdc++.h> 
using namespace std;
char a[2],a1[3],b[2],b1[3];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=2;i++){cin>>a[i];}
	for(int i=1;i<=3;i++){cin>>a1[i];}
	for(int i=1;i<=2;i++){cin>>b[i];}
	for(int i=1;i<=3;i++){cin>>b1[i];}
	for(int i=1;i<=2;i++)
	{
		if(a[i]!=b[i])
		{
			cout<<"0000";
			return 0;
		}
	}
	for(int i=1;i<=2;i++)
	{
		if(a1[i]!=b1[i])
		{
			cout<<"1000";
			return 0;
		}
	}
		if(a1[3]=='C'&&b1[3]=='D'||a1[3]=='D'&&b1[3]=='C')
		{
			cout<<"1100";
			return 0;
		}
		if(a1[3]+1!=b1[3]&&b1[3]+1!=a1[3])
		{
			cout<<"1110";
			return 0;
		}
	cout<<"1111";
	return 0;
}