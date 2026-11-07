#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max1=-1;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			string x,y;
			int x1=0,y1=0; 
			while(a[i]>0)
			{
				x1++;
				x[x1]=a[i]%2+'0';
				a[i]/=2;
			}
			while(a[j]>0)
			{
				y1++;
				y[y1]=a[j]%2+'0';
				a[j]/=2;
			}
			int sum=0;
			int g=0;
			for(int w=min(x1,y1);w>0;w--)
			{
				if(x[w]==y[w]&&x[w]=='1')
				{
					sum=sum+1*pow(2,g);	
				}
				else
				{
					sum=sum+0*pow(2,g);
				}
				g++;
			}
			max1=max(max1,sum);
		 } 
	}
	printf("%d",max1);
	return 0;
}
