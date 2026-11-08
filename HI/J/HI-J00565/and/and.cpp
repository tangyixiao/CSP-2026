#include <bits/stdc++.h>
using namespace std;
int n,m,a[10009],sum[1000],num;
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]>=a[j])
			{
				sum[i]=a[i];
			}
			else
			{
				sum[i]=a[j];
			}
		}	
	}
	for(int i=0;i<n;i++)
	{
		if(sum[i]>=sum[i-1])
		{
			num=sum[i];
		}
	}
	cout<<num;
	
}
