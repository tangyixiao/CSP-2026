#include<bits/stdc++.h>
#define int int
using namespace std;
const int N = 5e5+5;
int n, m;
int a[N], las[N], ans[N];
bool vis[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 1; i <= n; i++) 
		cin>>a[i], las[a[i]] = i;
	for(int i = 1; i <= n; i++){
		int j = i;
		memset(vis, 0, sizeof(vis));
		while(j <= n){
			vis[a[j]] = 1;
			j = las[a[j]] + 1;
		}
		for(int i = 1; i <= m; i++) 
			if(vis[i]) ans[i]++;
	}
	for(int i = 1; i <= m; i++) 
		cout<<ans[i]<<" ";
	return 0;
}  