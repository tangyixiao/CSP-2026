#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 5;
int n,m,a[N],cnt[35];
bool ls[N];
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		int x = a[i];
		while (x)
		{
			int num = (x & -x),t = log2(num);
			cnt[t]++; x -= num;
		}
	}
	int ans = 0;
	for (int i = 30; i >= 0; i--)
		if (cnt[i] >= m)
		{
			ans += (1 << i);
			for (int j = 1; j <= n; j++)
				if (!(a[j] & (1 << i)) && !ls[j])
				{
					ls[j] = 1;
					while (a[j])
					{
						int num = (a[j] & -a[j]),t = log2(num);
						cnt[t]--; a[j] -= num;
					}
				}
		}
	cout << ans;
	return 0;
}