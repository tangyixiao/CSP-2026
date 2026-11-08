#include<bits/stdc++.h>
using namespace std;

long long n,b[100000000],sum = 0,so = 1;
char a[100000000];

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (long long i = 1;i <= n;i++)
	{
		cin >> b[i] >> a[i];
	}
	char s = a[1];
	for (int i = 1;i <= n;i++)
	{
		if (s != a[i])
		    sum = 1;
	}
	if (sum == 0)
	    cout << 0;
	else
	{
		string s1,s2;
		sum = 0;
		for (int i = 1;i <= n;i++)
		{
			for (int j = 1;j <= b[i];j++)
			{
				s1 += a[i];
				sum++;
			}
		}
	    for (int i = sum / 2  - 1;i >= 0;i--)
			s2 += s1[i];
		int n1 = 0,n2 = 0;
		int sum1;
		if (sum % 2 == 1)
		    sum1 = sum / 2 + 1;
		else
		    sum1 = sum / 2;
		for (int i = sum1;i <= sum - 1;i++)
		{
			if (s1[i] != s2[n1])
			{
				n2++;
			}
			n1++;
		}
		cout << n2;
	}
	return 0;
}

