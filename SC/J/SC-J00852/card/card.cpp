#include <bits/stdc++.h>
using namespace std;

int m,n,a[500005],answwww[300005],k[500005];

int main()
{
	freopen("card.in","r",stdin);
	
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
		cin >> a[i];
		
	int x = n,j = 1;
	while(x--)
	{
		memset(k,0,sizeof(k));
		int cnt = 0;
		for(int i = j;i <= n;i++)
		{
			bool f = false;
			for(int h = 1;h <= cnt;h++)
			{
				if(k[h] == a[i])
				{
					f = true;
					cnt = h;
					break;
				}
			}
			if(!f)
			{
				cnt++;
				k[cnt] = a[i];
			}
		}
		for(int l = 1;l <= cnt;l++)
		{
			answwww[k[l]] = answwww[k[l]] + 1;
		}	
		j++;
	}
	
	for(int i = 1;i <= m;i++)
		cout << answwww[m] << " ";
	return 0;
} 