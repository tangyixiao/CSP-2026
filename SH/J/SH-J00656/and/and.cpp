#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,ax,sum=0;
	cin>>n>>m;
	long long a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<n;j++)
	{
		if(m==2)
		{
			ax=a[j]&a[j+1];
			if(sum<ax)
			{
				sum=ax;
			}
		}
		if(m!=2)
		{
			for(int s=0;s<m;s++){
				ax=a[s]&a[s+1];
				if(sum<ax)
				{
					sum=ax;
				}
			}
		}
	}
	cout<<sum;
	return 0;
}
