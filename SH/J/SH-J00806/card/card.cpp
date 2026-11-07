#include <bits/stdc++.h>
using namespace std;	
int n,m;
int a[200005],b[200005],c[200005];
bool d[200005],e[200005];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++)
	{
		memset(c,0,sizeof(c));
		memset(d,0,sizeof(d));
		memset(e,0,sizeof(e));
		for(int j = i;j <= n;j++)
		{
			if(c[a[j]] == 0)
			{
				c[a[j]] == j;
			}
			else
			{
				for(int k = c[a[j]];k <= j;k++)
				{
					d[k] = true;
				}
				c[a[j]] == j;
			}
		}
		for(int j = i;j <= n;j++)
		{
			if(!d[j])
			{
				e[a[j]] = true;
			}
		}
		for(int j = 1;j <= m;j++)
		{
			b[j] += int(e[j]);
		}
	}
	for(int j = 1;j <= m;j++)
	{
		cout << b[j] << endl;
	}
	return 0;	
} 
