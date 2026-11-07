#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n;
	cin >> n;
	long long sum = 0;
	string s = "";
	for(int i = 1;i <= n; ++ i)
	{
		int a;
		cin >> a;
		char c;
		cin >> c;
		sum += a;
		for(int j = 1;j <= a; ++ j)
		{
			s += c;
		}
	}
	long long ans = 0;
	for(long long i = 0;i < sum / 2; ++ i)
	{
		if(s[i] != s[sum - i - 1]) ans ++;
	}
	cout << ans;
	return 0;
}
