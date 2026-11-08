#include <bits/stdc++.h>
using namespace std;
long long n;
long long a;
long long ans = 0;
char c;
char s[39999999999999999999999999];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	long long t = 0;
	long long l = 0;
	for(long long i = 1;i <= n;i++)
	{
		cin>>a;
		cin>>c;
		l+=a;
		for(long long j = 1;j <= a;j++)
		{
			s[t] = c;
			t++;
		}
	}

	for(long long i = 0;i <= l / 2;i++)
	{
		if(s[i] != s[l-i-1])
		{
			ans++;
		}
	}
	
	cout<<ans;
}
