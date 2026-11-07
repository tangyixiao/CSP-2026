#include<bits/stdc++.h>
using namespace std;

int t[300005];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int n,m;
	cin >> n >> m;
	int a[n + 5];
	for(int i = 1;i <= n; ++ i) cin >> a[i];
	
	int b[n + 5];
	for(int i = 1;i <= n; ++ i)
	{
		
		for(int j = i;j <= n; ++ j) b[j] = 0;
		
		int s = i;
		for(int j = i;j <= n; ++ j)
		{
			b[j] = a[j];
			for(int k = i;k < j; ++ k)
			{
				if(b[k] == a[j] && b[k] != 0)
				{
					for(int w = k;w < j; ++ w)
					{
						b[w] = 0;
						s = j;
					}
					break;
				}
			}
		}
		
		for(int j = i;j <= n; ++ j)
		{
//			cout << b[j] << ' ';
			t[b[j]] ++;
		}
//		cout << '\n';
	}
	for(int i = 1;i <= m; ++ i)
	{
		cout << t[i] << ' ';
	}
	
	return 0;
}
