#include <bits/stdc++.h>
using namespace std;

unsigned long long n,m,a[500005],c[300003] = { };
bool v[500005];
unsigned long long table[500005];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(unsigned int i = 1;i <= n;i++) cin >> a[i];
	for(unsigned int j = 1;j <= n;j++)
	{
		for(unsigned int i = 1;i <= n;i++)table[i] = 0;
		for(unsigned int i = 1;i <= m;i++)v[i] = 0;
	    int l = 0;
		for(unsigned int i = j;i <= n;i++)
		{
			if(v[a[i]] == 0)
			{
				v[a[i]] = 1;
				++l;
				table[l] = a[i];
			}
			else
			{
				bool flag = 0;
				unsigned int k = l + 1;
				for(;k >= 1;k--)
				{
					if(table[k] == a[k])
					{
						l = k;
						break;
					}
				}
				k++;
				for(;k <= n + 1;k++)
				{
					v[table[k]] = 0;
					table[k] = 0;
				}
			}
		}
		unsigned int i = 1;
		while(table[i] != 0) ++c[table[i++]];
	}
	for(unsigned int i = 1;i <= m;i++)cout << c[i] << " ";
	return 0;
}
