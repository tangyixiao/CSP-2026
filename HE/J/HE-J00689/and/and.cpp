#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m, a[2000005];//m的值大于2怎么算？ 
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];//输入了a
	}
	
	//这是m = 2时的求法，能不能以此类推？ 
	//重复m - 2次，使结果不断刷新 X(时间过长，怎么优化？） 
	sort(a + 1, a + n + 1);
	int sum = a[n];
	for (int i = n - 1; i > n - m; i--)
	{
		sum = sum & a[i];
	}
	cout << sum;
	return 0;
}
