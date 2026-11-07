#include <bits/stdc++.h>
using namespace std;
int n, m, a[500005], ans = 0;
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 2; i < n; i++)
	{
		ans = 0
		for (int j = 1; j <= m; j += i)
		{
			ans += a[j]; 
		}
		cout << ans << " "; 
	}
	fclose(stdin);
	fclose(stdout);
	return 0;	
} 
