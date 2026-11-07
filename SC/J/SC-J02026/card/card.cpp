#include <bits/stdc++.h>
using namespace std;

int n, m, a[500005];

bool check()
{
	for (int i = 2; i <= n; i++) if(a[i] < a[i - 1]) return false;
	return true;
}

void work()
{
	int cnt[100005];
	for (int i = 1; i <= m; i++) cnt[i] = 0;
	for (int i = 1; i <= n; i++) cnt[a[i]] = max(cnt[a[i]], i);
	for (int i = 1; i <= m; i++)  cout << cnt[i] << " ";
}

int tab[3005], lst[3005], cnt[3005];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	if(check())
	{
		work();
		return 0;
	}
	for (int i = 1; i <= n; i++) 
	{
		int ed = 0;
		for (int j = 1; j <= m; j++) lst[j] = -1;
		for (int j = i; j <= n; j++)
		{
			if(lst[a[j]] <= ed && lst[a[j]] != -1) ed = lst[a[j]];
			else
			{
				tab[++ed] = a[j];
				lst[a[j]] = ed;
			}
		}
		for (int i = 1; i <= ed; i++) cnt[tab[i]]++;
	}
	for (int i = 1; i <= m; i++) cout << cnt[i] << " ";
	return 0;
}