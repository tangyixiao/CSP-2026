#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	queue<int> a;
	int n, m;
	cin >> n >> m;
	int vis[m], bro[114514];
	for (int i = 1;i <= n;i++)
	{
		int b;
		cin >> b;
		a.push(b);
		if (vis[b] == 1)
		{
			while(a.head() != b)
			{
				vis[a] = 0;
				a.pop(); 
			}
		}
		vis[b] = 1;
		for (int j = 1;j <= n;j++)
		{
			bro[a[i]]++;
		}
	}
	for (int i = 1;i <= n;i++)
	{
		cout << bro[i] << " "; 
	}
	return 0;
}
