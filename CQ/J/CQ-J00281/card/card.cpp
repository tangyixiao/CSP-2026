#include <bits/stdc++.h>
using namespace std;
int a[500005];
int dp[500005];
int idx[500005];
int cha[500005];
bool isleaf[500005];
int nl[500005];
int nxt[500005];
int ans[500005];
int cw[500005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
		dp[i] = 1;
	}
	int noleaf = 0;
	for(int i=n;i>=1;i--)
	{
		if(idx[a[i]] == 0)
		{
			isleaf[i] = true;
			idx[a[i]] = i;
			nl[i] = noleaf;
		}
		else
		{
			nxt[i] = idx[a[i]];
			idx[a[i]] = i;
			noleaf = i;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(isleaf[i])
		{
			dp[nl[i]] += dp[i];
			if(nl[i] == 0)
			{
				cha[i] += dp[i];
			}
			else
			{
				cha[i] += dp[i];
				cha[nl[i]] -= dp[i];
			}
		}
		else
		{
			dp[nxt[i]] += dp[i];
		}
	}
	for(int i=1;i<=n;i++)
	{
		ans[i] = ans[i-1] + cha[i];
		cw[a[i]] += ans[i];
	}
	for(int i=1;i<=m;i++)
	{
		cout << cw[i] << " "; 
	}
	return 0;
}
