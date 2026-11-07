#include <bits/stdc++.h>
using namespace std;

const long long N = 2e5 + 5;
long long n, a[N];
char c[N];

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	long long maxa = 0;
	for(long long i = 1; i <= n; i++)
	{
		cin >> a[i] >> c[i];
		maxa = max(maxa, a[i]);
	}
	if(maxa * n > 1e8)
	{
		cout << 0 << endl;
		return 0;
	}
	string s;
	for(long long i = 1; i <= n; i++)
	{
		for(long long j = 1; j <= a[i]; j++)
		{
			s += c[i];
		}
	}
	long long l = 0, r = s.size() - 1;
	long long cnt = 0;
	while(l <= r)
	{
		if(s[l] != s[r])
		{
			cnt++;
		}
		l++;
		r--;
	}
	cout << cnt << endl; 
	return 0;
}
