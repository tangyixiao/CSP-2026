#include <bits/stdc++.h>
using namespace std;
int a[500005];
int ta[500005];
int s[300005];
int an[300005];
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++) s[j] = -1;
		for(int j = 1; j <= n; j++) ta[j] = 0;
		int tn = 1;
		for(int j = i; j <= n; j++)
		{
			if(s[a[j]] == -1)
			{
				s[a[j]] = tn;
				ta[tn++] = a[j];
			}
			else
			{
				for(int e = s[a[j]] + 1; e < tn; e++)
				{
					s[ta[e]] = -1;
				}
				tn = s[a[j]] + 1;
				for(int e = 1; e < tn; e++)
				{
					s[ta[e]] = e;
				}
			}
		}
		for(int j = 1; j < tn; j++) an[ta[j]]++;
	}
	for(int j = 1; j <= m; j++) cout << an[j] << " ";
	return 0;
}
