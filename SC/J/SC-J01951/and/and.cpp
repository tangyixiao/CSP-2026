#include <bits/stdc++.h>
using namespace std;
int n,m,a[200005],s = 1,ans;
int main()
{
	freofen("and.in",'w');
	freofen("and.out",'w');
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	sort(a + 1,a + n + 1);
	ans = a[n];
	for(int i = n - 1;i >= 0;i--)
	{
		if (s >= m)
		{
			break;
		}
		ans &= a[i];
		s++;
	}
	cout << ans;
	return 0;
} 