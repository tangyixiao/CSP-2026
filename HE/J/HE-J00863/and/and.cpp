#include <bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin >> n >> m;
	if(m = 1)
	{
		int maxn = -1;
		for(int i = 1;i <= n;i++)
		{
			int y;
			cin >> y;
			if(y > maxn)
			{
				maxn = y;
			}
		}
		cout << maxn;
		return 0;
	}
	if(m = 2)
	{
		int maxn = -1;
		int a[100005] = {0};
		for(int i = 1;i <= n;i++)
		{
			cin >> a[i];
		}
		for(int i = 1;i < n;i++)
		{
			for(int j = i+1;j <= n;j++)
			{
				maxn = max((a[i]&a[j]),maxn);
			}
		}
		cout << maxn;
		return 0;
	}
} 
