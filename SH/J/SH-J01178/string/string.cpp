#include <bits/stdc++.h>
using namespace std;
int n;
long long a[200005], sum[200005], num;
string s = " ";
char c1, c2;
char c[200005];
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i] >> c[i];
		sum[i] += a[i] + sum[i-1];
	}
	int mid;
	if (sum[n] % 2 == 1)
		mid = (sum[n] - 1) / 2;
	else
		mid = sum[n] / 2;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= a[i]; j++)
		{
			s += c[i];
		}
	}
	for (int i = 1; i <= mid; i++)
	{
		if (s[i] != s[sum[n] - i + 1])
			num++;
	}
	cout << num;
	return 0;
}
