#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;

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

int n,a[N];
int m;

ll maxx=0;
bool vis[N];
void dfs(int pos,int cnt,ll now){//现在的位置（i  已经选好的个数
	 if(cnt==m){
//	 	cout<<now<<'\n';
	 	maxx=max(maxx,now);
	 	return ;
	 }
	for(int i=pos+1;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			dfs(i,cnt+1,now&a[i]);
			vis[i]=0;
		}
	}
	return ;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cout.tie(0);
	n=read(),m=read();
	for(int i=1;i<=n;i++) a[i]=read();
	
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			dfs(j,2,1ll*(a[i]&a[j]));
		}
	}
	
	cout<<maxx;


	return 0;
}
