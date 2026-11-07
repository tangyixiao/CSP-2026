#include <bits/stdc++.h>

using namespace std;

#define int long long

int n;
int a[200010];
char c[200010], cx[200010];
int b[200010];
int cnt, sum[200010];
int mx, ans;

signed main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for(int i = 1; i <= n; i ++)
	{
		cnt ++;
		cin >> a[cnt] >> c[cnt];
		mx += a[cnt];
		if(c[cnt] == c[cnt - 1])
		{
			a[cnt - 1] += a[cnt];
			cnt --;
		}
	}
	int f = 0, t = 0;
	for(int i = 1; i <= cnt; i ++)
	{
		sum[i] = sum[i - 1] + a[i];
		if(sum[i] == mx / 2) t = 1;
	}
	if(!t)
	for(int i = 1; i <= cnt; i ++)
	{
		if(sum[i] > (mx / 2) && !f)
		{
			b[i] = mx / 2 - sum[i - 1];
			f = 1;
			b[i + 1] = sum[i] - mx / 2;
			cx[i] = c[i];
			cx[i + 1] = c[i];
		}
		else if(!f)
		{
			b[i] = a[i];
			cx[i] = c[i];
		}
		else if(f)
		{
			b[i + 1] = a[i];
			cx[i + 1] = c[i];
		}
	}
	else
	{
		for(int i = 1; i <= cnt; i ++)
		{
			b[i] = a[i];
			cx[i] = c[i];
		}
	}
	if(!t) cnt ++;
	for(int i = 1; i <= cnt; i ++)
	{
		sum[i] = sum[i - 1] + b[i];
	}
	int l = 1;
	int r = cnt;
	int nowi = 1;
	int nowj = mx;
	while(nowi < nowj - 1)
	{
		int sa = sum[l] - nowi + 1;
		int sb = nowj - sum[r - 1];
		if(cx[l] != cx[r])
		{
			ans += min(sa, sb);
		}
		if(sa > sb)
		{
			r --;
			nowj = sum[r];
			nowi += sb;
		}
		else
		{
			l ++;
			nowj -= sa;
			nowi = sum[l - 1] + 1;
		}
	}
	cout << ans;
	return 0;
}
