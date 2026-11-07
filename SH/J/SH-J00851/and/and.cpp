#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
#define ll long long
struct node
{
	int num;
	int xuhao;
}a[200010];
int n, m;
int dp[200010];
int vis[200010];
int check(int x, int y)
{
	vector<int> a, b;
	ll cnt1 = 0, cnt2 = 0;
	while (x > 0)
	{
		a.push_back(x % 2);
		x /= 2;
		cnt1++;
	}
	while (y > 0)
	{
		b.push_back(y % 2);
		y /= 2;
		cnt2++;
	}
	ll cnt = min(cnt1, cnt2);
	int re = 0;
	for (int i = 0;i < cnt;i++)
	{
		if (a[i] == b[i])
		{
			re += pow(2, i);
			//cout << re << endl;
		}
	}
	//cout << re;
	return re;
}
bool cmp(node a, node b)
{
	if (a.num == b.num)
	{
		return a.xuhao < b.xuhao;
	}
	return a.num > b.num;
}

int main()

{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i].num;
		a[i].xuhao = i;
	}
	if (m == 1)
	{
		cout << a[1].num;
		return 0;
	}
	sort(a + 1, a + 1 + n, cmp);
	dp[1] = a[1].num;
	//前i个数的最大与值 
	/*int te = 0;
	for (int i = 2;i <= m;i++)
	{
		for (int j = 1;j <= i;j++)
		{
			//cout << 1;
			if (vis[a[j].xuhao]) continue;
			if (dp[i] < check(dp[i - 1], a[j].num))
			{
				dp[i] = check(dp[i - 1], a[j].num);
				te = a[j].xuhao;
				//cout << check(dp[i - 1], a[j].num)  << " " << a[j].num<< endl;
			}
		}
		vis[te] = 1;
	}*/
	for (int i = 2;i <= m;i++)
	{
		dp[i] = check(dp[i - 1], a[i].num);
	}
	cout << dp[m];
	//cout << vis[4];
}

