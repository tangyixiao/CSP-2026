#include <bits/stdc++.h>
using namespace std;
int g[500001], a[500001], s[500001], top = 0;
map <int, int> f;
int cnt[500001];
bool caseA = true;
int main ()
{
	freopen("card.in" ,"r", stdin);
	freopen("card.out" ,"w", stdout);
	int N, m;
	cin >> N >> m;
	for (int i = 1; i <= N; i++)
	{
		cin >> g[i];
		s[++top] = g[i];
		f[a[i]]++;
	}
	for (int i = 2; i <= N; i++)
		if (g[i] < g[i - 1]) caseA = false;
	if (caseA)
	{
		for (int i = 1; i <= N; i++) cnt[g[i]]++;
		for (int i = 2; i <= m; i++) cnt[i] += cnt[i - 1];
		for (int i = 1; i <= m; i++) cout << cnt[i] << " ";
		return 0;
	}
	for (int k = 1; k <= N; k++)
	{
		for (int i = 1; i <= N; i++) s[i] = top = 0;
		int n = N - k + 1;
		for (int i = 1; i <= n; i++) a[i] = g[i - n + N];
		f.clear();
		for (int i = 1; i <= n; i++)
		{
			if (f[a[i]] == 0)
			{
				s[++top] = a[i];
				f[a[i]]++;
			}
			else
			{
				int pos;
				for (int j = 1; j <= top; j++)
				{
					if (s[j] == a[i])
					{
						pos = j;
						break;
					}
				}
				top = pos;
				for (int j = pos + 1; j <= n; j++) f[s[j]]--, s[j] = 0;
			}
		}
		for (int j = 1; j <= m; j++)
			if (f[j] > 0) cnt[j]++;
	}
	for (int i = 1; i <= m; i++) cout << cnt[i] << " ";
	return 0;
}
