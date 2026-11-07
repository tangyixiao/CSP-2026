#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5;
long long n , m , x , sum;
int a[N] , lst[N] , nby[N] , s[N] , l[N] , r[N];
int main()
{
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	cin >> n >> m;
	for (int i = 1 ; i <= n ; i ++)
	{
		cin >> a[i];
		lst[a[i]] = i;
		nby[a[i]] = i;
	}
	for (int i = n ; i >= 1 ; i --)
	{
		nby[a[i]] = i;
	}
	for (int i = 1 ; i <= n ; i ++)
	{
		s[i] = lst[a[i]] - i;
	}
	for (int i = n ; i >= 1 ; i --)
	{
		if (s[i] >= s[i + 1])
		{
			l[i] = min(l[i + 1] , i);
			r[i] = max(r[i + 1] , lst[a[i]]);
		}
		else
		{
			s[i] = s[i + 1];
		}
	}
	for (int i = 1 ; i <= m ; i ++)
	{
		sum = 0;
		if (nby[i] < l[1])
		{
			sum += nby[i];
		}
		if (lst[i] >= r[1])
		{
			sum += lst[i];
		}
		cout << sum << " ";
	}
	return 0;
}
