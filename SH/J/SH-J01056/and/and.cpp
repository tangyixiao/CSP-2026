#include <bits/stdc++.h>
using namespace std;
int  n, m, a[200005], ph[2000005], ans = 0;
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
 	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];  	
	} 
	for (int i = 1;i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			for (int j = 1; j <= n; j++)
			{
				ph[i] >>= a[j];	
			}	
		}
		ans = max(ans, ph[i]);
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
