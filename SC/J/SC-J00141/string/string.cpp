#include"bits/stdc++.h"
using namespace std;
#define int long long
#define N signed(2e5+5)
int n,a[N],st[N],ed[N],ttlt;char c[N];
void solve(){
	int L=1,R=n,LP=1,RP=ttlt,dif=0;
	while(L<R){
		int op=(c[L]==c[R])?(0):(1);
		int move=min(st[L+1]-LP,RP-ed[R-1]);
		dif+=op*move;
		LP+=move,RP-=move;
		if(LP==st[L+1]) L++;
		else R--;
	}
	printf("%lld",dif);
	return;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		st[i]=ttlt+1;
		scanf("%lld%s",&a[i],&c[i]);
		ttlt+=a[i];ed[i]=ttlt;
	}
	solve();
	return 0;
}