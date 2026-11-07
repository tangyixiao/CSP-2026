#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],vis[500010],ans[500010];
int bl(){
	for(int i=1;i<=n;i++){
		vis[a[i]]--;
		for(int j=i;j>=1;j--){
			if(!vis[a[j]]){
				ans[a[i]]++;
			}
			else{
				break;
			}
		}
	}
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		vis[a[i]]++;
	}
	bl();
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
