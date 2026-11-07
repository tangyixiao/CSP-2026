#include<bits/stdc++.h>
using namespace std;
int n, m, a[500010];
int pd(int b[], int mb)
{
	for(int i = 1; i <= n; i++)
	{
		if(b[i] == mb) return i;
		if(b[i] == 0) return 0;
	}
	return 0;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	int c[500010] = {};
	for(int i = 1; i <= n; i++)
	{
		int b[500010] = {}, tmp = 1;
		for(int j = i; j <= n; j++)
		{
			int mb = a[j];
			int tmp2 = pd(b, mb);
			int flag = 0;
			if(tmp2 != 0)
			{
				for(int k = 1; k <= n; k++)
				{
					if(flag)
					{
						tmp--;
						b[j] = 0;
					}
					if(k == tmp2) flag = 1;
					if(b[j] == 0) break;
				}
			}
			else b[tmp] = a[j];
		}
		for(int j = 1; j <= n; j++)
		{
			if(b[j] != 0) c[j]++;
			else break;
		}
	}
	for(int i = 1; i <= m; i++)
	{
		cout << c[i];
	}
	return 0;
}
