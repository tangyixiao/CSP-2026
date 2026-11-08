#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],pre[500005],pr[300005],mxp[500005],nxt[300005],gay[500005],fxb[500005],cnt[500005],cntfxb;
void solve(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(pr[a[i]]){
			pre[i]=pr[a[i]];
		}
		pr[a[i]]=i;
	}
	for(int i=n;i>=1;i--){
		if(mxp[i]==0){
			mxp[i]=i;
		}
		mxp[pre[i]]=mxp[i];
	}
	for(int i=1;i<=n;i++){
//		cout<<i<<' '<<pre[i]<<' '<<gay[pre[i]]<<'\n';
		gay[i]=1+gay[pre[i]];
		gay[pre[i]]=0;
	}
	for(int i=1;i<=n;i++){
		if(gay[i]){
			fxb[++cntfxb]=i;
		}
	}
	for(int i=1;i<=m;i++){
		int f=mxp[fxb[i]+1];
		cnt[a[fxb[i]]]+=gay[fxb[i]];
		gay[f]+=gay[fxb[i]];
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int t=1;
//	cin>>t;
	while(t--) solve();
	return 0;
}
//再见了OI  
//所以到底是不是正难则反qwq 
//10:48好像想出正解了bmb 
//11:06萎掉了qwq
//11:15萎掉的代码A了bmb 
