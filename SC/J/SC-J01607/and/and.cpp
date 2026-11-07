#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,ans,k,a[200006],len[36],cnt[36][200006];
void f(int n,int kk){
	if(kk<0) return;
	k=-1;
	memset(len,0,sizeof len);
	memset(cnt,0,sizeof cnt);
//	cout<<"kk"<<kk<<'\n';
//	cout<<"a";
//	for(int i=1;i<=n;i++) cout<<a[i]<<' ';
//	cout<<'\n';
	for(int i=1;i<=n;i++){
		int t=a[i],b=0;
		while(t){
			if(t&1) cnt[b][++len[b]]=a[i];
			t>>=1;
			b++;
		}
	}
//	cout<<"len";
//	for(int i=0;i<=3;i++) cout<<len[i]<<' ';
//	cout<<'\n';
	for(int i=kk;i>=0;i--){
		if(len[i]>=m){
			k=i;
			break;
		}
	}
//	for(int i=1;i<=len[k];i++) cout<<cnt[]
//	cout<<"k"<<k<<'\n';
//	cout<<"\n\n\n";
	if(k!=-1) ans+=(1<<k);
	for(int i=1;i<=len[k];i++) a[i]=cnt[k][i];
	f(len[k],k-1);
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	f(n,30);
	printf("%lld",ans);
	return 0;
}