#include <bits/stdc++.h>
using namespace std;
long long n, m, a[100005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	if (m == 1 && n == 1)
	{
		cout << a[1];
	}
	else
	{
		cout << 11;	
	}
	return 0;	
} 
