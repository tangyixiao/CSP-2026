#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],pos[500005],ans[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		memset(pos,0,sizeof(pos));
		for(int j=i;j<=n;j++){
			if(pos[a[j]]==0){
				pos[a[j]]=j;
			}else{
				for(int k=j-1;k>pos[a[j]];k--){
					pos[a[k]]=0;
				}pos[a[j]]=j;
			}
		}
		for(int j=1;j<=m;j++){
			if(pos[j]!=0)
				ans[j]++;
		}
	}for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}