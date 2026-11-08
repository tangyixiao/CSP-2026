#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,b[100005],a[100005][100005];
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> b[i];
	}
	for (int i = 0;i < n;i++)
	{
		int ans = 0;
		for (int j = 1;j <= n-i;j++)
		{
			a[i][j] = b[j];
			for (int k = 1;k <= j;k++)
			{
				if (a[i][j] == a[i][k])
				{
					for (int l = 1;l <= j;l++)
					{
						a[i][l] == 0;
					}
				}
			}
			if (a[i][j] == i)
			{
				ans++;
			}
		}
		cout << ans;
	}
	return 0;
 } 
