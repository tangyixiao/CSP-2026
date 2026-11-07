#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int b[1000005];
int c[1000005];
int f(int i,int n)
{
	int q=1;
	for(int i=i;i<=n;i++)
	{
		b[q]=a[i];
		for(int j=1;j<=q;j++)
		{
			if(b[j]==a[i])
			{
				for(int s=j;s<=q;s++)
				{
					b[s]=0;
					q=j-1;
				}
			}
			break;
		}
		q++;
	}
	for(int i=1;i<=q;i++)
	{
		c[a[i]]++;
	}
	
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		f(i,n);
	}
	for(int i=1;i<=n;i++)
	{
		if(c[i]!=0)
		{
			cout<<c[i]<<' ';
		}
		
	}
	return 0;
 } 