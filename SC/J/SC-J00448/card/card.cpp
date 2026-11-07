#include<iostream>
using namespace std;
int main()
{
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	int n , m;
	cin >> n >> m;
	int a[500005] = {};
	int cnt[300005] = {};
	for(int i = 1;i <= n;i++) 
	{
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++)
	{
		for(int j = i + 1;j <= n;j++)
		{
			if(a[j] != a[j-1]) cnt[a[j]]++;
		}
	}
	for(int i = 1;i <= m;i++)
	{
		cout << cnt[i];
	}
	return 0;
}