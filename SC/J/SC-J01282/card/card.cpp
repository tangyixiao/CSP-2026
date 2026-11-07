#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=5e5+5,M=3e5+5;

inline int getc(){
	static char buf[16384],*ed=buf,*bg=buf;
	if(ed==bg){
		bg=buf,ed=buf+fread(buf,1,16384,stdin);
		if(ed==bg) return EOF;
	}
	return *bg++;
}
inline int read(){
	int sgn=0,ret=0,ch=getc();
	while(ch!=EOF&&!isdigit(ch)) sgn|=ch=='-',ch=getc();
	while(isdigit(ch)) ret=ret*10+ch-'0',ch=getc();
	return sgn ? -ret : ret; 
}

int pos[M],a[N],cnt[M],b[N];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cout.tie(0);
	int n=read(),m=read();
	
	for(int i=1;i<=n;i++){
		a[i]=read();
		
	}
	for(int k=1;k<=n;k++){
		
		for(int i=1;i<=n;i++) b[i]=a[i];
		
		for(int i=k;i<=n;i++){
			if(!pos[a[i]]) pos[a[i]]=i;
			else if(pos[a[i]]!=0){
				for(int j=pos[a[i]];j<i;j++) b[j]=0,pos[a[j]]=0;
				pos[a[i]]=i;
			}
		}
		for(int i=k;i<=n;i++) cnt[b[i]]++;
	}
	
	for(int i=1;i<=m;i++) cout<<cnt[i]<<' ';
	return 0;
}
