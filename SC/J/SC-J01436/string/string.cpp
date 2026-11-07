#include<bits/stdc++.h>
using namespace std;
string s;
char c[200005];
int n;
long long a[200005], sum, cut, len;
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w" ,stdout);
	cin >> n;
	for(int i = 1;i<=n;i++)
	{
		cin >> a[i] >> c[i];
		len += a[i];
		for(long long j = len - a[i] + 1;j<=len;j++)
		{
			s[j] = c[i];
		}
	}
	for(int i = 1;i<=len/2;i++)
	{
		if(s[i] != s[len + 1-i])
		{
			cut++;
		}
	}
	cout << cut;
	return 0;
 } 