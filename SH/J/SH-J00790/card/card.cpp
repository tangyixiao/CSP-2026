#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,now,a[N],fi[M],t[M],ans[M];
bool flag=true;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<a[i-1])flag=false;
	}
	if(flag)
	{
		for(int i=2;i<=n+1;i++)
			if(a[i]!=a[i-1])printf("%d ",i-1);
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		now=0;
		for(int j=1;j<=m;j++)fi[j]=t[j]=0;
		for(int j=i;j<=n;j++)
			if(!fi[a[j]])t[++now]=a[j],fi[a[j]]=now;
			else
			{
				now=fi[a[j]];
				for(int k=1;k<=m;k++)if(fi[k]>now)fi[k]=0;
			}
		for(int j=1;j<=now;j++)ans[t[j]]++;
	}
	for(int i=1;i<=m;i++)printf("%d ",ans[i]);
	return 0;
}
