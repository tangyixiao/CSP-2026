#include <bits/stdc++.h>
using namespace std;
long long n , m , sum = 0;
long long a[2000005] , maxx = 0 , u1 = 0 , u2 = 0;
int hw(long long a , long long b)
{
	return a & b;
}
int main()
{
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	cin >> n >> m;
	for (int i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	if (m == n)
	{
		sum = a[1];
		for (int i = 2;i <= n;i++)
		{
			sum = sum & a[i];
		}
		cout << sum;
		return 0;
	}
	int sum = 0;
	for (int i = 0;i < n;i++)
	{
		for(int j = 0;j < n;j++)
		{
			if (i != j)
			{
				sum = max(hw(a[i] , a[j]) , sum);
				u1 = i;
				u2 = j;
			}
		}
	}
	m-= 2;
	sum = (a[u1] & a[u2]);
	while (m > 0)
	{
		for (int k = 0;k < n;k++)
		{
			if (k != u1 && k != u2)
			{
				long long x = hw(sum , a[k]);
				maxx = max(x , maxx);
			}
		}
		sum = maxx;
		m--;
	}
	cout << sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
