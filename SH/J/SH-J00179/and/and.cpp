#include <bits/stdc++.h>
using namespace std;
int ans1 = -1,ans2 = 1,a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >>n >>m;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
		ans1 = max(ans1,a[i]);
		ans2 &= a[i];
	}
	if(m == 1)
	{
		cout << ans1 << endl;
		return 0;
	}
	if(m == n)
	{
		cout << ans2 << endl;
		return 0;
	}
	cout << ans1 << endl;
	return 0;
}
