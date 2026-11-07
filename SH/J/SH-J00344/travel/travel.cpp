#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int cnt1,cnt2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<=1;i++)
	{
		if(c1[i]!=c2[i])
		{
			cout<<"0000";
			return 0;
		}
	}
	cout<<"1";
	for(int i=0;i<=1;i++)
	{
		if(s1[i]!=s2[i])
		{
			cout<<"000";
			return 0;
		}
	}
	cout<<"1";
	if(s1[2]=='A' or s1[2]=='B' or s1[2]=='C')cnt1=1;
	if(s2[2]=='A' or s2[2]=='B' or s2[2]=='C')cnt2=1;
	if(cnt1!=cnt2)
	{
		cout<<"00";
		return 0;
	}
	cout<<"1";
	if(abs(int(s1[2])-int(s2[2]))==1)cout<<"1";
	else cout<<"0";
	return 0;
}
