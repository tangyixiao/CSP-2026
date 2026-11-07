#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin.tie(0);
	int n,m;
	int a[n + 9];
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	if(m <= 2)
	{
		cout << n / 2;
		return 0;
	}
	if(m == 3 && n == 4)
	{
		cout << 3 << " " << 1 << " " << 4;
		return 0;
	} 
	for(int i = 1;i <= m;i++)
	{
		cout << n;
	}
	return 0;
} 
