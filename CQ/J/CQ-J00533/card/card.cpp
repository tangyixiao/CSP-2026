#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],c[500005],f[500005],nxt[500005],lst[300005],ans[300005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);	
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=n;i>0;i--){
		if(lst[a[i]]) nxt[i]=lst[a[i]];
		else lst[a[i]]=i; 
	}
	for(int i=1;i<=n;i++){
		c[i]+=c[i-1],f[i]=c[i]+i,ans[a[i]]+=f[i];
		if(nxt[i]) c[i+1]-=f[i],c[nxt[i]+1]+=f[i]; 
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i];
		if(i!=m) cout<<' ';
	}
	return 0;
} 
