#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	int n,m,a[100005]={0},b=0,i=0,j=0,maxx=-1,e=0,c=0,f=1;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	/*for(i=n;i>=m;i--)
	{
		f=f*i;
	}
	f=f/n;
	for(i=1;i<=n;i++)
	{
		e=a[i]&a[i+1];
		for(j=i+1;j<=n;j++)
		{
			b++;
			if(b<m) e=e&a[j];
			else if(e>maxx) 
				{
					c++;
					b=0;
					maxx=e;
					e=a[i]&a[i+1];
				}
				else if(b==m-1&&j==n&&c<=f)
					{
						e=e&i;
						b++;
						j=i+1;
					}
		}
		c=0;
		b=0;
	}*/
	for(i=1;i<=n;i++)
		for(j=i+1;j<=n;j++)
		{
			if(a[i]<a[j]) swap(a[j],a[i]);
		}
	maxx=a[1];
	for(i=2;i<=m;i++)
	{
		maxx=maxx&a[i];
	}
	cout<<maxx;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
