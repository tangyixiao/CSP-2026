#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		bool mp[300005]={0};
		for(int j=i;j<=n;j++){
			if(mp[a[j]]==0){
				mp[a[j]]=1;
			}
			else{
				for(int l=j-1;l>=i;l--){
					if(a[l]==a[j]) break;
					mp[a[l]]=0;
				}
				mp[a[j]]=1;
			}
		}
		for(int k=1;k<=m;k++){
			if(mp[k]) ans[k]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}

