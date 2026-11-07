#include<bits/stdc++.h>
using namespace std;
int a[200010];
long long sum;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]==0)
		{
			cout<<0;
			return 0;
		}
	}
	sort(a+1,a+1+n);
	sum=a[1];
	if(m==n)
	{
		for(int i=1;i<=n;i++)
		{
			sum=sum&a[i];
		}
		cout<<sum;
		return 0;
	}
	else if(m==n-1)
	{
		sum=a[2];
		for(int i=2;i<=n;i++)
		{
			sum=sum&a[i];
		}
		cout<<sum;
		return 0;
	}
	cout<<a[n-m+1];
	return 0;
}