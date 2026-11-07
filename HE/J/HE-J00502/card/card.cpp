#include<bits/stdc++.h>
using namespace std;
int n,m,a[600010],cnt[400010];
int vis[400010];
int now[600010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int j=1;j<=n;j++){
		memset(now,0,sizeof now);
		int q=0;
		memset(vis,0,sizeof vis);
		for(int i=j;i<=n;i++){
		    if(!vis[a[i]]){
			    now[++q]=a[i];
			    vis[a[i]]=q;
		    }else{
		    	for(int k=vis[a[i]]+1;k<=q;k++)vis[now[k]]=0;
			    q=vis[a[i]];
		    }
	    }
	    for(int i=1;i<=q;i++){
		    cnt[now[i]]++;
	    }
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
