#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,b[1000002],a[1000002],c[1000002],k,x[1000002];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		a[i+n]=a[i];
	}
	if(m==1)
		cout<<n;
	else
	{
		for(i=1;i<=n;i++)
		{
			memset(c,0,sizeof(c));
			for(j=i;j<=i+n-1;j++)
		    {
		    	c[j]=a[j];
		    	for(k=j-1;k>=i;k--)
		    	    if(c[k]==0)
		    	        break;
		    	    else if(c[k]==c[j])
		    	        for(int r=k;r<j;r++)
		    	            c[r]=0;
			}
			for(int w=i;w<=i+n-1;w++)
			    x[c[w]]=1;
			for(int z=1;z<=m;z++)
			    b[z]+=x[z];
		}
		for(i=1;i<=m;i++)
		    cout<<b[i]<<" ";
	}
	return 0;
}