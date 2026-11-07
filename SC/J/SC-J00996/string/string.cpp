#include<bits/stdc++.h>
typedef long long ll;
const ll N = 1e6 + 10;
using namespace std;
void solve()
{
	ll n;
	cin >> n;
	string s = "";
	for (ll i = 0; i < n; i++)
	{
		ll a;char c;
		scanf("%d %c", &a, &c);
		for (ll j = 0; j < a; j++)
		{
			s += c;
		}
	}
	ll l = 0, r = s.size()-1, ans = 0;
	while (l < r)
	{
		if (s[l] != s[r])
			ans++;
		l++;r--;
	}
	printf("%d", ans);
}
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	solve();
	fclose(stdin);fclose(stdout);
	return 0;
}