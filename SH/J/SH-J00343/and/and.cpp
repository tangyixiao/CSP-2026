#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[200100];
int b[200100][30];
int c[30];
int ans;
void calculate(int x,int y)
{
	int cnt = 0;
	while(x > 0)
	{
		b[y][cnt] = x % 2;
		x /= 2;
		cnt++;
	}
}
int pow(int z)
{
	if(z == 0)
	{
		return 1;
	}
	else
	{
		return 2 * pow(z - 1);
	}
}
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
		calculate(a[i], i);
	}
	for(int i = 29;i >= 0;i--)
	{
		int sum = 0;
		for(int j = 1;j <= n;j++)
		{
			if(b[j][i] == 1)
			{
				sum++;
			}
		}
		if(sum >= m)
		{
			c[i] = 1;
			for(int j = 1;j <= n;j++)
			{
				if(b[j][i] == 0)
				{
					for(int k = 0;k < i;k++)
					{
						b[j][k] = 0;
					}
				}
			}
		}
		else
		{
			c[i] = 0;
		}
	}
	for(int i = 0;i <= 29;i++)
	{
		if(c[i] == 1)
		{
			ans += pow(i);
		}
	}
	cout << ans;
}
