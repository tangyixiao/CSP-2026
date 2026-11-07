#include <iostream>
using namespace std;
bool vis[500005];
int s[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	int a[500005];
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	for (int x = 1;x <= n;x++)
	{
		for (int i = x;i <= n;i++)
		{
			for (int j = x;j < i;j++)
			{
				if (a[j] == a[i] && vis[j] == 0)
				{
					for (int k = j;k < i;k++)
					{
						vis[k] = 1;
					}
					break;
				}
			}
		}
		for (int i = x;i <= n;i++)
		{
			if (vis[i] == 0)
			{
				s[a[i]]++;
			}
			vis[i] = 0;
		}
	}
	for (int i = 1;i <= m;i++)
	{
		cout << s[i] << " ";
	}
	return 0;
}