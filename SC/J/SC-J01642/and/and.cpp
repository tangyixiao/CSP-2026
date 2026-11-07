#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+3;
int n,m;
ll a[N];
ll ans;
inline ll read(){
	ll x=0,f=1;
	char c=getchar();
	while(c<'0'||c>'9'){
		if(c=='-') f=-1;
		c=getchar();
	}
	while(c>='0'&&c<='9'){
		x=x*10+(c-'0');
		c=getchar();
	}
	return x*f;
}
inline void write(ll x){
	if(x<0){
		putchar('-');
		x=-x;
	}
	if(x>9) write(x/10);
	putchar(x%10+'0');
}
inline void dfs(int p,int x,int asu){
	if(x==m){
		if(ans<asu) ans=asu;
		return ;
	}
	if(p>n) return ;
	dfs(p+1,x+1,asu&a[p]);
	dfs(p+1,x,asu);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	n=read();m=read();
	for(int i=1;i<=n;i++) a[i]=read();
	if(n<=20){
		dfs(1,0,-1);
		write(ans);
		return 0;
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			if(ans<a[i]) ans=a[i];
		}
		write(ans);
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j) continue;
				if((a[i]&a[j])>ans) ans=a[i]&a[j];
			}
		}
		write(ans);
		return 0;
	}
	if(m==n){
		ans=-1;
		for(int i=1;i<=n;i++) ans&=a[i];
		write(ans);
		return 0;
	}
	sort(a+1,a+n+1);
	write(a[n-m+1]);
	return 0;
}