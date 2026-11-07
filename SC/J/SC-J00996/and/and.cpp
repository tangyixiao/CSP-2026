#include<bits/stdc++.h>
typedef long long ll;
const ll N = 1e6 + 10;
using namespace std;
ll a[N];
void solve()
{
	ll n, m;
	cin >> n >> m;
	if (m == 1)
	{
		ll max = -N;
		ll c;
		for (ll i = 0; i < n; i++)
		{
			cin >> c;
			if (c > max)
				max = c;
		}
		cout << max;
	}
	else if (m == 2)
	{
		for (ll i = 0;i < n; i++)
		{
			cin >> a[i];
		}
		auto max = -10;
		for (ll i = 0; i < n; i++)
		{
			for (ll j = i + 1; j < n; j++)
			{
				ll c = a[i] & a[j];
				if (c > max)
					max = c;
			}
		}
		cout << max;
	}
	else if (m == 3)
	{
		for (ll i = 0;i < n; i++)
		{
			cin >> a[i];
		}
		auto max = -10;
		for (ll i = 0; i < n; i++)
		{
			for (ll j = i + 1; j < n; j++)
			{
				for (ll s = j + 1; s < n; s++)
				{
					auto c = a[i] & a[j] & a[s];
					if (c > max)
						max = c;
				}
			}
		}
		cout << max;
	}
	else if (m == 4)
	{
		for (ll i = 0;i < n; i++)
		{
			cin >> a[i];
		}
		auto max = -10;
		for (ll i = 0; i < n; i++)
		{
			for (ll j = i + 1; j < n; j++)
			{
				for (ll s = j + 1; s < n; s++)
				{
					for (ll k = s+1; k < n; k++)
					{
						ll c = a[i] & a[j] & a[s] & a[k];
						if (c > max)
						max = c;
					}
				}
			}
		}
	}
		else if (m == 5)
		{
		for (ll i = 0;i < n; i++)
		{
			cin >> a[i];
		}
		auto max = -10;
		for (ll i = 0; i < n; i++)
		{
			for (ll j = i + 1; j < n; j++)
			{
				for (ll s = j + 1; s < n; s++)
				{
					for (ll k = s+1; k < n; k++)
					{
						for (ll d = k + 1; d < n; d++)
						{
							ll c = a[i] & a[j] & a[s] & a[k] & a[d];
							if (c > max)
								max = c;
						}
					}
				}
			}
		}
		cout << max;
	}
	else if (m == 6)
		{
		for (ll i = 0;i < n; i++)
		{
			cin >> a[i];
		}
		auto max = -10;
		for (ll i = 0; i < n; i++)
		{
			for (ll j = i + 1; j < n; j++)
			{
				for (ll s = j + 1; s < n; s++)
				{
					for (ll k = s+1; k < n; k++)
					{
						for (ll d = k + 1; d < n; d++)
						{
							for (ll e = d + 1; e < n; e++)
							{
								ll c = a[i] & a[j] & a[s] & a[k] & a[d] & a[e];
								if (c > max)
									max = c;
							}
						}
					}
				}
			}
		}
		cout << max;
	}
		else if (m == 7)
		{
		for (ll i = 0;i < n; i++)
		{
			cin >> a[i];
		}
		auto max = -10;
		for (ll i = 0; i < n; i++)
		{
			for (ll j = i + 1; j < n; j++)
			{
				for (ll s = j + 1; s < n; s++)
				{
					for (ll k = s+1; k < n; k++)
					{
						for (ll d = k + 1; d < n; d++)
						{
							for (ll e = d + 1; e < n; e++)
							{
								for (ll u = e + 1; u < n; u++)
								{
									ll c = a[i] & a[j] & a[s] & a[k] & a[d] & a[e] & a[u];
									if (c > max)
										max = c;
								} 
							}
						}
					}
				}
			}
		}
		cout << max;
	}
	else if (m == 8)
		{
		for (ll i = 0;i < n; i++)
		{
			cin >> a[i];
		}
		auto max = -10;
		for (ll i = 0; i < n; i++)
		{
			for (ll j = i + 1; j < n; j++)
			{
				for (ll s = j + 1; s < n; s++)
				{
					for (ll k = s+1; k < n; k++)
					{
						for (ll d = k + 1; d < n; d++)
						{
							for (ll e = d + 1; e < n; e++)
							{
								for (ll u = e + 1; u < n; u++)
								{
									for (ll v = u + 1; v < n; v++)
									{
										ll c = a[i] & a[j] & a[s] & a[k] & a[d] & a[e] & a[u] & a[v];
										if (c > max)
											max = c;
									}
								} 
							}
						}
					}
				}
			}
		}
		cout << max;
	}
}
using namespace std;
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	solve();
	fclose(stdin);fclose(stdout);
	return 0;
}