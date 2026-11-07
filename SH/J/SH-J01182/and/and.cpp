#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N=2e5+5;
const int inf=2e9+5;

int n,m;

int ans=-inf;
int num[N];
bool vis[N];

int sqrt(int t)
{
	int sum=1;
	while(t!=0)
	{
		sum*=2;
		t--;
	}
	return sum;
}

int ad(int x,int y)
{
	int tm=0;
	int sum=0;
	while(x>0||y>0)
	{
		if(x%2==1&y%2==1)
		{
			sum+=sqrt(tm);
		}
		x/=2;
		y/=2;
		tm++;
	}
	return sum;
}

void dfs(int x,int sum)
{
	if(sum>m)
	{
		return;
	}
	if(x==n+1)
	{
		if(sum!=m)
		{
			return;
		}
		int pa;
		bool tp=1;
		for(int i=1;i<=n;i++)
		{
			if(vis[i])
			{
//				cout<<num[i]<<' ';
				if(tp)
				{
					pa=num[i];
					tp=0;	
				}	
				else
				{
					pa=ad(pa,num[i]);		
				}
			}
		}
//		cout<<'\n';
//		cout<<pa<<'\n';
		ans=max(ans,pa);
		return ;
	}
	vis[x]=0;
	dfs(x+1,sum);
	vis[x]=1;
	dfs(x+1,sum+1);
	
}

signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;	
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
	}
	dfs(1,0);
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*
4 2
3 15 12 12


*/
