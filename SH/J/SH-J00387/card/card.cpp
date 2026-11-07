#include<bits/stdc++.h> 
using namespace std;
int a[500005],b[300005],c[500005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int h=1;h<=n;h++)
	{
		for(int i=h;i<=n;i++)
			c[i]=a[i];
		for(int i=h;i<=n;i++)	
		{
			bool s=true;
			for(int j=h;j<=i-1;j++)
			{
				if(c[j]==c[i])
					s=false;
				if(s==false)
					c[j]=0;	
			}
		}
		for(int k=h;k<=n;k++)
			b[c[k]]++;
		memset(c,0,sizeof(c));
	}
	for(int i=1;i<=m;i++)
		cout<<b[i]<<" ";
	return 0; 
}
