#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
struct ai
{
	int num, cnt;
};
ai a[200010];
bool cmp(ai x, ai y)
{
	return x.cnt > y.cnt;
}
signed main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i ++)
	{
		int t;cin >> t;
		a[i].num = t;
		while (t)
		{
			a[i].cnt += t % 2;
			t /= 2;
		}
	}
	sort(a+1, a+n+1, cmp);
	//cout << a[1].num;
	int ans = a[1].num;
	for (int i = 2; i <= m; i ++)
	{
		//cout << a[i].num << " " << ans << "\n";
		ans = ans & a[i].num;
	}
	cout << ans;
	return 0;
}
