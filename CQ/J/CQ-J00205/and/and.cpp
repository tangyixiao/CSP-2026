#include <bits/stdc++.h>
using namespace std;
int a[200005],n,m;
int s[20005][20005];
int main()
{
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
		for (int j = i;j >= 1;j--)
		{
			s[i][j] = a[i] & a[j];
			cout << s[i][j] << ' ';
		}
	}
	return 0;
}
