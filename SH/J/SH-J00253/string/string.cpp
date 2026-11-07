#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 5;
int n,a[N];
char c[N];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	int len = 0;
	for (int i = 1; i <= n; i++) cin >> a[i] >> c[i],len += a[i];
	int j = n,cur = 0,pre = a[n],ans = 0,hc = 0;
	for (int i = 1; i <= n; i++)
	{
		if (cur >= len / 2) break;
		if (cur + a[i] > len / 2) a[i] = len / 2 - cur;
		while (hc < cur + a[i])
		{
			int pc = min(pre,cur + a[i] - hc);
			ans += (c[j] == c[i]? 0ll:pc);
			pre -= pc; hc += pc;
			if (pre == 0) j--,pre = a[j];
		}
		cur += a[i];
	}
	cout << ans;
	return 0;
}