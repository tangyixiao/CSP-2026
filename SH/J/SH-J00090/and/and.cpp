#include<bits/stdc++.h>
using namespace std;

const int _ = 2e5 + 9;
long long n, m, ans, a[_];
bool f(long long x)
{
	int cnt = 0;
	for(int i = 1;i <= n;i++)
	{
		if((a[i] & x) >= x)
			cnt++;
	}
	return cnt >= m;
}
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
		cin >> a[i];
	for(int i = 30;i >= 0;i--)
	{
		long long nw = ans + (1 << i);
		if(f(nw))
			ans += 1 << i;
	}
	cout << ans;
	
	return 0;
}
