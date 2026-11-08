#include<bits/stdc++.h>
using namespace std;
namespace melk{
	int a[500005],ans[500005],g[500005],cnt=0;
	void solve(){
		int n,m;
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			memset(g,0,sizeof(g));
			for(int j=i;j<=n;j++){
				for(int k=1;k<=cnt;k++){
					if(a[j]==g[k]){
						cnt=k-1;
						break;
					}
				}
				g[++cnt]=a[j];
			}
			for(int j=1;j<=cnt;j++){
				ans[g[j]]++;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<" ";
		}
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	melk::solve();
	return 0;
}
