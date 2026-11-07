#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[100005],b[100005];
	cin >> n>>m;
	for (int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	for (int k=1;k<=m;k++)
	{
		for (int i=1;i<=n;i++)
		{
			for (int j=i;j<=n;j++)
			{
				if (a[j]==k)
				{
					b[k]++;
				}
			}
		}
	}

	for (int i=1;i<=m;i++)
	{
		cout <<b[i]<<" ";
	}
	return 0;
}