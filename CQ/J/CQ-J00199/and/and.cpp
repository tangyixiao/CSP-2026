#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200005], he = 0, sum = -1, t;
int main()
{
    freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
    long long he = a[1];
    for (int i = 2; i <= n; i++)
    {
    	he = (he & a[i]);
	}
	if (m == 1)
	{
		for (int i = 1; i <= n; i++)
			sum = max(a[i], sum);
		cout << sum;
	}
	else if (m == n - 1)
	{
		long long num = 1e18;
		for (int i = 1; i <= n; i++)
			num = min(a[i], num); 
		for (int i = 1; i <= n; i++)
		{
			if (a[i] == num)
			    continue;
			sum = max(a[i], sum);
		}
		cout << sum;
	}
	else if (m == 2)
	{
		for (int i = 1; i <= n; i++)
		    for (int j = i + 1; j <= n; j++)
		    	sum = max(a[i] & a[j], sum);
		cout << sum;
	}
	else if (m == n)
	    cout << he;
} 
