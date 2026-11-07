#include<cstdio>
#include<iostream> 
using namespace std;
int n,m,a[500010],Ans[500010],b[500010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n>1e3)
	{
		for(int i=1;i<=n;i++)
			Ans[a[i]]=i;
		for(int i=1;i<=m;i++)
			cout<<Ans[i]<<" ";
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++) b[j]=0;
			for(int j=i;j<=n;j++)
			{
				if(b[a[j]])
				{
					for(int k=j;k>=b[a[j]];k--)
						b[a[k]]=0;
				}
				b[a[j]]=j;
			}
			for(int j=1;j<=m;j++)
				if(b[j]) Ans[j]++;
		}
		for(int i=1;i<=m;i++)
			cout<<Ans[i]<<" ";
	}
	return 0;
}