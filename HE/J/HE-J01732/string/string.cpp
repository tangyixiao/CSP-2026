#include<bits/stdc++.h>

using namespace std;

long long n;
long long ans = 0;
string s;
long long p;
long long l;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d" , &n);
	for(int i = 1;i <= n;i++)
	{
		int len;
		char a;
		cin >> len >> a;
		l += len;
		while(len --)
		{
			s += a;
			p ++;
		}
	}
	n = l;
	long long i = n / 2 , j = n / 2 + 1 + n % 2;
	while(i >= 1 && j <= n)
	{
		if(s[i] != s[j])
		{
			ans ++;
		}
		i --;
		j ++;
	}
	cout << ans;
	return 0;
}
