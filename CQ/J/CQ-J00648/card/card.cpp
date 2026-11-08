#include<bits/stdc++.h>
using namespace std;
const int N=5*1e5+5;
const int M=3*1e5+5;
int n,m;
int a[N],cnt[M];
bool vis[N];
int f[M],last[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	memset(f,-1,sizeof(f));
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=n;i>=1;i--){
		if(f[a[i]]==-1){
			f[a[i]]=i;
		}else{
			vis[i]=1;
			last[i]=f[a[i]];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(vis[j]==1) j=last[j];
			cnt[a[j]]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<" ";
	return 0;
}
