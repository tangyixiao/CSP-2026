#include<bits/stdc++.h>
using namespace std;
int n=0,j=0,k=0,a[200005]={0};
char b[200005];
long long ans=0,sum=0,mid=0,l=0,r=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		sum+=a[i];
	}
	mid=sum/2;
	l=1;
	r=sum;
	j=1;
	k=n;
	for(int i=1;i<=n;i++)
	{
		mid-=a[i];
		if(mid<0)
		{
			mid=i;
			break;
		}
	}
	while(j<mid)
	{
		if(a[j]<=a[k])
		{
			if(b[j]!=b[k])
			{
				ans+=a[j];
			}
			a[k]-=a[j];
			l=l+a[j];
			a[j]=0;
			j=j+1;
		}
		else
		{
			if(b[j]!=b[k])
			{
				ans+=a[k];
			}
			a[j]-=a[k];
			r=r-a[k];
			a[k]=0;
			k=k-1;
		}
	}
	ans+=a[mid+1];
	cout<<ans;
	return 0;
}
