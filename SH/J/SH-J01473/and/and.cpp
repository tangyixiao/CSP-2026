#include <bits/stdc++.h>
using namespace std;
int n,m;
int num[200009];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin>>n>>m;
	for (int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	int ans = 0;
	if (m == 1)
	{
		ans = num[0];
		for (int i=1;i<n;i++)
		{
			if (num[i] & 2147483647 > ans & 2147483647)
			ans = num[i];
		}
		cout<<ans;
		return 0;
	}
	if (m == n)
	{
		ans = num[0];
		for (int i=1;i<n;i++)
		{
			ans = (ans & num[i]);
		}
		cout<<ans;
		return 0;
	}
	for (int i=0;i<n-1;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (num[i] & num[j] > ans) ans = num[i] & num[j];
		}
	}
	cout<<ans;
	return 0;
}
