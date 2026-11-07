#include <bits/stdc++.h>
using namespace std;

int a[1005], cnt[10005];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n, m;
	cin >> n >> m;// n <= 5 m <= 2
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	int t = 1;
	for(int o = 1; o <= n; o++){
	for(int i = t; i <= n; i++)
	{
		for(int j = i + 1; j <= n; j++)
		{
			if(a[i] == a[j])
			{
				for(int k = i; k < j; k++)
				{
					a[k] = -1;
				}
			}
		}
	}
	for(int i = 1; i <= n; i++) 
	{
		for(int j = t; j <= m; j++)
		{
			if(a[i] == j) cnt[j]++;
		}
	}t++;
	}for(int j = 1; j <= m; j++)
	{
		cout << cnt[j] << " ";
	}
	return 0;
} 
