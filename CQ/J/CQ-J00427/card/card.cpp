#include <bits/stdc++.h>
using namespace std;
namespace contest{
	int n,m;
	int cnt;
	int a[500005];
	int c[500005];
	map<int,int> vis;
	int ans[300005];
	int main(){
		cin>>n>>m;
		for (int i=1;i<=n;i++) cin>>a[i];
		for (int game=1;game<=n;game++){
			cnt=0;
			for (int i=game;i<=n;i++){
				if (vis[a[i]]) cnt=vis[a[i]];
				else{
					c[++cnt]=a[i];
					vis[a[i]]=cnt;
				}
			}
			for (int i=1;i<=cnt;i++) ans[c[i]]++;
			for (int i=1;i<=m;i++) vis[a[i]]=0;
		}
		for (int i=1;i<=m;i++) cout<<ans[i]<<' ';
		return 0;
	}
};
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	contest::main();
	return 0;
}
