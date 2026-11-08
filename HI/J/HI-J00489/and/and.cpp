#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	for(int i = 0;i < n;i++)
	{
		cin>>a[i];
	}
	long long aum = a[0];
	if(m == n)
	{
		for(int i = 1;i < n;i++)
		{
			aum = aum & a[i];
		}
		cout<<aum;
		return 0;
	}
	if(m == 1)
	{
		sort(a.begin(),a.end());
		cout<<a[0];
		return 0;
	}
	sort(a.begin(),a.end());
	cout<<a[m - 1];
	return 0;
}
