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
ll n,m,a[N],maxx,andd=(1<<21)-1,ans;
int bl(int k,int ans,int i){
	if(k==m) return ans;
	if(i>n) return 0;
	return max(bl(k+1,ans&a[i],i+1),bl(k,ans,i+1));
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	n=read(),m=read();
	for(int i=1;i<=n;i++){
		a[i]=read();
		maxx=max(maxx,a[i]);
		andd=andd&a[i];
	}
	if(n<=20) write(bl(0,(1<<21)-1,1));
	else if(m==1) write(maxx);
	else if(m==n) write(andd);
	else{
		for(int i=1;i<=n;i++){
			if(a[i]!=i-1){ans=-1;break;}
		}
		sort(a+1,a+n+1);
		if(ans==-1) write(a[n-m+1]);
		else write(a[n-m]&a[n-m+1]);
	}
	return 0;
}