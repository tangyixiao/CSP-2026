// AKed !!!!!!!!!!!!!!!!!!!! AKed AKed AKed AKed AKed AKed AKed AKed
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
inline int read()
{
	char c=getchar();int f=1,x=0;
	while(c<'0' || c>'9') {(c=='-')?(f=-1):0;c=getchar();}
	while(c>='0' && c<='9') {x=x*10+(c-'0');c=getchar();}
	return x*f;
}

const int inf=0x3f3f3f3f3f3f3f3f;
const int N=5e5+5,M=3e5+5;
int n,m,a[N],freq[M];
int to[M],din[M],vis[M];
vector<int> fr[M];
queue<int> q;

signed main()
{
	fastio;
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=read(),m=read();
	for(int i=1;i<=n;i++) a[i]=read(),freq[a[i]]++;
	a[n+1]=m+1;
	for(int i=n;i>0;i--)
		if(!to[a[i]]) 
		{
			to[a[i]]=a[i+1];
			fr[a[i+1]].push_back(a[i]);
			din[a[i+1]]++;
		}
//	for(int i=1;i<=m;i++)
//	{
//		cout<<to[i]<<' '<<din[i]<<'\n';
//		for(auto j:fr[i]) cout<<j<<' ';
//		cout<<"\n\n";
//	}
	for(int i=1;i<=m;i++)
		if(!din[i]) q.push(i);
	while(!q.empty())
	{
		int x=q.front();q.pop();
		for(auto i:fr[x]) freq[x]+=freq[i];
		if(--din[to[x]]==0)
			q.push(to[x]);
	}
	for(int i=1;i<=m;i++) cout<<freq[i]<<' ';
	return cout<<'\n',0;
}
/*
4 3
1 2 1 3
10 3
3 1 2 1 3 2 3 1 2 1
*/
