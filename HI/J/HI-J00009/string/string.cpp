#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],c,t,r,l;
string s[1000005],s4;
string s3[1000005],s2;

int hw(string a,long long c)
{
	int sum = 0;
	string b;
		for (long long i = 0;i < c;i++)
	{
		b += a[c-i-1];
	}
	for (long long i = 0;i < c;i++)
	{
		if (b[i] == a[i])
		{
			sum++;
		}
	}
	if (sum == c)
	{
		cout << 0;
		return 1;
	}
	return 0;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for (long long i = 1;i <= n;i++)
	{
		scanf("%d",&a[i]);
		cin >> s2[i];  
		c += a[i];
	}
	for (long long i = 1;i <= c;i++)
	{
		for (long long j = 1;j <= a[i];j++)
		{
			s[t] += s2[i];
			t++;
			s4 += s[t];
	     }
	}
	if (n <= 1)
	{
		cout << 0;
	}
	else if (n == 2)
	{
		if (t % 2 != 0)
		{
			cout << 1;
		}
		else if (t == 2)
		{
			cout << 1;
		}
		else
		{
			cout << 0;
		}
	}
	else if (hw(s4,c) == 1)
	{
		cout << 0;
	}
	else
	{
		cout << 2;
	}
	return 0;
}


