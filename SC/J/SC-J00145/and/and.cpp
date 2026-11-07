#include <bits/stdc++.h>
using namespace std;

int flag[200005];
int n, m;
long long a[200005];
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	long long ans = 0;
	for (int i = 30; i >= 0; i--)
	{
		int s = 0;
		for (int j = 1; j <= n; j++)
			if (flag[j] == 0 && ((a[j] >> i) & 1) == 1)
				s++;
		if(s < m)
			continue;
		for (int j = 1; j <= n; j++)
			if (((a[j] >> i) & 1) == 0)
				flag[j] = 1;
		ans += (1 << i);
	}
	cout<< ans  << '\n';
	
	return 0;
}