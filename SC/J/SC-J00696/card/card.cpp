#include<bits/stdc++.h>
using namespace std;
const int N=505,M=205;
int n,m,pos=1,a[N],ans[M],pos1[M],vis[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	while(n--){
		memset(pos1,0,sizeof(pos1));
		memset(vis,0,sizeof(vis));
		for(int i=pos;i<=n;i++){
			if(vis[a[i]]!=0){
				for(int j=pos1[a[i]];j<i;j++){
					vis[a[j]]=0;pos1[a[j]]=0;ans[a[j]]--;
				}
			}
			pos1[a[i]]=i;vis[a[i]]=1;ans[a[i]]++;
		}
		pos++;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
	}
	