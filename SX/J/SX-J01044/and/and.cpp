#include <bits/stdc++.h>
using namespace std;
#define int long long//注意数据范围
#define fr(i,a,b) for(int i=a;i<=b;i++)
int a[200005],s[200005];
bool vis[200005];
int n,m;
int ans=-1;
void dfs(int k,int cnt)
{
	if(k==m)
	{
		ans=max(ans,cnt);
		return;
	}
	fr(i,1,n)
	{
		if(!vis[i])
		{
			vis[i]=1;
			dfs(k+1,cnt&a[i]);
		}
	}
}

signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(n>20&&n<=2000)
	{
		if(m==1)
		{
			int maxx=INT_MIN;
			fr(i,1,n)
				maxx=max(maxx,a[i]);
			cout <<maxx;
			return 0;
		}
		if(m==n)
		{
			int w=a[1];
			fr(i,2,n)
				w&=a[i];
			cout <<w;
			return 0;
		}
		else
		{
			int e=INT_MIN;
			fr(i,1,n)
			{
				fr(j,1,n)
				{
					if(j==i) continue;
					e=max(e,a[i]&a[j]);
				}
			}
			cout <<e;
			return 0;
		}
	}

	fr(i,1,n)
		cin>>a[i];
	fr(i,1,n)
	{
		memset(vis,0,sizeof(vis));
		vis[i]=1;
		dfs(1,a[i]);
	}
	cout <<ans;
	return 0;
}
//rp++