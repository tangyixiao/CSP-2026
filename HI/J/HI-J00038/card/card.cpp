#include<bits/stdc++.h>
using namespace std;
int a[10];
int b[10]={0,0,0,0,0,0,0,0,0,0};
int c[10]={0};
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
		for(int j=i;j<=n;j++)
		{
			b[a[j]]++;
			if(b[a[j]]>1)
			{
				for(int k=1;k<=j-1;k++)
				{
					b[a[k]]--;
				}
			}
		}
		for(int j=1;j<=m;j++)
		{
			c[i]+=b[i];
			cout<<b[i]<<endl;
			b[i]=0;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<c[i]<<" ";
	}
	
	
	return 0;
}
