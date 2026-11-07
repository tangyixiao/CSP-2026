#include<bits/stdc++.h>
using namespace std;
#define maxn 500005
#define maxm 300005
#define ll long long
int n,m;
int a[maxn],f[maxm];
int top,st[maxn];
bool vis[maxm];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)vis[j]=false;
		for(int j=i;j<=n;j++)
		{
			if(!vis[a[j]])
			{
				vis[a[j]]=true;
				st[++top]=a[j];
				f[a[j]]++;
			}
			else
			{
				while(st[top]!=a[j])
				{
					f[st[top]]--;
					vis[st[top]]=false;
					top--;
				}
			}
		}
	}
	for(int i=1;i<=m;i++)cout<<f[i]<<" ";
	return 0;
}