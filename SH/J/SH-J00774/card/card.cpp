#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m;
int x[500005];
ll ans[300005];
int lst[300005];
bool v[500005];
int rgt[300005];
void work_a()
{
	for(int i = 1; i <= n; i++)
		rgt[x[i]] = i;
	for(int i = 1; i <= m; i++)
	{
		cout << rgt[i];
		if(i != m) cout << " ";
	}
} 
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	bool special_a = 1;
	for(int i = 1; i <= n; i++)
	{
		cin >> x[i];
		if(x[i - 1] > x[i])
			special_a = 0;
	}
	if(special_a)
	{
		work_a();
		return 0; 
	}
	for(int p = 1; p <= n; p++)
	{
		memset(lst, 0, sizeof(lst));
		memset(v, 0, sizeof(v));
		for(int i = p; i <= n; i++)
		{
			if(lst[x[i]] && !v[lst[x[i]]])
			{
				for(int t = lst[x[i]]; t < i; t++)
					v[t] = 1;
			}
			lst[x[i]] = i;
		}
		for(int i = p; i <= n; i++) 
			if(!v[i])
				ans[x[i]]++;
	}
	for(int i = 1; i <= m; i++)
	{
		cout << ans[i];
		if(i != m) cout << " ";
	}
	return 0;
}
