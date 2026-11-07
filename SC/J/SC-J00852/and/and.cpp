#include <bits/stdc++.h>
using namespace std;

long long n,m,a[200005],maxn = -1e9,x; 

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
		cin >> a[i];
	
	if(m == 2)
	{	
		for(int i = 1;i <= n;i++)
			for(int j = i + 1;j <= n;j++)
				maxn = max(maxn,a[i] & a[j]);
		cout << maxn;
		return 0;	
	} 
	
	if(m == 1)
	{	
		for(int i = 1;i <= n;i++)
			maxn = max(maxn,a[i]);
		cout << maxn;
		return 0;	
	} 
	
	if(m == n)
	{
		maxn = a[1];
		for(int i = 2;i <= n;i++)
			maxn = maxn & a[i];
		cout << maxn;
		return 0;	
	}
	
	if(m == n - 1)
	{
		x = a[2];
		for(int i = 3;i <= n;i++)
			x = x & a[i];
		maxn = max(maxn,x);
		for(int i = 2;i <= n;i++)
		{
			x = a[1];
			for(int j = 1;j <= n;j++)
			{
				if(j == i)
					continue;
				x = x & a[j];
			}
			maxn = max(maxn,x);
		}	
		cout << maxn;
		return 0;	
	}
	return 0;
}