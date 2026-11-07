#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2 * 1e5 + 5;
int a[N];
char c[N];
ll n, ans, len;
string s;
signed main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(ll i = 1; i <= n; i++)
	{
		cin >> a[i] >> c[i];
		for(ll j = 0; j < a[i]; j++)
			s += c[i];
	}
	len = s.size();
	for(ll i = 0; i <= len/2; i++)
	{
		if(s[i] != s[len-i-1])
		{
			ans++;
		}
	}
	cout << ans;
	return 0;
}