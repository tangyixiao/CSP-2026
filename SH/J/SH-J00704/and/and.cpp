#include<bits/stdc++.h>
using namespace std;
int n,m,ans,a[200010],b[200010],v[200010];
void dfs(int step)
{
	if(step > m)
	{
		int cnt = 2147483647;
		for(int i = 1;i <= m;i++)
		{
			cnt &= b[i];
		}
		ans = max(ans,cnt);
		return ;
	}
	for(int i = 1;i <= n;i++)
	{
		if(v[i]) continue;
		b[step] = a[i];
		v[i] = 1;
		dfs(step + 1);
		v[i] = 0;
	} 
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> a[i];
	if(n <= 20)
	{
		ans = -1e9;
		dfs(1);
		cout << ans;
		return 0;
	}
	if(m == 1) 
	{
		int mn = -1e9;
		for(int i = 1;i <= n;i++) mn = max(mn,a[i]);
		cout << mn;
		return 0;
	}
	if(m == 2)
	{
		ans = -1e9;
		for(int i = 1;i <= n;i++)
		{
			for(int j = i + 1;j <= n;j++)
			{
				ans = max(ans,(a[i] & a[j]));
			}
		}
		cout << ans;
		return 0;
	}
	if(m == n)
	{
		ans = 2147483647;
		for(int i = 1;i <= n;i++) ans &= a[i];
		cout << ans;
		return 0;
	}
	return 0;
}
