#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int flagJ[200005],flag[200005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	for (int i = 1;i <= n;i++)
	{
		memset(flagJ,0,sizeof(flagJ));//1 Áô  0 ×ß 
		int tmp = i;
		while (tmp <= n)
		{
			bool f = 1;
			for (int i = n;i > tmp;i--)
			{
				if (a[i] == a[tmp])
				{
					flagJ[a[tmp]] = 1;
					tmp = i + 1;
					f = 0;
					break;
				}
			}
			if (f)
			{
				flagJ[a[tmp]] = 1;
				tmp++;
			}
		}
		for (int i = 1;i <= m;i++)
		{
			if (flagJ[i] == 1)
			{
				flag[i]++;
			}
			
		}
	}
	for (int i = 1;i <= m;i++)
	{
		cout << flag[i] << ' ';
	}
	return 0;
}

