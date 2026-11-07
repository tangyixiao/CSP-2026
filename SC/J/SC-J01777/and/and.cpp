#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[200005],cnt[35];
void add(int x)
{
	string s="";
	int idx=0;
	while(x)
	{
		s+=char('0'+x%2);
		x/=2;
		idx++;
	}
	for(int i=0;i<s.size();i++) cnt[i]+=(s[i]=='1');
}
void del(int x) 
{
	string s="";
	int idx=0;
	while(x)
	{
		s+=char('0'+x%2);
		x/=2;
	}
	for(int i=0;i<s.size();i++) cnt[i]-=(s[i]=='1');
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		add(a[i]);
	}
	int ans=0;
	for(int i=30;i>=0;i--)
	{
		if(cnt[i]>=m)
		{
			ans|=(1<<i);
			for(int j=1;j<=n;j++)
			{
				if(a[j]!=-1&&(a[j]&(1<<i))==0)
				{
					del(a[j]);
					a[j]=-1;
				}
			}
		}
	}
	cout<<ans;
	return 0;	
}
/*
exp:100pts
writer:1419936
*/