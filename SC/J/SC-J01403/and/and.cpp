#include <bits/stdc++.h>

using namespace std;

int cnt;
int n,m,a[200005],sum = 0,s = 0,maxn;

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= m;j++)
		{
			if(m <= 3)
			{
				int k = a[i],d = a[j];
				sum = k & d;
				if(sum > maxn)
				{
					maxn = sum;
				}
			}
			else
			{
				for(int k = 1;k <= m;k++)
				{
					sum = a[i] & a[j] & a[k];
					if(maxn < sum)
					{
						maxn = sum;
					}
				}
			}
		}
	}
	cout << maxn;
	return 0;
}