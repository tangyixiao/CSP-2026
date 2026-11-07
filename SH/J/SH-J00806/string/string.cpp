#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	int n;
	cin >> n;
	string s = "";
	for(int i = 1;i <= n;i++)
	{
		int x;
		char c;
		cin >> x >> c;
		for(int j = 1;j <= x;j++)
		{
			s += c;
		}
	}
	int ans = 0;
	for(int i = 0;i < s.size() / 2;i++)
	{
		if(s[i] != s[s.size() - i - 1])
		{
			ans++;
		}
	}
	cout << ans;
	return 0;	
} 
