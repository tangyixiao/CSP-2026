#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll l1[200005], r1[200005], l2[200005], r2[200005], vec[400005], len[400005];
int cur, a[200005], a1[200005], a2[200005];
char c[200005], c1[200005], c2[200005], s1[200005], s2[200005];
bool st[200005], en[200005];

int lisan(ll x)
{
	int l = 1, r = cur;
	while (l < r)
	{
		int mid = (l + r) >> 1;
		if (vec[mid] < x)
			l = mid + 1;
		else
			r = mid;
	}
	return l;
}

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	scanf("%d", &n);
	ll sum = 0;
	for (int i = 1; i <= n; i++)
		scanf("%d%s", &a[i], &c[i]), sum += a[i];
	ll sss = 0;
	for (int i = 1; i <= n; i++)
	{
		a1[i] = a[i], c1[i] = c[i];
	}
	sss = 0;
	for (int i = n; i >= 1; i--)
	{
		a2[n - i + 1] = a[i], c2[n - i + 1] = c[i];
	}
	sss = 0;
	for (int i = 1; i <= n; i++)
	{
		sss++;
		l1[i] = sss;
		sss += a1[i] - 1;
		r1[i] = sss;
		vec[++cur] = l1[i];
		vec[++cur] = r1[i];
	}
	sss = 0;
	for (int i = 1; i <= n; i++)
	{
		sss++;
		l2[i] = sss;
		sss += a2[i] - 1;
		r2[i] = sss;
		vec[++cur] = l2[i];
		vec[++cur] = r2[i];
	}
	sort(vec + 1, vec + cur + 1);
	cur = unique(vec + 1, vec + cur + 1) - vec - 1;
	for (int i = 2; i <= cur; i++)
		len[i] = vec[i] - vec[i - 1] + 1;
	for (int i = 1; i <= n; i++)
	{
		l1[i] = lisan(l1[i]), r1[i] = lisan(r1[i]), st[l1[i]] = 1, en[r1[i]] = 1;
		for (int j = l1[i]; j <= r1[i]; j++)
			s1[j] = c1[i];
	}
	for (int i = 1; i <= n; i++)
	{
		l2[i] = lisan(l2[i]), r2[i] = lisan(r2[i]), st[l2[i]] = 1, en[r2[i]] = 1;
		for (int j = l2[i]; j <= r2[i]; j++)
			s2[j] = c2[i];
	}
	ll ans = 0;
	for (int i = 1; i <= cur; i++)
	{
		if (en[i] && !st[i])
		{
			if (s1[i] != s2[i])
			{
				ans += len[i];
			}
		}
		if (en[i] && st[i])
		{
			if (s1[i] != s2[i])
				ans++;
		}
	}
	cout << ans / 2ll;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/