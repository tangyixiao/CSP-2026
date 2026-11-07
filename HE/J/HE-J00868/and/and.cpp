#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	int a[200005],num = 0,sum = 0;
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	if(m == 1)
	{
		cout << '0';
		return 0;
	}
	for(int i = 1; i <= n; i++)
	{
		int s = i;
		for(int j = 1; j <= m; j++)
		{
			for(int k = j; k <= n; k++)
			{
				if((a[k] & s) > num)
				{
					num = (a[i] & a[j]);
				}
				s = (a[k] & s);
			}
		}
	}
	cout << num;
	return 0;
} 
