#include <bits/stdc++.h>
using namespace std;
int a[500005];
int ans[500005];
int sum[500005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	int n1 = 1;
	int cnt = 0;
	int sumn = 0;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
		sumn ++;
		for (int j = 1;j < i;j++)
		{
			if (a[i] == a[j])
			{
				sumn--;
				break;
			}
		}
	}
	while (n1 != n)
	{
		for (int i = 1;i <= cnt;i++)
		{
			ans[i] = 0;
		}
		cnt = 0;
		for (int i = n1;i <= n;i++)
		{
			bool f = false;
			for (int j = 1;j <= cnt;j++)
			{
				if (ans[j] == a[i])
				{
					for (int k = j;k <= cnt;k++)
					{
						ans[k] = 0;
					}
					cnt = j;
					ans[cnt] = a[i];
					f = true;
					break;
				}
			}
			if (f)
			{
				break;
			}
			ans[++cnt] = a[i];
		}
		for (int i = 1;i <= cnt;i++)
		{
			sum[ans[i]]++;
		}
		n1++;
	}
	for (int i = 1;i <= sumn;i++)
	{
		cout << sum[i] << endl;
	}
	return 0;
}