#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
int n,m,a[N],nx[N],pr[M],cnt[M];
bool fd[M];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=n;i;i--)
	{
		if(!pr[a[i]])
		{
			pr[a[i]]=i;
		}
	}
	for(int i=1;i<=n;i++)
	{
		nx[i]=pr[a[i]];
	}
	for(int i=1;i<=n;i++)
	{
		memset(fd,false,sizeof(fd));
		int nw=i;
		while(nw<=n)
		{
			if(!fd[a[nw]])
			{
				cnt[a[nw]]++;
			}
			fd[a[nw]]=true;
			if(nx[nw]==nw)
			{
				nw++;
			}
			else
			{
				nw=nx[nw];
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<cnt[i];
		if(i<m)
		{
			cout<<" ";
		}
	}
	return 0;
}
