#include<bits/stdc++.h>
using namespace std;
int a[100001],b[1000001],sum,x[1000001],o,p,ans;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
           cin>>a[i];
           sum=max(sum,a[i]);
} 
if(m==1) cout<<sum;
else if(m==n)
{
	int u=0;
	while(a[0]!=0)
	{
		x[u]=a[0]%2;
		a[0]/=2;
		u++;
	}
	for(int i=1;i<n;i++)
	{
		int y[1000001]={0};
		while(a[i]!=0)
		{
			if(a[i]%2==1)
			{
				y[o]=1;
			}
			a[i]/=2;	
			o++;
		}
		for(int i=0;i<o;i++)
		{
			if(y[i]==0)
			{
				x[i]=0;
			}
		}
		p=max(o,p);
		o=0;
	}
	for(int i=0;i<p;i++)
	{
		ans+=x[i]*pow(2,i);
	}
	cout<<ans;
}
}



