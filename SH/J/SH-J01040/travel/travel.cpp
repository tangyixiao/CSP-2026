#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<1;
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	int cnt1=(s1[0]-'0')*10+s1[1]-'0';
	int cnt2=(s2[0]-'0')*10+s2[1]-'0';
	if(cnt1==cnt2)
		cout<<1;
	else
	{
		cout<<"000";
		return 0;
	}
	char ss1=s1[2];
	char ss2=s2[2];
	int ans1=0,ans2=0;
	if(ss1>='A' && ss1<='C')
		ans1=1; 
	if(ss2>='A' && ss2<='C')
		ans2=1;
	if(ans1==ans2)
		cout<<1;
	else
	{
		cout<<"00";
		return 0;
	}
//	cout<<ss1<<' '<<ss2<<'\n';
	if(abs(ss1-ss2)==1)
		cout<<1;
	else
		cout<<0;
	return 0;
}
