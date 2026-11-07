#include<iostream>
#include<cstdio>
using namespace std;
int n,m;
int a[50005];
int b[30005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		int c[30005];
		for(int j=i;j<=n;j++)
		{
			if(c[a[j]])
			{
				int h=j-1;
				while(a[h]!=a[j])
				{
					c[a[h]]=0;
					h--;
				}
			}
			c[a[j]]=j;
			
		}
		for(int d=i;i<=n;i++)
		{
			if(c[a[d]])
			{
				b[a[d]]++;
				c[a[d]]=0;
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<b[i]<<" ";
	}
	fclose(stdin),fclose(stdout);
	return 0;
}