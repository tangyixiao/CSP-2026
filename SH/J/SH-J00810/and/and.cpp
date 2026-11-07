#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(a[j-1]>a[j])
			{
				swap(a[j],a[j-1]);
			}
		}
	}
	int sum=0;
	if(m==1)
	{
		cout<<a[n-1];
	}
	for(int i=n;i>0;i--)
	{
		sum=sum & a[i];
	}
	cout<<sum;
	return 0;
}
