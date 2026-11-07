#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],vis[500005],sum[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof(vis));
		for(int j=i;j<=n;j++){
			for(int l=i;l<=j;l++){
				if ((a[l]==a[j])&&vis[l]==0){
					for(int ll=l;ll<j;ll++){
						vis[ll]=1;
					}
				}
			}
		}
		for(int j=i;j<=n;j++){
			if (vis[j]==0){
				sum[a[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout << sum[i] << ' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
