#include <bits/stdc++.h>
using namespace std;

const long long N = 5e5 + 5, M = 3e5 + 5;
long long n, m, a[N], check[M], last[M], cnt[N];

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	bool flag = true;
	for(long long i = 1; i <= n; i++)
	{
		cin >> a[i];
		if(a[i] < a[i - 1])
		{
			flag = false;
		}
	}
	if(flag == true)
	{
		for(long long i = 1; i <= n; i++)
		{
			if(a[i] != a[i + 1])
			{
				cnt[a[i]] += i;
			}
			else
			{
				while(a[i] == a[i + 1])
				{
					i++;
				}
				cnt[a[i]] += i;
			}
		}
		for(long long i = 1; i <= m; i++)
		{
			cout << cnt[i] << ' ';
		}
		cout << endl;
		return 0;
	}
	for(long long i = 1; i <= n; i++)
	{
		memset(check, 0, sizeof check);
		memset(last, 0, sizeof last);
		for(long long j = i; j <= n; j++)
		{
			if(!check[a[j]])
			{
				check[a[j]]++;
				last[a[j]] = j;
			}
			else
			{
				for(long long k = last[a[j]]; k < j; k++)
				{
					check[a[k]] = 0;
				}
				check[a[j]]++;
				last[a[j]] = j;
			}
		}
		for(long long j = 1; j <= m; j++)
		{
			if(check[j])
			{
				cnt[j]++;
			}
		}
	}
	for(long long i = 1; i <= m; i++)
	{
		cout << cnt[i] << ' ';
	}
	cout << endl;
	return 0;
}
