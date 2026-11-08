#include<bits/stdc++.h>
using namespace std;
long long a[200005];
int ans=0;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n=0,m=0;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		int sum=1048575;
		int t=i;
		for(int j=0;j<m;j++)
		{
			for(int z=t;z<n;z++)
			{
				sum=sum&a[z];
				t=z;
			}
		}
		ans=max(ans,sum);
	}
	cout<<ans;
	return 0;
}
