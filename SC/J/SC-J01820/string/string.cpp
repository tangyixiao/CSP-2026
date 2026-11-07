#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
string s;
int n, a[N];
int len = 0, num = 0, ans;
char ch;
signed main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i ++) 
	{
		cin >> a[i] >> s[i];
		len += a[i];
		ch = s[1];
		if (s[i] == ch) num ++;
	}
	if(num == n)
	{
		cout << 0 << '\n';
		return 0;
	}
	ans = len;
	for(int i = 1; i <= n / 2; i ++) 
	{
		ans -= a[i];
	}
	for(int i = n / 2; i <= n; i ++) 
	{
		if(a[i] == a[i - n / 2] && s[i] == s[i - n / 2]) 
		{
			ans -= a[i];
		}
		else if(a[i] == a[i - n / 2] && s[i] == s[i - n / 2]) 
		{
			ans -= abs(a[i] - a[i - n / 2]);
		} 
		else 
		{
			continue;
		}
	}
	if(len % 2) ans -= 1;
	cout << ans << '\n';
	return 0;
}