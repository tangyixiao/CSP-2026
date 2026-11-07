#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e5 + 10;
int n, m, a[N], len = 1;
int ans[N];
int num[N];
bool f[N];
void qk(int id)
{
	for(int i = 1; i <= id; i ++)
	{
		num[i] = num[i + id];
		num[i + id] = 0;
		f[num[i]] = false;
	}
	len -= id;
	return;
}
int find(int x)
{
	for(int i = 1; i <= len; i ++)
	{
		if(num[i] == x)
		{
			return i;
		}
	}
}
void count_answer()
{
	for(int i = 1; i <= len; i ++)
	{
		ans[num[i]] ++;
	}
	return;
}
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
    freopen("card.in", "r", stdin);
    freopen("card.out", "w",stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i];
	}
	for(int i = 1; i <= n; i ++)
	{
		for(int j = 1; j <= n; j ++)
		{
			if(j == i) continue;
			if(f[a[i]])
			{
				qk(find(a[i]));
			}
			f[a[i]] = true;
			num[++ len] = a[i];
			
		}
		count_answer();
	}
	for(int i = 1; i <= m; i ++)
	{
		cout << ans[i] << ' ';
	}
	return 0;
}