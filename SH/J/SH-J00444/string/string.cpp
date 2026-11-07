#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
long long n , c , d , sum;
long long a[N];
char ch[N];
int main()
{
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	cin >> n;
	for (int i = 1 ; i <= n ; i ++)
	{
		cin >> a[i] >> ch[i];
	}
	c = 1;
	d = n;
	while (c < d)
	{
		long long m1 = max(a[c] , a[d]) , m2 = min(a[c] , a[d]);
		if (ch[c] != ch[d])
		{
			sum += m2;
		}
		a[c] -= m2;
		a[d] -= m2;
		if (a[c] == 0)
		{
			c ++;
		}
		if (a[d] == 0)
		{
			d --;
		}
	}
	cout << sum;
	return 0;
}
