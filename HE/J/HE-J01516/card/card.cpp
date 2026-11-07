#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int a[n + 10], d[n + 10] = {};
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++)
	{
		bool c[n + 10] = {};
		int t[n + 10] = {};
		for(int j = i;j <= n;j++)
		{
			t[a[j]]++;
			if(c[a[j]])
			{
				for(int k = j - 1;k >= i;k--)
				{
					t[a[k]]--;
					if(a[k] == a[j])
					{
						break;
					}
				}
			}
			c[a[j]] = 1;
		}
		for(int j = 1;j <= m;j++)
		{
			if(t[j])
			{
				d[j]++;
			}
		}
	}
	for(int i = 1;i <= m;i++)
	{
		cout << d[i] << ' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
 } 
