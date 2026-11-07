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
const int N=2e5+5,S=31;
int n,m,a[N],ans;
int v[N],nv;
int tmp[N],nt;
int now[N],nn;

signed main()
{
	fastio;
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	n=read(),m=read();
	for(int i=1;i<=n;i++) a[i]=read();
	if(m==1)
	{
		for(int i=1;i<=n;i++) ans=max(ans,a[i]);
		return cout<<ans<<'\n',0;
	}
	for(int j=S;j>=0;j--)
	{
		nv=0;
		for(int i=1;i<=n;i++)
			if(a[i]&(1ll<<j)) v[++nv]=i;
		if(nv==m && nn==0)
		{
			for(int i=2;i<=nv;i++) (i==2)?(ans=(a[v[i]]&a[v[i-1]])):(ans&=a[v[i]]);
			return cout<<ans<<'\n',0; 
		}
		else if(nv>=m)
		{
			if(nn==0) {for(int i=1;i<=nv;i++) now[++nn]=v[i];}
			else
			{
				nt=0;
				for(int i=1,j=1;i<=nn&&j<=nv;)
				{
					if(now[i]<v[j]) i++;
					if(v[j]<now[i]) j++;
					if(now[i]==v[j]) tmp[++nt]=now[i],i++,j++;
				}
				if(nt==m)
				{
					for(int i=2;i<=nt;i++) (i==2)?(ans=(a[tmp[i]]&a[tmp[i-1]])):(ans&=a[tmp[i]]);
					return cout<<ans<<'\n',0; 
				}
				else if(nt>m) {nn=0;for(int i=1;i<=nt;i++) now[++nn]=tmp[i];}
			}
		}
//		for(int i=1;i<=nv;i++) cout<<v[i]<<' ';cout<<'\n';
//		for(int i=1;i<=nn;i++) cout<<now[i]<<' ';cout<<"\n\n";
	}
	for(int i=2;i<=m;i++) (i==2)?(ans=(a[now[i]]&a[now[i-1]])):(ans&=a[now[i]]);
	return cout<<ans<<'\n',0;
}
/*
4 2
3 15 12 12
5 3
31 3 1 15 7
*/
