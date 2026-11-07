#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct pp{
	int num,yi;
};
int n,W;
pp w[200005];
int ans;
int yin(int x)
{
	int sum = 0;
	while (x != 0)
	{
		sum += x%2;
		x /= 2;
	}
	return sum;
}
bool cmp(pp x,pp y)
{
	if (x.yi != y.yi) return x.yi > y.yi;
	else return x.num > y.num;
}
bool yes[30];
int zuida = -1e9;
void dfs(int sum,int x)
{
	if (sum == W)
	{
		int ad = 2147483647;
		for (int i = 1;i <= x;i++)
		{
			if (yes[i] == 1)
			{
				ad &= w[i].num;
			}
		}
		zuida = max(zuida,ad);
		return;
	}
	if (x == n) return;
	yes[x] = 1;
	dfs(sum + 1,x + 1);
	yes[x] = 0;
	dfs(sum,x + 1);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> W;
	for (int i = 1;i <= n;i++)
	{
		cin >> w[i].num;
		w[i].yi = yin(w[i].num);
	}
	if (W == 1)
	{
		int maxn = -1;
		for (int i = 1;i <= n;i++)
		{
			maxn = max(maxn,w[i].num);
		}
		cout << maxn;
		return 0;
	}
	if (W == 2)
	{
		int maxn = -1;
		for (int i = 1;i <= n;i++)
		{
			for (int j = 1;j <= n;j++)
			{
				if (i == j) continue;
				maxn = max(maxn,w[i].num & w[j].num);
			}
		}
		cout << maxn;
		return 0;
	}
	if (W == n-1)
	{
		int bo = -1;
		for (int i = 1;i <= n;i++)
		{
			int maxn = 2147483647;
			for (int j = 1;j <= n;j++)
			{
				if (i == j) continue;
				maxn &= w[i].num;
			}
			bo = max(maxn,bo);
		}
		cout << bo;
		return 0;
	}
	sort(w+1,w+n+1,cmp);
	ans = w[1].num;
	for (int i = 1;i <= W;i++)
	{
		ans &= w[i].num;
	}
	cout << ans;
	return 0;
}
/*
4 2 3 15 12 12
5 3 31 3 1 15 7
*/
