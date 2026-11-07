#include<bits/stdc++.h>
using namespace std;

const int maxn=5e5+10,maxm=3e5+10;

int a[maxn],ans[maxm],cnt[maxm],st[maxm],top,n,m;

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	/*
	算了，暴力吧 
	*/
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++)
	{
		memset(cnt,0,sizeof(cnt));
		top=0;
		
		for(int j=i;j<=n;j++)
		{
			if(cnt[a[j]]) 
			{
				while(st[top]!=a[j])
				{
					cnt[st[top]]--;
					top--;
				}
			}
			else
			{
				st[++top]=a[j];
				cnt[a[j]]++;
			}
		}
		for(int j=1;j<=m;j++)
		{
			if(cnt[j]) ans[j]++;
		}
	}
	
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<' ';
	}
	
	return 0;
}