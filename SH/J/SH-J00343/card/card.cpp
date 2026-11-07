#include <bits/stdc++.h>
using namespace std;
int n,m,a[500020],cnt[500020],b[500020];
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++)
	{
		for(int j = i;i <= n;i++)
		{
			b[i] = a[i];
		}
		for(int j = i;j <= n;j++)
		{
			for(int k = i;k < j;k++)
			{
				if(a[j] == a[k])
				{
					for(int m = k;m < j;m++)
					{
						b[m] = 0;
					}
				}
			}
		}
		for(int j = i;j <= n;j++)
		{
			cnt[b[j]]++;
		}
	}
	for(int i = 1;i <= m;i++)
	{
		cout << cnt[i];
	}
}
