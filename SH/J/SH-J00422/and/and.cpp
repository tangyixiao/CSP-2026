#include <bits/stdc++.h>
using namespace std;
int n, m, a[200020], tmp, cnt, ans, s[200020], t[200020], tot;
vector <int> v[50];
int findv(int x, int y)
{
	int l = 0, r = v[x].size() - 1, mid = (l + r) / 2;
	while (l < r)
	{
		if (v[x][mid] == y) return 1;
		if (v[x][mid] < y) l = mid + 1;
		else r = mid - 1;
		mid = (l + r) / 2;
	}
	if (v[x][mid] != y) return 0;
	return 1;
}
int num()
{
	sort(s + 1, s + tot + 1);
	for (int i = 1; i <= tot; i++)
	{
		if (s[i] == 1e9) return i - 1;
	}
	return tot;
}
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cnt = 0;
		cin >> a[i];
		tmp = a[i];
		while (tmp)
		{
			if (tmp % 2) v[cnt].push_back(i);
			cnt++;
			tmp /= 2;
		}
		s[i] = i;
		t[i] = i;
	}
//	for (int i = 4; i >= 0; i--, cout << endl) for (int j = 0; j < v[i].size(); j++) cout << v[i][j] << " ";
	tot = n;
//	cout << findv(3, 2);
	for (int i = 40; i >= 0; i--)
	{
//		cout << "s:";
//		for (int k = 1; k <= tot; k++) cout << s[k] << " ";
//		cout << endl;
		if (v[i].size() < m) continue;
		for (int j = 1; j <= tot; j++)
		{
//			cout << i << " " << j << " " << findv(i, s[j]) << endl;
			if (findv(i, s[j]) == 0) s[j] = 1e9;
		}
		tot = num();
		if (tot < m)
		{
			for (int i = 1; i <= tot; i++) s[i] = t[i];
		}
		else
		{
			ans += (1 << i);
			for (int i = 1; i <= tot; i++) t[i] = s[i];
		}
	}
	cout << ans;
	return 0;
}
