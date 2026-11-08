#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n,a[99999],b[99999],c=0,d=1;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=0;j<n;j++)
		{
			c=0;
			if(a[c]>a[j])
			{
				c=j;
			}
		}
		b[i]=a[c];
		a[c]=0;	
	}
	d=b[1];
	for(int i=2;i<=m;i++)
	{
		d=(d&b[i]);
	} 
	cout<<d;
	return 0;
} 
