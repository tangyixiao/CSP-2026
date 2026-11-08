#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int const N=5e5+10;
inline int readInt(){
	char c=getchar();int x=0,f=1;
	while(c<'0'||c>'9'){if(c=='-') f=-1;c=getchar();}
	while(c>='0'&&c<='9'){x=x*10+c-'0';c=getchar();}
	return x*f;
}
inline ll readll(){
	char c=getchar();ll x=0,f=1;
	while(c<'0'||c>'9'){if(c=='-') f=-1ll;c=getchar();}
	while(c>='0'&&c<='9'){x=x*10ll+c-'0';c=getchar();}
	return x*f;
}
int n,m,a[N],c[N],b[N],ans[N],size;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=readInt(),m=readInt();
	for(int i=1;i<=n;i++) a[i]=readInt();
	for(int i=1;i<=n;i++){
		if(!c[a[i]]) b[++size]=a[i],c[a[i]]=size;
		else size=c[a[i]];
		for(int j=1;j<=size;j++) ans[b[j]]++;
	}
	for(int i=1;i<=m;i++) printf("%d ",ans[i]);
	return 0;
}
