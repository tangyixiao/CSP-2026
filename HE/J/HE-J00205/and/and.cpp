#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin.tie(0);
	long long n,m,maxx1 = 0,maxx2 = 0,minn = 100000000,answer1 = 1;
	cin >> n >> m;
	long long num[n + 9];
	cin >> num[1];
	answer1 = num[1];
	for(int i = 2;i <= n;i++)
	{
		cin >> num[i];
		maxx1 = max(maxx1,num[i]);
		minn = min(minn,num[i]);
		answer1 = answer1 & num[i];
	}
	if(m == 1)
	{
		cout << maxx1;
		return 0;
	}
	else if(m == n)
	{
		cout << answer1;
		return 0;
	}
	else if(m == n - 1)
	{
		cout << (answer1 & minn);
		return 0;
	} 
	for(int i = 1;i <= n;i++)
	{
		for(int j = i + 1;j <= n;j++)
		{
			maxx2 = max((num[i] & num[j]),maxx2);
		}
	}
	cout << maxx2;
	return 0;
} 
