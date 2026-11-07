#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010];
int ans=-1e9;
void dfs(int step,int cnt,int sum)
{
	if(step>n+1)return;
	if(cnt==m)
	{
		ans=max(ans,sum);
		return;
	}
	dfs(step+1,cnt+1,cnt==0?sum+a[step]:sum&a[step]);
	dfs(step+1,cnt,sum);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
		if(i==1)sum+=a[i];
		else sum&=a[i];
	}
	if(n<=20)
	{
		dfs(1,0,0);
		cout << ans;
	}
	else
	{
		if(m==1)
		{
			sort(a+1,a+n+1);
			cout << a[n];
		}
		else
		{
			if(m==n)cout << sum;
			else
			{
				for(int i=1;i<=n;i++)
				{
					for(int j=1;j<=n;j++)
					{
						if(i==j)continue;
						ans=max(ans,a[i]&a[j]);
					}
				}
				cout << ans;
			}
		}
	}
	return 0;
}
