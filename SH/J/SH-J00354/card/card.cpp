#include<bits/stdc++.h>
using namespace std;
int n,m,a[50005],card[1000],m1[30005];
int main()
{
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int x = 1;x <= n;x++)
	{
		for (int i = x;i <= n;i++)
		{
			cin >> a[i];
			for (int j = x;j <= i;j++)
			{
				if (a[j] == a[i])
				{
					for (int z = j;z < i;z++)
					{
						a[z] = 0;
					}
				}
			}
		}
		for (int i = x;i <= n;i++)
		{
			if(a[i] != 0)
			{
				card[i] *= 10;
				card[i] += a[i];
			}
		}
		while(card[x])
		{
			if (card[x] % 10 == x)
			{
				m1[x]++;
			}
			card[x] /= 10;
		}
	}
	for (int i = 1;i <= m;i++)
	{
		cout << m1[i];
	}
	return 0;
}
