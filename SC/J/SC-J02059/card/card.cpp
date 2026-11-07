#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MN = 5e5 + 20;
int n,m,a[MN],vis[MN],res[MN],ans[MN];
signed main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i = 1;i <= n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i = 1;i <= n;i++){
		memset(vis,0,sizeof(vis));
		memset(res,0,sizeof(res));
		int pos = 1;
		for(int j = i;j <= n;j++){
			if(vis[a[j]] == 0){
				res[pos] = a[j];
				vis[a[j]] = pos;
				pos++;
			}
			else{
				for(int k = vis[a[j]] + 1;k <= pos;k++){
					vis[res[k]] = 0;
					res[k] = 0;
				}
				pos = vis[a[j]] + 1;
			}
		}
		for(int j = 1;j <= pos;j++){
			ans[res[j]]++;
		}
	}
	for(int i = 1;i <= m;i++){
		printf("%lld ",ans[i]);
	}
	return 0;
}
