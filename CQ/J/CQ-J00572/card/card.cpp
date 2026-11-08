#include <bits/stdc++.h>
using namespace std;
int a[1000000],b[1000000],sum[1000000],s[1000000],z[1000000];
int n,m;
int da(int o)
{
	for (int i=o;i<=n;i++)
	{
		if (b[s[i]] == 1)
		{
			for (int j=a[s[i]];j<=n;j++)
			{
				a[z[j]] = 0;
				b[z[j]] = 0;
				z[j] = 0;
			}
		}
		z[i] = s[i];
		a[s[i]] = i;
		b[s[i]] = 1;
	}

	for (int i=1;i<=n;i++)
	{
		if (z[i] != 0)
		{
			sum[z[i]]++;
		}
	}
	for (int i=1;i<=n;i++)
    {
    	z[i] = 0;
    	a[i] = 0;
		b[i] = 0;
	}
	if (o == n)
	{
		return 0;
	}
	else
	{
		da(o+1);
	}	
}
int main()
{
	ios::sync_with_stdio(0);
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin >> n >> m;
    for (int i=1;i<=n;i++)
    {
    	cin >>s[i];
	}
	da(1);
	for (int i=1;i<=m;i++)
	{
		cout << sum[i] << " ";
	}
	return 0;
}

