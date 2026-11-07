#include<bits/stdc++.h>
using namespace std;
const int N=5e3+5;
int n,m,a[N],nxt[N],vis[N],ans[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=i-1;j>=1;j--){
			if(a[j]==a[i]){
				nxt[i]=j;
			}
		}
	}for(int i=1;i<=n;i++){
		memset(vis,0,sizeof(n+1));
		for(int j=i;j<=n;j++){
			for(int c=j;nxt[c];c=nxt[c]){
				if(nxt[c]>=i&&!vis[nxt[c]]){
					for(int o=nxt[c];o<j;o++)vis[o]=1;
					break;
				}
			}
		}
		for(int j=i;j<=n;j++){
			if(!vis[j]){
				ans[a[j]]++;
			}
		}
		cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}