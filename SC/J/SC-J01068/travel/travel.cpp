#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int ans=0;
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)	ans=1;
	if(ans==0)
	{
		cout<<"0000";
		return 0;
	} 
	ans=0;
	int a=10*(s1[0]-'0')+s1[1]-'0';
	int b=10*(s2[0]-'0')+s2[1]-'0';
	if(a==b)	ans=1;
	if(ans==0)
	{
		cout<<"1000";
		return 0;
	}
	ans=0;
	if(s1[2]>='D'&&s2[2]>='D') ans=1;
	if(s1[2]<'D'&&s2[2]<'D')	ans=1;
	if(ans==0)
	{
		cout<<"1100";
		return 0;
	}
	if(abs(s1[2]-s2[2])==1)	cout<<"1111";
	else	cout<<"1110";
	return 0;
}