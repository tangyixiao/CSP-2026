#include<bits/stdc++.h>
using namespace std;

int a[500010];
int b[500010];
int cnt[500010];
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++)
	{
		int f = 0;
		for(int j = i; j <= n; j++)
		{
			b[++f] = a[j];
			for(int k = f-1; k >= 1; k--) 
			{
				if(b[k] == a[j]) 
				{
					f = k;
					break;
				}
			}
		}
		set<int> s;
		for(int j = 1; j <= f; j++)
		{
			s.insert(b[j]);
			//cout << b[j] << " ";
		}
		//cout << "\n";
		for(int v : s) cnt[v]++;
	}
	for(int i = 1; i <= m; i++)
	{
		cout << cnt[i] << " ";
	}
	return 0;
} 
