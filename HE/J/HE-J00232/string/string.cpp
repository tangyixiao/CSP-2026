#include<bits/stdc++.h>
using namespace std;
long long n,a;
string s;
char c;
long long calc(string s)
{
	long long cnt = 0;
	for (long long i = 0;i < s.length() / 2;i++)
	{
		if (s[i] != s[s.length() - i - 1]) cnt++;
	}
	return cnt;
}
int main()
{
	// 快读 
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	// 主代码
	cin>>n;
	for (long long i = 1;i <= n;i++)
	{
		cin>>a>>c;
		for (long long j = 1;j <= a;j++) s += c;
	}
	cout<<calc(s);
	return 0;
}
// 好像有点难度 
