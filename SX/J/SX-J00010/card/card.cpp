#include<bits/stdc++.h>
using namespace std;
int a[200005],vis[200005],nex[200005],st[200005],ans[200005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	bool flag=1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(i>=2&&a[i]<a[i-1])flag=0;
	}
	if(flag)
	{
		int last=a[1];
		for(int i=1;i<=n;i++)
		{
			if(a[i]!=last)ans[last]=i-1;
			last=a[i];
		}
		ans[last]=n;
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			int k=1;
			for(int j=1;j<=n;j++)vis[j]=st[i]=0;
			for(int j=i;j<=n;j++)
			{
	//			for(int j=1;j<k;j++)
	//			{
	//				cout<<st[j]<<' ';
	//			}
	//			cout<<endl;
				if(vis[a[j]]==0)
				{
					st[k]=a[j];
					vis[a[j]]=1;
					k++;
				}
				else
				{
					while(st[k-1]!=a[j])
					{
						vis[st[k-1]]=0;
						st[k-1]=0;
						k--;
					}
				}
			}
			for(int j=1;j<k;j++)
			{
	//			cout<<st[i]<<' ';
				ans[st[j]]++;
			}
	//		cout<<endl;
		}
	}
	cout<<ans[1];
	for(int i=2;i<=m;i++)
	{
		cout<<' '<<ans[i];
	}
	return 0;
}