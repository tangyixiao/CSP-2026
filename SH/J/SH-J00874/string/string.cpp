#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;

int a[200010] , p[200010] , q[200010] , szp , szq;
char c[200010] , cp[200010] , cq[200010];

int main()
{
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	long long sum = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i] >> c[i];
		sum += a[i];
	}
	long long lim = sum / 2;
	for (int i = 1; i <= n; i++)
	{
		p[++szp] = min(lim , (long long)a[i]);
		cp[szp] = c[i];
		lim -= min(lim , (long long)a[i]);
		if (!lim) break;
	}
	lim = sum / 2;
	for (int i = n; i >= 1; i--)
	{
		q[++szq] = min(lim , (long long)a[i]);
		cq[szq] = c[i];
		lim -= min(lim , (long long)a[i]);
		if (!lim) break;
	}
	/*
	for (int i = 1; i <= szp; i++)
	{
		printf("[%d %c]" , p[i] , cp[i]);
	}
	puts("");
	for (int i = 1; i <= szq; i++)
	{
		printf("[%d %c]" , q[i] , cq[i]);
	}
	puts("");
	*/
	long long ans = 0;
	for (long long l = 1 , r = 0 , sl = 0 , sr = 0; l <= szp; l++)
	{
		if (cp[l] != cq[r]) ans += min((long long)p[l] , sr - sl);
		sl += p[l];
		//printf("[%lld,%lld]l++,ans->%lld\n" , sl , sr , ans);
		while (sr < sl)
		{
			r++;
			if (cp[l] != cq[r]) ans += min((long long)q[r] , sl - sr);
			//printf("[%lld,%lld]r++,ans->%lld\n" , sl , sr , ans);
			sr += q[r];
		}
	}
	cout << ans << '\n';
	return 0;
}
