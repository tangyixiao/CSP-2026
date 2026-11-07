#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

static inline int read(){
	int res=0,f=1;char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9') res=(res<<3)+(res<<1)+c-'0',c=getchar();
	return res*f;
}

static inline void write(int x){
	if(x<0) x=-x,putchar('-');
	if(x>9) write(x/10);
	putchar(x%10+'0');
}

const int N=5e5+5,M=3e5+5;

int n,m,k=0;
int ord[M],cnt[M];
ll ans[M];
int a[N];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=read();m=read();
	for(int i=1,x;i<=n;++i){
		a[i]=read();
		ord[a[i]]=i;
		cnt[a[i]]++;
	}
	
	ans[a[n]]=n;
	for(int i=1;i<=m;i++){
		int s=ord[i];
		while(s!=n) ans[a[s]]+=cnt[i],s=ord[a[s+1]];
	}
	
	for(int i=1;i<=m;++i){
		write(ans[i]);putchar(' ');
	}putchar('\n');
	
	return 0;
}
//while(1) rp++;