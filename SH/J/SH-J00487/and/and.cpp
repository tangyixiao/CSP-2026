#include <bits/stdc++.h>
using namespace std;

int n,m,ans;
int a[200005];

void dfs(int step,int num,int sum)
{
	if (step == m)
	{
		ans = max(ans,sum);
		return;
	}
	if (num <= n)
	{
		dfs(step + 1,num + 1,sum & a[num]);
		dfs(step,num + 1,sum);
	}
	return;
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	sort(a + 1,a + n + 1);
	if (m == 1)
	{
		cout << a[n];
		return 0;
	}
	if (m == n)
	{
		int sum = a[1];
		for (int i = 2;i <= n;i++) 
		{
			sum = sum & a[i]; 
		}
		cout << sum;
		return 0;
	}
	if (m == 2)
	{
		int maxn = 0;
		for (int i = 1;i <= n;i++)
		{
			for (int j = i + 1;j <= n;j++)
			{
				maxn = max(maxn,a[i] & a[j]);
			}
		}
		cout << maxn;
		return 0;
	}
	dfs(0,1,1073741823);
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
