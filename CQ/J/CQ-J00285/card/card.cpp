#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m,a[N],c[N],last[N],to[N];
int l[N],r[N],ans[N];
long long cnt[N];
bool vis[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=n;i>=1;i--){
    	cnt[i]=1;
    	if(!last[a[i]]) vis[i]=1,last[a[i]]=i,to[i]=i+1;
    	else to[i]=last[a[i]]+1,l[i]=i+1,r[i]=last[a[i]];
	} 
	for(int i=1;i<=n;i++) cnt[to[i]]+=cnt[i],c[l[i]]+=cnt[i],c[r[i]]-=cnt[i];
	for(int i=1;i<=n;i++){
		c[i]+=c[i-1];
		if(vis[i]) ans[a[i]]=i-c[i];
	} 
	for(int i=1;i<=m;i++){
		cout<<ans[i];
		if(i<m) cout<<" ";
	}
	return 0;
}

