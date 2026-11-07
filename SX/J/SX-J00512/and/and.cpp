#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5+10;

int n,m;
int a[N];
bool st[N];
int ans=-1;

void dfs(int cnt,int num,int start)
{
	if(cnt==m+1)
	{
		ans=max(ans,num);
		return;
	}
	for(int i=start;i<=n;i++)
	{
		if(st[i]) continue;
		st[i]=1;
		if(cnt==1)dfs(cnt+1,a[i],i);
		else dfs(cnt+1,num&a[i],i);
		st[i]=0;
	}
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	dfs(1,0,1);
	cout<<ans;
	/*
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
	{
		int tmp=a[i];
		int w=0;
		while(a[i])
		{
			if(a[i]&1)
			{
				cnt[w]++;
				fi[w].insert(tmp);
			}
			w++;
			a[i]>>=1;
		}
	}
	for(int i=0;i<=30;i++)
	{
		if(cnt[i]>=m)st[i]=true;
	}
	int start=0;
	for(int i=30;i>=0;i--)
	{
		if(st[i])
		{
			start=i;
			for(auto j:fi[i])
			{
				now.insert(j);
			}
			break;
		}
	}
	for(int i=start-1;i>=0;i--)
	{
		if(!st[i]) continue;
		int cntt=0;
		for(auto j:now)
		{
			
			int l=0,r=N;
			int wei=0;
			while(l<=r)
			{
				int mid=l+r>>1;
				if(fi[mid]<=j)
				{
					l=mid+1;
					wei=mid;
				}
				else
				{
					r=mid-1;
				}
			}
			if(fi[mid]==j)rp.push_back(j);
			
			if(!fi[i].find(j))
			{
				
			}
		}
		*/
	
	return 0;
}
