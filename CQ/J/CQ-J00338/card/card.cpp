#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
const int M=3e5+5;
int n,m,flag;
int a[N],c[N],last[N];
vector<int> g[M];
map<pair<int,int>,bool> mp;

signed main()
{
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		last[a[i]]=i;
		if(a[i]<a[i-1]) flag=1;
	}
	if(!flag)
	{
		for(int i=1;i<=n;i++)
		{
			c[a[i]]=i;
		}
		for(int i=1;i<=m;i++)
		{
			cout<<c[i]<<" ";
		}
		return 0;
	}
	
	for(int i=1;i<=n;i++)
	{
		int x=i;
		while(x<=n)
		{
//			cout<<i<<" "<<x<<endl;
			if(mp[{a[x],i}]==0)
			{
				g[a[x]].push_back(i);
				mp[{a[x],i}]=1;
			}
			if(last[a[x]]!=x) x=last[a[x]];
			else x++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		int ans=g[i].size();
		cout<<ans<<" ";
	}
	return 0;
}
/*
10 3
1 1 2 2 2 2 3 3 3 3
°¡°¡°¡°¡°¡°¡T4Ð´²»³öÀ´Õý½âÎØÎØÎØÎØÎØÎØÎØÎÒÊÇ¸ö·ÏÎïÎØÎØÎØÎØÎØ 
ÂèÂèÎÒÒª»Ø¼ÒÎØÎØÎØÎØÎØÎØ 
*/
