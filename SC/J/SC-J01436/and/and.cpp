#include<bits/stdc++.h>
using namespace std;
int n, m, a[200005], maxn = -1, cut = 2, maxn1 = -1, maxn2 = -1;
int flag[200005];
int dfs(int x)
{
	int ans;
	for(int i = 1;i<=n;i++)
	{
		if(flag[a[i]] == 0)
		{
			ans = x & a[i];
			maxn1 = max(ans, maxn1);
		}
	}
	cut++;
	if(cut<m) dfs(maxn1);
	else
	return maxn1;
}
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w" ,stdout);
	cin >> n >> m;
	for(int i = 1;i<=n;i++)
	{
		cin >> a[i];
		maxn2 = max(maxn2, a[i]);
	}
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=n;j++)
	{
		if(i == j) continue;
		int sum = a[i] & a[j];
		maxn = max(maxn, sum);
		if(maxn == sum)
		{
			for(int k = 0;k<=maxn2;k++)
			{
				if(flag[k] == 1)
				{
					flag[k] = 0;
				}
			}
			flag[a[i]] = flag[a[j]] = 1;
		}
	}
	}
	if(m == 1)
	{
		cout << maxn2;
		return 0;
	}
	if(m == 2)
	{
		cout << maxn;
		return 0;
	}
	cout << dfs(maxn);
	return 0;
 } 
