#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 10;
int n, m;
ll a[N];
ll ans;
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i ++) cin >> a[i];
	sort(a + 1, a + n + 1, greater<ll>());
	int l = 1, r = n;
	bool flag = false;
	for(int j = 30; j >= 0; j --)
	{
		int cnt = 0;
		int first = 0;
		for(int i = l; i <= r; i ++)
		{
			if(((a[i] >> j) & 1) == 1)
			{
				cnt ++;
				if(first == 0) first = i;
			}
		}
		if(cnt > 0) flag = true;
		if(flag == false) continue;
		if(cnt >= m)
		{
			ans |= (1 << j);
			l = first;
			r = first + cnt - 1;
		}
	}
	cout << ans << "\n";
	return 0;
}
