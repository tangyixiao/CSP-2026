#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005];
int v[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=n;i++){
		memset(v,0,sizeof(v));
		for(int j=i;j<=n;j++){
			if(v[a[j]]){
				bool p=0;
				for(int l=j-1;a[l]!=a[j];l--){
					v[a[l]]=0;
				}
			}
			v[a[j]]=1;
		}
		for(int j=1;j<=m;j++){
			ans[j]+=v[j];
		}
	}
	for(int i=1;i<=m;i++){
		cout << ans[i] << ' ';
	}
	return 0;
}
