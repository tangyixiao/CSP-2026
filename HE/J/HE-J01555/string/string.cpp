#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ll n;
	cin >> n;
	string str = "";
	for (ll i = 1;i <= n;i++)
	{
		int a;
		char b;
		cin >> a >> b;
		for (ll j = 1;j <= a;j++) 
			str += b;
	}
	string b = "";
	for (ll i = str.size();i >= 0;i--)
	{
		b += str[i-1];
	}
	ll ans = str.size() / 2;
	for (ll i = 0;i < str.size() / 2;i++)
	{
		if (str[i] == b[i])
			ans--;
	}
	cout << ans;
	return 0;
}
