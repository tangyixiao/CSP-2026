#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n;
	string str;
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		ll x;
		char ch;
		cin >> x >> ch;
		string temp;
		for(int j = 1;j <= x;j++)
		{
			temp += ch;
		}
		str += temp;
	}
	ll ans = 0;
	for(int i = 1;i <= (int)str.size() / 2;i++)
	{
		if(str[i] != str[n - i]) ans++;
	}
	cout << ans;
	return 0;
}