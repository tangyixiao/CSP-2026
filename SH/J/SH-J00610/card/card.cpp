#include <bits/stdc++.h>
using namespace std;
const int maxn = 5e5+10;
const int maxn1 = 3e5+10;
int n,m,a[maxn],ans[maxn1],vis[maxn];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	} 
	for(int i = 1;i<=n;i++){
		for(int j = i;j<=n;j++){
			if(vis[a[j]] == 1){
				for(int k = j;a[j]!=a[k];j--){
					ans[k]--;
				}
			}else{
				vis[a[j]] == 1;
			}
			ans[a[j]]++;
		}
	}
	for(int i = 1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
}
