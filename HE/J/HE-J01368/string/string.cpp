#include<bits/stdc++.h>
using namespace std;
int n;
int a[2005];
char c[2005];
long long sum;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		cin>>c[i];
	}
	for(int i=1,j=n;i<=n/2;i++,j--)
	{
		if(c[i]!=c[j])
		{
			sum+=min(a[i],a[j]);
			a[i]-=a[j];
			a[j]=-a[i];
			int j1=1;
			while(a[i]>0&&a[j-j1]>0)
			{
				if(c[i]==c[j-j1])
				{
					a[i]-=a[j-j1];
					a[j-j1]=-a[i];
				}
				else
				{
					sum+=min(a[i],a[j-j1]);
					a[i]-=a[j-j1];
					a[j-j1]=a[i];
				}
				j1++;
			}
		}
		else if(c[i]==c[j])
		{
			a[i]-=a[j];
			a[j]=-a[i];
			int j2=1;
			while(a[i]>0&&a[j-j2]>0)
			{
				if(c[i]==c[j-j2])
				{
					a[i]-=a[j-j2];
					a[j-j2]=-a[i];
				}
				else
				{
					sum+=min(a[i],a[j-j2]);
					a[i]-=a[j-j2];
					a[j-j2]=a[i];
				}
				j2++;
			}
		}
	}
	cout<<sum;
	return 0;
}
