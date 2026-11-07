#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 9;
int arr[N];

bool cmp(int x, int y)
{
	return x > y;
}

bool vis[N];
int maxn = 0;
int n, m;

void dfs(int x, int t)
{
	if(t == 0)
	{
		maxn = max(maxn, x);
		return ;
	}
	
	for(int i = 2; i <= n; i ++)
	{
		if(vis[i] != 1)
		{
			vis[i] = 1;
			// cout << x << ' ' << arr[i] << ' ' << (arr[i] & x)  << ' ' << t << '\n';
			dfs(x & arr[i], t - 1);
			
			vis[i] = 0;
		}
	}
}

signed main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	scanf("%d %d", &n, &m);
	
	for(int i = 1; i <= n; i ++) scanf("%d", &arr[i]);
	
	if(n <= 20)
	{
		dfs(arr[1], m - 1);
		printf("%d", maxn);
	}else if(n == m)
	{
		int ans = arr[1];
		for(int i = 2; i <= n; i ++) ans &= arr[i];
		
		printf("%d", ans);
	}else if(m == 1)
	{
		int maxn = arr[1];
		for(int i = 2; i <= n; i ++) maxn = max(maxn, arr[i]);
		
		printf("%d", maxn);
	}else if(m == 2)
	{
		int ans = 0;
		for(int i = 1; i <= n; i ++)
		{
			for(int j = 1; j <= n; j ++)
			{
				if(i == j) continue;
				ans = max(ans, arr[i] & arr[j]);
			}
		}
		
		printf("%d", ans);
	}else if(n <= N)
	{
		sort(arr + 1, arr + 1 + n, cmp);
		
		printf("%d", arr[m]);
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
