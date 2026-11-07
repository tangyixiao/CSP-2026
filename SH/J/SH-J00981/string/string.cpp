#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
typedef long long ll;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n, k, ans = 0;
	cin >> n;
	string s, c;
	for(int i = 1; i <= n; i++)
	{
		cin >> k >> c;
		for(int j = 1; j <= k; j++)
		{
			s += c;
		}
	}
	for(int i = 0; i < s.size() / 2; i++)
	{
		if(s[i] != s[n-i+1])
		{
			ans++;
		}
	}
	cout << ans;
	
	return 0;
}
