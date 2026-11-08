#include<bits/stdc++.h>
using namespace std;
const int N = 5 * 1e5 + 5;
int a[N] = {},ans[N] = {};
int mp[N] = {};
bool vis[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=m;i++){
		memset(mp,0,sizeof(mp));
		memset(vis,true,sizeof(vis));
		for(int j=i;j<=n;j++){
			ans[a[j]] += 1;
			if(mp[a[j]] != 0 && vis[mp[a[j]]] == true){
				//cout<<j<<' '<<mp[a[j]]<<endl;
				for(int k=mp[a[j]] + 1;k<=j;k++){
					if(vis[k] == true){
						vis[k] = false;
						ans[a[k]] -= 1;
						mp[a[j]] = 0;
					}
				}
			}
			mp[a[j]] = j;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
