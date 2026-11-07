#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,a[N],st[N],nxt[N],ans[M],fir[M],lst[M],cnt[M];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	st[n+1]=nxt[n+1]=n+1;
	for(int i=n;i>=1;i--)
	{
		cnt[a[i]]++;
		if(!lst[a[i]]) lst[a[i]]=i;
		fir[a[i]]=i;
		if(cnt[a[i]]>=2) nxt[i]=lst[a[i]]+1,st[i]=i;
		else nxt[i]=nxt[i+1],st[i]=st[i+1]; 
	}
	for(int i=1;i<=n;i++)
	{
		int x=i;
		while(nxt[x]!=x)
		{
			for(int j=x;j<st[x];j++)
			{
				ans[a[j]]++;
			}
			ans[a[st[x]]]++;
			x=nxt[x];
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<' ';
	}
	return 0;
}
