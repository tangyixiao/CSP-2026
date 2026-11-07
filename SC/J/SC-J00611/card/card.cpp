#include<bits/stdc++.h>
using namespace std;
int n,m,a[501000],b[301000],c[501000],d[301000],f=1;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	} 
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			c[j]=a[j];
			/*for(int t=f;t<=(i+j-1);t++)
			{
				d[c[t]]++;
				if(d[c[t]]>1)
				{
					f=t;
				}
			}*/
			/*for(int t=1;t<=m;t++)
			{
				d[t]=0;
			}*/
			d[c[j]]++;
			if(d[c[j]]>1)
			{
				f=j;
				d[c[j]]=1;
				for(int t=f-1;t>=1;t--)
				{
					d[c[t]]=0;
				}
			}	
		}
		if(f==1)
		{
			f=i;
		}
	/*	for(int j=1;j<=n;j++)
		{
			cout<<c[j]<<" ";
		}
		cout<<endl;*/
		for(int j=f;j<=n;j++)
		{
			b[c[j]]++;
		}
		for(int j=i;j<=n;j++)
		{
			c[j]=0;
		}
		for(int t=1;t<=m;t++)
		{
			d[t]=0;
		}
		/*cout<<f;
		cout<<endl;*/
		f=1;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
} 