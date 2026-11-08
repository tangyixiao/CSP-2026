#include<bits/stdc++.h>
using namespace std;
string s;
long long n,a[200005],gb;
char c[200005];
bool lsame=1,csame=1;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (long long i = 1;i <= n;i++)
	{
		cin >> a[i] >> c[i];
		if (i != 1 and a[i] != a[i-1]) lsame=0;
		if (i != 1 and c[i] != c[i-1]) csame=0;
	}
	if (csame)
	{
		cout << 0;
		return 0;
	}
	if (lsame)
	{
		long long sl = a[1];
		for (long long i = 1;i <= n/2;i++)
		{
			if (c[i] != c[n-i+1])
			{
				gb++;
			}
		}
		cout << gb*sl;
		return 0;
	}
	for (long long i = 1;i <= n;i++)
	{
		for (long long j = 1;j <= a[i];j++)
		{
			s += c[i];
		}
	}
	for (long long i = 0;i < s.size()/2;i++)
	{
		if (s[i]!=s[s.size()-i-1])
		{
			gb++;
		}
	}
	cout << gb;
	return 0;
}
