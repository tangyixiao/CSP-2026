#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int a[500010], sum[300010], last[300010];

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		last[a[i]] = i;
		sum[a[i]]++;
	}
	for(int k = 2; k <= n; k++)
	{
		if(last[a[k - 1]] == k - 1)
		{
			sum[a[k]] += sum[a[k - 1]];
		}
	}
	for(int i = 1; i <= m; i++)
	{
		cout << sum[i];
		if(i != m)
			cout << " ";
	}
	cout << endl;
	return 0;
}
