#include <iostream>
using namespace std;
string s[200005];
bool flag[200005];
bool ans[35];
void to2(int x, int i)
{
	while (x > 0)
	{
		s[i] = char('0' + x % 2) + s[i];
		x /= 2;
	}
	int k = s[i].size();
	for (int j = 1; j <= 32 - k; j++)
	{
		s[i] = '0' + s[i];
	}
}
void to10()
{
	long long Ans = 0, x = 1;
	for(int i = 31; i >= 0; i--)
	{
		if (ans[i])
		{
			Ans += x;
		}
		x *= 2;
	}
	cout << Ans;
} 
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n, m, sum = 0;
	cin>> n>>m;
	for(int i= 0; i <= 31; i++)
	{
		ans[i] =1;
	}
	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		to2(x, i);
	}
	for (int i = 0; i <= 31; i++)
	{
		int cnt = 0;
		for (int j = 1; j <= n; j++)
		{
			if (s[j][i] == '1')
			{
				if (flag[j] == 0)
				{
					cnt++;
				}
			}
		}
		if (cnt < m)
		{
			continue;
		}
		else
		{
			for (int j = 1; j <= n; j++)
			{
				if (s[j][i] == '0')
				{
					if (flag[j] == 0)
					{
						sum++;
					}
					flag[j]=1;
				}
			}
			if (n - sum == m)
			{
				for (int j = 1; j <= n; j++)
				{
					if (flag[j] == 0)
					{
						for (int k = 0; k <= 31; k++)
						{
							ans[k] &= (s[j][k] - '0');
						}
					}
				}
				to10();
				return 0;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (flag[i] == 0)
		{
			for (int k = 0; k <= 31; k++)
			{
				ans[k] &= (s[i][k] - '0');
			}
		}
	}
	to10();
	return 0;
}