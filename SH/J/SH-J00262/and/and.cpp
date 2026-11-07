#include <bits/stdc++.h>
using namespace std;

int n, m, ans = 0;

bool flag[32];

struct Str
{
	int num;
	bool alive = true;
	bool two[32] = {false};
}a[200005];

void chaifen(int x, int y)
{
	int i = 0;
	while (x > 0)
	{
		if (x % 2 == 1) {
			a[y].two[i] = true;
		}
		x /= 2;
		i++;
	}
	return;
}

int cifang(int b)
{
	if (b == 0) return 1;
	int mul = 1;
	for (int i = 1; i <= b; i++)
	{
		mul *= 2;
	 } 
	 return mul;
 } 

void dfs(int maxn)
{
	if (maxn < 0) return;
	int cnt[32] = {0};
	for (int i = 1; i <= n; i++)
	{
		if (a[i].alive) {
			for (int j = 0; j <= maxn; j++) 
			{
				if (a[i].two[j]) cnt[j]++;
			}
		}
	}
	//cout << cnt[4] << " " << cnt[3] << " " << cnt[2] << " " << cnt[1] << " " << cnt[0] << " ";
	for (int i = maxn; i >= 0; i--)
	{
		if(cnt[i] >= m)
		{ 
			cout << i << endl;
			ans += cifang(i);
			dfs(i-1);
			for (int j = 1; j <= n; j++) {
				if (a[j].two[i] == false) a[j].alive = false;
			}
			return;
		}
	}
	return;
}

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1;i <= n; i++)
	{
		cin >> a[i].num;
		chaifen(a[i].num, i);
	}
	dfs(31);
	cout << ans;
	return 0;
}
