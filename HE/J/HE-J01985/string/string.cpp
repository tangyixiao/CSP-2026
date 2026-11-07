#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	char s[200000];
	long long len = 0;
	long long n;
	scanf("%lld", &n);
	for (long long i = 1; i <= n; i++)
	{
		long long a = 0;
		char c = '0';
		scanf("%lld %c", &a, &c);
		for (long long j = 1; j <= a; j++)
		{
			s[++len] = c;
		}
		while (getchar() != '\n');
	}
	long long res = 0;
	for (long long i = 1; i <= len / 2; i++)
	{
		if (s[i] != s[len - i + 1])
			res++;
	}
	printf("%lld", res);
	return 0;
} 
