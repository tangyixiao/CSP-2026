#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,mx=-1;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],mx=max(mx,a[i]);
	int ans=-1;
	int nf,ns;
	if(m==1)
	{
		cout<<mx;
		return 0;
	}
	else if(m==2)
	{
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				ans=max((a[i]&a[j]),ans);
		cout<<ans;
		return 0;
	}
	else if(m==n)
	{
		ans=a[1];
		for(int i=2;i<=n;i++) ans=ans&a[i];
		cout<<ans;
		return 0;
	}
	/*骗分分割线*/
	for(int k=2;k<=m;k++)
	{
		ans=-1;
		for(int i=1;i<=n;i++)
		{
			if(a[i]==-1) continue;
			for(int j=i+1;j<=n;j++)
			{
				if(a[j]==-1) continue;
				if((a[i]&a[j])>=ans)
				{
					ans=a[i]&a[j];
					nf=i,ns=j;
				}
			}
		}
		a[nf]=ans,a[ns]=-1;
	}
	cout<<ans;
	return 0;
}

//骗分，爽！！！！ 
