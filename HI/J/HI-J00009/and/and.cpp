#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[100000005],sum,maxx,t1,t2;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	if (m == 1)
	{
		for (long long i = 1;i <= n;i++)
		{
			if (a[i] & a[i] > maxx)
			{
				maxx = a[i] & a[i];
			}
		 } 
	}
	else if (m == 2)
	{
		for (long long i = 1;i <= n;i++)
		{
			for (long long j = i+1;j <= n;j++)
			{
				if (a[i] & a[j] > maxx)
				{
					maxx = a[i] & a[j];
				}
			}
		 } 
	}
	else if (m == 3)
	{
		for (long long i = 1;i <= n;i++)
		{
			for (long long j = i+1;j <= n;j++)
			{
				if (a[i] & a[j] > maxx)
				{
					maxx = a[i] & a[j];
					t1 = i;
					t2 = j;
					
				}
			}
		 } 
		 int mass = 0;
		 for (long long i = 1;i <= n;i++)
		{
			if (maxx & a[i] > mass && i != t1 && i != t2)
			{
				maxx = a[t1] & a[t2] & a[i];
				mass = maxx; 
			}
		 } 
	}
	else if (m == n)
	{
		maxx = a[1];
		for (long long i = 2;i <= n;i++)
		{
			maxx = maxx & a[i];
		}
	}
	else
	{
		cout << 0;
		return 0;
	}
	cout << maxx;
	return 0;
}



