#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int n, a, pos, sum;
char c, C[N];
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> c;
		for (int j = pos; j < pos + a; j++)
		{
			C[j] = c;
		}
		pos += a;
	}
	if (pos % 2 == 1)
	{
		for (int i = 0; i < (pos - 1) / 2; i++)
		{
			if (C[i] != C[pos - i - 1]) sum++;
		}
	}
	else
	{
		for (int i = 0; i < pos / 2; i++)
		{
			if (C[i] != C[pos - i - 1]) sum++;
		}
	}
	cout << sum;
	return 0;
} 
