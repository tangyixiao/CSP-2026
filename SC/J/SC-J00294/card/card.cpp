#include<bits/stdc++.h>
#define int long long
using namespace std;
int vis[500005],cnt[500005];
int a[500005];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof vis);
		for(int j=i;j<=n;j++){
			if(vis[a[j]]!=0){
				for(int k=vis[a[j]];k<=j;k++){
					vis[a[k]]=0;
				}
			}
			vis[a[j]]=j;
		}
		for(int j=1;j<=m;j++){
			cnt[j]+=(vis[j]!=0);
		}
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<' ';
	return 0;
}