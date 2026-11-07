#include <bits/stdc++.h>
using namespace std;
string s;
long long n,ans;
int a[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0); 
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		char c;
		cin >> a[i] >> c;
		for(int j = 1;j <= a[i];j++)
		{
			s = s + c;
		}
	}
	for(int i = 0;i < s.length() / 2;i++)
	{
		if(s[i] != s[s.length() - i - 1])
		{
			ans++;
		}
	}
	cout <<ans <<"\n";
	return 0;
}
