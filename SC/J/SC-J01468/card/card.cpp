#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],cnt[300005];
int vis[500005],wz[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for (int i=1;i<=n;i++){
		memset(vis,0,sizeof vis);
		memset(wz,0,sizeof wz);
		for (int j=i;j<=n;j++){
			if(wz[a[j]]>0){
				for (int k=wz[a[j]];k<=j;k++){
					wz[vis[k]] = 0;
					vis[k]=0;
				}
			}
			vis[j] = a[j];
			wz[a[j]] = j;
		}
		for (int j=1;j<=m;j++) if(wz[j]>0) {
			cnt[j]++;
		}
	}
	for (int i=1;i<=m;i++){
		cout << cnt[i] << " ";
	}
	return 0;
}