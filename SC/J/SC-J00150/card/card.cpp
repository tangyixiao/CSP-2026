#include<bits/stdc++.h>
#define ll long long
#define N 210000
#define gtc getchar
#define ptc putchar
using namespace std;
inline ll read(){
	ll ans=0,w=1;
	char c=getchar();
	while(!isdigit(c)){
		if(c=='-') w=-1;
		c=getchar();
	}
	while(isdigit(c)){
		ans=ans*10+(c-'0');
		c=getchar();
	}
	return ans*w;
}
inline void write(ll ans){
	if(ans<0) ans=-ans,ptc('-');
	if(ans>9) write(ans/10);
	ptc(ans%10+'0');
}
ll n,m,a[N],ans[5100];
bool vis[5100];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=read(),m=read();
	for(int i=1;i<=n;i++){
		a[i]=read();
	}
	for(int i=1;i<=n;i++){
		memset(vis,false,sizeof(vis));
		for(int j=i;j<=n;j++){
			if(vis[a[j]]) memset(vis,false,sizeof(vis));
			vis[a[j]]=true;
		}
		for(int j=1;j<=m;j++){
			if(vis[j]) ans[j]++;
		}
	}
	for(int i=1;i<=m;i++) write(ans[i]),ptc(' ');
	return 0;
}