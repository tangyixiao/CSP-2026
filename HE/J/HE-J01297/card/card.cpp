#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[500005]={0},b[300005]={0},c=0,d[300005]={0},i=0,j=0,e[300005]={0},f=0;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(b[a[j]]==0)
			{
				b[a[j]]=j;
				d[j]=a[j];
			}
			else if(b[a[j]]!=0)
				 {
				 	for(c=d[b[a[j]]];c<j;c++)
				 	{
				 		b[a[c]]=0;
				 		d[c]==0;
				 		d[1]=a[j];
				 		b[a[j]]=1;
					 }
				 }
		}
		for(f=1;f<=n;f++)
		{
			if(d[a[f]]) e[a[f]]++;
		}
	}
	for(i=1;i<=m;i++)
	{
		if(e[m]!=0) cout<<e[m]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
