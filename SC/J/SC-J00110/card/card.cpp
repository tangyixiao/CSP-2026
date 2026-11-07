#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	vector<int> a(n+5);
	vector<int> sum(m+5);
	bool f=1;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if(a[i] < a[i-1])
		{
			f = 0;
		}
	}
	if(f == 1)
	{
		for(int i = 1; i <= n; i++)
		{
			sum[a[i]] = i;
		}
		for(int i = 1; i <= m; i++)
		{
			cout << sum[i] << " ";
		}
	}
} 