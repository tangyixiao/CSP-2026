#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n, p = 0;
	long long a[200005];
	string c;
	string s;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i] >> c[i];
		for(int j = 1; j <= a[i]; j++)//10^14 
		{
			s[++p] = c[i];
		}
	}
	
	long long l = 0, cnt = 0;
	for(int i = 1; i <= n; i++)
	{
		l += a[i];
	}
	for(long long i = 1; i <= l; i++)
	{
		if(s[i] != s[l-i+1]) cnt++;
	}
	cout << cnt/2;
	return 0;
}
