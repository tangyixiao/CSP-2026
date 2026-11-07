#include <bits/stdc++.h>
using namespace std;

long long a[200010];

struct Number
{
	long long z, o;
	int id;
}b[200010];

bool cmp(Number x, Number y)
{
	if (x.z != y.z) return x.z >= y.z;
	else return x.o > y.o;
}

long long fun(long long x)
{
	long long y = 1ll;
	while (y <= x)
	{
		y *= 2;
	}
	return (y / 2);
}

long long funfun(long long x, long long y)
{
	int ans = 0;
	while (y >= 1 && x > 0)
	{
		if (x / y >= 1)
		{
			ans++;
			x = x % y;
		}
		y /= 2;
	}
	return ans;
}

int main()
{
	freopen(and.in, "r", stdin);
	freopen(and.out, "w", stdout);
	int n, m, ans;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		long long num = fun(a[i]);
		b[i].z = funfun(a[i], num);
		b[i].o = a[i];
		b[i].id = i;
		//cout << " " << b[i].z << " " << b[i].o << endl;
	}
	sort(b + 1, b + n + 1, cmp);
	ans = b[1].o;
	//cout << ans << " " << b[1].o << endl;
	for (int i = 2; i <= m; i++)
	{
		ans &= b[i].o;
		//cout << ans << " " << b[i].o << endl;
	}
	cout << ans << endl;
	return 0;
}
