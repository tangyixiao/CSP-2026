#include <bits/stdc++.h>
using namespace std;
int n,m;
int ans = 0;
int a[200005];
int s[200005];
int as[200005];
void f(int cnt)
{
	if (cnt == m)
	{
		int t = s[1];
		for (int i = 2;i <= m;i++)
		{
			t &= s[i];
		}
		ans = max(ans,t);
		cout << t  << endl;
		return ;
	}
	cout << 1 << endl;
	for (int i = 1;i <= n;i++)
	{
		if (s[i] == 0)
		{
			s[cnt++] = a[i];
			f(cnt);
			s[cnt] = 0;
			cnt--;
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	f(0);
	cout << ans;
	return 0;
}