#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[500005];
int t[500005];
int j[300005];
int ans[300005];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
		if (j[a[i]] != 0)
		{
			t[j[a[i]]] = i;
		}
		j[a[i]] = i;
	}
	for (int i = 1;i <= n;i++) 
	{
		for (int pos = i;pos <= n;pos++)
		{
			while (t[pos] != 0)
			{
				pos = t[pos];
			}
			ans[a[pos]]++;
		}
	}
	for (int i = 1;i <= m - 1;i++)
	{
		cout << ans[i] << " ";
	}
	cout << ans[m];
	fclose(stdin);
	fclose(stdout);
	return 0;
}
