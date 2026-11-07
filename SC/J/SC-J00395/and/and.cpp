#include<bits/stdc++.h>
using namespace std;
int n,m,ans=0,k[200010];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;int y;
	if(m==n)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>y;
			ans&=y;
		}
	}else if(m==2)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>k[i];
		}for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				ans=max(ans,k[i]&k[j]);
			}
		}
	}else 
	{
		for(int i=1;i<=n;i++)
		{
			cin>>y;
			ans=max(ans,y);
		}
	} 
	cout<<ans;
	return 0;
}