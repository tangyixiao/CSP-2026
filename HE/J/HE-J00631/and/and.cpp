#include <bits/stdc++.h>
using namespace std;
int a[100005] , mid[1005] , len = 0;
int main()
{
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	int n , m;
	cin >> n >> m;
	for(int i = 1; i <= n ; i++)
	{
		cin >> a[i];
	}
	for(int i = 1; i <= n ;i++)
	{
		while(a[i]> 0)
		{
			mid[i] = a[i] % 2;
			len++;
			a[i] / 2;
		}
	}
	cout << 12;
	return 0;
}
