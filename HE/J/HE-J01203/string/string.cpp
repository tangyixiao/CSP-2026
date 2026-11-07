#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,m;
	cin >> n;
	int a;
	string b,s;
	for(int i =0;i < n;i++)
	{
		cin >> a >> b;
		m += a;
		for(int j = 0;j < a;j++)
		{
			s += b;
		}
	}
	if(m % 2 != 0)  m = m/2+1;
	else  m = m / 2;
	long long ans = 0;
	for(int i = 0;i < m;i++)
	{
		if(s[i] != s[n-i-1])
		{
			ans++;
		}
	}
	cout << ans;
	return 0;
}
