#include<bits/stdc++.h>
using namespace std;
const int MAXN = 2e5 + 5;
#define int long long
int n, a[MAXN], ans, b[MAXN], k, cha;
char c[MAXN], d[MAXN];
string s;
signed main ()
{
	freopen ("string.in", "r", stdin);
	freopen ("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i ++)
	{
		cin >> a[i] >> c[i];
		if (c[i] == c[i - 1]) 
		{
			k --;
			b[k] = a[i] + b[k];
			k ++;
		} else {
			b[k] = a[i];
			d[k] = c[i];
			k ++;
		}
	}
	for (int i = 0, j = k - 1; i < j;)
	{
		cha = b[i] - b[j];
		if (d[i] != d[j])
		{
			ans += min (b[i], b[j]);
		}
		if (cha > 0)
		{
			j --;
			b[i] = cha;
		} else {
			if (cha < 0)
			{
				i ++;
				b[j] = abs(cha);
			} else {
				i ++, j --;
			}
		}
		
	}
	cout << ans;
	return 0;
}