#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 10;
int n,a[N];
ll sum[N],ans;
char c[N];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin >> n;
	for(int i = 1;i <= n;++ i) cin >> a[i] >> c[i],sum[i] = sum[i - 1] + a[i];
	ll x = (sum[n] + 1) / 2;
	int s = lower_bound(sum + 1,sum + n + 1,x) - sum;
	for(int i = 1;i < s;++ i)
	{
		int s1 = lower_bound(sum + 1,sum + n + 1,sum[n] - (sum[i - 1] + 1) + 1) - sum;
		int s2 = lower_bound(sum + 1,sum + n + 1,sum[n] - sum[i] + 1) - sum;
		if(s1 == s2)
		{
			if(c[i] == c[s1]) continue;
			else ans += a[i];
		}else
		{
			for(int j = s2 + 1;j < s1;++ j) if(c[i] != c[j]) ans += a[j];
			if(c[i] != c[s1])
			{
				ans += sum[n] - (sum[i - 1] + 1) + 1 - (sum[s1 - 1] + 1) + 1;
			}
			if(c[i] != c[s2])
			{
				ans += sum[s2] - (sum[n] - sum[i] + 1) + 1;
			}
		}
	}
	if(sum[n] & 1)
	{
		if(x - 1 - sum[s - 1] > sum[s] - x) ans += x - 1 - sum[s - 1] - sum[s] + x;
	}else
	{
		if(x - sum[s - 1] > sum[s] - x) ans += x - sum[s - 1] - sum[s] + x;
	}
	cout << ans << "\n";
	return 0;
}
