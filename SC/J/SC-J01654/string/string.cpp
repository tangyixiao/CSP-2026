#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

static inline int read(){
	int res=0,f=1;char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9') res=(res<<3)+(res<<1)+c-'0',c=getchar();
	return res*f;
}

static inline void write(ll x){
	if(x<0) x=-x,putchar('-');
	if(x>9) write(x/10);
	putchar(x%10+'0');
}

const int N=2e5+5;
int n;
int a[N];
char c[N];
ll ans=0;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	n=read();
	for(int i=1;i<=n;++i){
		a[i]=read();c[i]=getchar();
		while(c[i]<'a'||c[i]>'z') c[i]=getchar();
	}
	
	int l=1,r=n;
	while(l<r){
		if(c[l]==c[r]){
			if(a[l]==a[r]) l++,r--;
			else if(a[l]<a[r]) a[r]-=a[l],l++;
			else a[l]-=a[r],r--;
		}else{
			if(a[l]==a[r]) ans+=a[l],l++,r--;
			else if(a[l]<a[r]) ans+=a[l],a[r]-=a[l],l++;
			else ans+=a[r],a[l]-=a[r],r--;
		}
	}
	
	write(ans);putchar('\n');
	
	return 0;
}
//while(1) rp++;