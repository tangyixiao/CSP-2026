#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+3;
int n;
ll a[N];
char c[N];
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
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	n=read();
	for(int i=1;i<=n;i++){
		a[i]=read();c[i]=getchar();
	}
	int l=1,r=n;
	ll lz=a[1],rz=a[n];
	while(l<r){
		if(c[l]!=c[r]){
			if(lz==rz){
				ans+=lz;
				l++;r--;
				lz=a[l];rz=a[r];
			}else if(lz<rz){
				ans+=lz;rz-=lz;
				l++;lz=a[l];
			}else{
				ans+=rz;lz-=rz;
				r--;rz=a[r];
			}
		}else{
			if(lz==rz){
				l++;r--;
				lz=a[l];rz=a[r];
			}else if(lz<rz){
				rz-=lz;
				l++;lz=a[l];
			}else{
				lz-=rz;
				r--;rz=a[r];
			}
		}
	}
	if(l==r-1&&c[l]!=c[r]) ans+=lz;
	write(ans);
	return 0;
}