#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
constexpr int N=5e5+5;
ll n,m,a[N],lst[N],gz[N],ans[N];
bitset<N> vis,vis2;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i)cin>>a[i];
	for(int i=1;i<=n;++i)gz[i]=0;
	for(int i=1;i<=n;++i){
		if(lst[a[i]]!=0)gz[i]=lst[a[i]],vis[lst[a[i]]]=1;
		lst[a[i]]=i;
	}
	for(int i=1;i<=n;++i){
		for(int j=i;j<=n;++j){
			if(!vis2[j]&&gz[j]>=i&&gz[j]!=0&&!vis2[gz[j]]){
				for(int k=gz[j];k<j;++k)vis2[k]=1;
			}
		}
		for(int j=i;j<=n;++j){
			if(!vis2[j])ans[a[j]]++;
			vis2[j]=0;
		}
	}
	for(int i=1;i<=m;++i)cout<<ans[i]<<" ";




	return 0;
}

