#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N = 2e5 + 10; 
int n, a[N], al[N], ar[N], nl, nr;
char c[N], cl[N], cr[N];

signed main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	int sum = 0, tsum = 0;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i] >> c[i];
		sum += a[i];
	}
	tsum = sum;
	sum = (sum >> 1);
	for (int i = 1; i <= n; ++i)
	{
		++nl;
		if (sum - a[i] >= 0)
		{
			al[nl] = a[i];
			cl[nl] = c[i];
			sum -= a[i];
		}
		else
		{
			al[nl] = sum;
			cl[nl] = c[i];
			a[i] -= sum;
			if (tsum & 1) --a[i];
			for (int j = i; j <= n; ++j)
			{
				if (!a[j]) continue;
				++nr;
				ar[nr] = a[j];
				cr[nr] = c[j];
			}
			break;
		}
		if (!sum)
		{
			if (tsum & 1) --a[i + 1];
			for (int j = i + 1; j <= n; ++j)
			{
				if (!a[j]) continue;
				++nr;
				ar[nr] = a[j];
				cr[nr] = c[j];
			}
			break;
		}
	}
	int ans = 0, lpos = nl, rpos = 1;
	while (lpos >= 1 && rpos <= nr)
	{
		if (al[lpos] == ar[rpos])
		{
			if (cl[lpos] != cr[rpos]) ans += al[lpos];
			--lpos;
			++rpos;
		}
		else if (al[lpos] < ar[rpos])
		{
			if (cl[lpos] != cr[rpos]) ans += al[lpos];
			ar[rpos] -= al[lpos];
			--lpos;
		}
		else
		{
			if (cl[lpos] != cr[rpos]) ans += ar[rpos];
			al[lpos] -= ar[rpos];
			++rpos;
		}
	}
	cout << ans << '\n';
	return 0;
}
//EZ
