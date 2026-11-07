#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	int a[100000],b[100000],c[100000];
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		c[i] = a[i];
	}
	for(int i = 1; i <= n; i++)
	{
		if(i > 1)
		{
			for(int j = i; j <= n; j++)
			{
				c[j] = a[j];
			}
		}
		for(int j = i; j <= n; j++)
		{
			for(int k = j + 1; k <= n; k++)
			{
				if(c[j] == c[k])
				{
					for(int z = j; z < k; z++)
					{
						c[z] = 0;
					}
				}
			}
		}
		
		for(int k = i; k <= n; k++)
		{
			b[c[k]]++;
		}
	}
	for(int i = 1; i <= m; i++)
	{
		cout << b[i] <<" ";
	}
	return 0;
} 
