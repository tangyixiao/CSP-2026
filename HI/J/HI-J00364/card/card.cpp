#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int m,n;
	cin >> m >> n;
	int a[2*m];
	int ans[100*m][100*m];
	for(int i = 1;i <= m;i++)
	{
		cin >> a[i];
	}
	int ju = 1;
	for(int i = 1;i <= m;i++)
	{
		for(int j = ju;j <= m;j++)
		{
			ans[i][j] = a[j];
			for(int k = j;k >= 1;k--)
			{
				if(ans[i][k] == ans[i][j])
				{
					for(int l = k;l < j;l++)
					{
						ans[i][l] = 0;
					}
				}
			}
		}
		ju++;
	}
	int p;
	for(int k = 1;k <= n;k++)
	{
		p = 0;
		for(int i = 1;i <= m;i++)
		{
			for(int j = 1;j <= m;j++)
			{
				if(ans[i][j] == k)
				{
					p++;
				}
			}
		}
		cout << p << " ";
	}
	return 0;
}
