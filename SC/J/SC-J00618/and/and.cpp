#include<bits/stdc++.h>
using namespace std;
const long long N=2e5+10;
long long n,m,ans;
bool vis[40],pd[N];
multiset<long long>st[40];
map<long long,long long>mp,pm;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(long long i=1,x,y;i<=n;i++)
	{
		cin>>x;
		mp[x]=i;
		pm[i]=x;
		y=x;
		long long cnt=0;
		while(y)
		{
			if(y%2)st[cnt].insert(x);
			y/=2;
			cnt++;
		}
	}
	bool flag=1;
	for(long long i=30;i>=0;i--)
	{
		if(flag)
		{
			if(st[i].size()>=m)
			{
				vis[i]=1;
				for(auto j:st[i])pd[mp[j]]=1;
				flag=0;
			}
		}
		else
		{
			long long sum=0;
			for(auto j:st[i])if(pd[mp[j]])sum++;
			if(sum>=m)
			{
				vis[i]=1;
				for(int j=1;j<=n;j++)if(pd[j]&&st[i].count(pm[j])==0)pd[j]=0;
			}
		}
	}
//	for(int i=1;i<=n;i++)
//	{
//		if(pd[i])cout<<pm[i]<<' ';
//	}
	long long cnt=1;
	for(long long i=0;i<=30;i++)
	{
		if(vis[i])ans+=cnt;
		cnt*=2;
	}
	cout<<ans;
	return 0;
}
/*
      
*/