#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	string s = "";
	long long n;
	scanf("%lld", &n);
	while (n --)
	{
		long long N;
		char c;
		scanf("%lld", &N);
		cin >> c;
		while (N --)
		{
			s += c;
		}
	}
	long long len = s.length() - 1;
	long long ans = 0;
	for (long long i = 0; i <= len >> 1; ++ i)
	{
		if (s[i] != s[len - i])
		{
			++ ans;
		}
	}
	printf("%lld", ans);

	return 0;
}
