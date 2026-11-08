#include<bits/stdc++.h>
using namespace std;
int a[100005];
bool vis[100005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int cnt=a[1];
	while(m--)
	{
		for(int i=2;i<=n;i++)
		{
			if(vis[i]!=1)
			{
				cnt=max(cnt,cnt&a[i]);
				vis[i]=1;
			}
		}
	}
	cout<<cnt;
}
