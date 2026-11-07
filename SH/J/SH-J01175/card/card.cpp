#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 5e5 + 5;
ll n, m, a[N], b[N], lst[N], now, ans[N], msk[N];
vector<ll> v;
void solve()
{
	for(int i = 1; i <= m; i++)
	{
		lst[i] = 0;
	}
	for(int i = 1; i <= n; i++)
	{
		b[i] = 0;
	}
	now = 0;
	for(int i = 0; i < v.size(); i++)
	{
		if(lst[v[i]] && lst[v[i]] <= now && b[lst[v[i]]] == v[i])
		{
			now = lst[v[i]];
		}
		else
		{
			lst[v[i]] = ++now;
			b[now] = v[i];
		}
	}
//	for(int i = 1; i <= now; i++)
//	{
//		cout << b[i] << " ";
//	}
//	cout << endl;
	for(int i = 1; i <= m; i++)
	{
//		cout << lst[i] << " ";
		if(lst[i] && lst[i] <= now && b[lst[i]] == i)
		{
			ans[i]++;
		}
	}
//	cout << endl;
}
void solve1()
{
	for(int i = 1; i <= n; i++)
	{
		v.clear();
		for(int j = i; j <= n; j++)
		{
			v.push_back(a[j]);
		}
		solve();
	}
	for(int i = 1; i <= m; i++)
	{
		cout << ans[i] << " ";
	}
}
void solve2()
{
	for(int i = 1; i <= n; i++)
	{
		if(a[i] == a[n])
		{
			ans[a[i]]++;
		}
		else
		{
			ans[1]++, ans[2]++;
		}
	}
	cout << ans[1] << " " << ans[2];
}
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	if(n <= 5000)
	{
		solve1();
		return 0;
	}
	if(m == 2)
	{
		solve2();
		return 0;
	}
	for(int i = n; i >= 1; i--)
	{
		if(!lst[a[i]])
		{
			msk[i] = msk[i + 1] | (1 << a[i]);
			lst[a[i]] = i;
		}
		else
		{
			msk[i] = msk[lst[a[i]] + 1] | (1 << a[i]);
		}
//		cout << msk[i] / 2 << " ";
	}
//	cout << endl;
	for(int i = 1; i <= m; i++)
	{
		ll cnt = 0;
		for(int j = 1; j <= n; j++)
		{
			if(msk[j] & (1 << i))
			{
				cnt++;
			}
		}
		cout << cnt << " ";
	}
	return 0;
}
