#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, a;
string s;
char ch;
ll cnt, len;
ll two(string x, ll le)
{
	ll ans = 0;
	for(int i = 0; i < le; i++)
	{
		if(s[i] != s[le - i - 1])
		{
			s[i] = s[le-i-1];
			ans++;
		}
	}
	return ans;
}
bool check(string x)
{
	ll lem = x.size();
	for(int i = 0; i < lem; i++)
	{
		if(s[i] != s[lem - i - 1])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	while(n--)
	{
		cin >> a >> ch;
		for(ll i = 1; i <= a; i++)
		{
			s += ch;
		}
		len += a;
	}
	if(check(s))
	{
		cout << 0;
		return 0;
	}
	cnt = two(s, len);
	cout << cnt;
	return 0;
} 
