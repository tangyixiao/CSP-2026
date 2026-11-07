#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int n,m,a[30010],ans[30010];
bool b[30010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	scanf("%d",&a[i]);
	int t=0;
	while(t<=m)
	{
		t++;
		memset(b,1,sizeof(b));
		for(int i=t;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
			 if(a[i]==a[j])
			 { 
				for(int k=i+1;k<=j;k++)
				 b[k]=0;
			 }
			}
		}
		for(int i=t;i<=n;i++)
		{
			if(b[a[i]])
			{
			ans[a[i]]++;
			}
		}
		
	}
	for(int i=m;i>=1;i--)
	 printf("%d ",ans[i]);
	return 0;
}