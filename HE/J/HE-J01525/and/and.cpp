#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 2e5+5;
ll n,m,ans,a[N];

void dfs(int cur,int lastid,ll sum)
{
	if(sum < cur)	return ;
	if(n-lastid+cur-1 < m)	return ;
	
	if(cur == m)
	{
		ans = max(ans,sum);
		for(int i=1;i<=n;i++)
		{
			if(a[i] <= ans)
			{
				n = i-1;
				break;
			}
		}
		
		return ;
	}
	
	for(int i=lastid+1;i<=n;i++)
	{
		if(cur == 0 && a[i] >= ans)
			dfs(cur+1,i,a[i]);
			
		else if(cur != 0)
			dfs(cur+1,i,sum&a[i]);
	}
}

bool cmp(int a,int b)
{
	return a>b;
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int x;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	sort(a+1,a+n+1,cmp);
	
	if(m == n-1)
	{
		for(int i=1;i<=n;i++)
		{
			ll t = 0;
			for(int j=1;j<=n;j++)
			{
				if(j!=i)
				{
					if(t == 0)
						t = a[j];
					t &= a[j];
				}
				
				if(t!=0 && t < ans)
					break;
			}
			ans = max(ans,t);
		}
	}
	else
	{
		dfs(0,0,0);
	}
	
	cout<<ans;
	return 0;
}
