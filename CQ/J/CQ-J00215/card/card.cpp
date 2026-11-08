#include <bits/stdc++.h>
using namespace std;
int f[300005];
int a[300005];
int ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m; 
	for(int i = 0;i<n;i++) cin >> a[i];
	for(int t = 0;t<n-1;t++){
		for(int i = t;i<n;i++) {
			if(f[a[i]] != 0) for(int j = 1;j<=m;j++) if(f[j] >= f[a[i]]) f[j] = 0;
			f[a[i]] = i+1;
		}
		for(int i = 1;i<=m;i++) ans[i] += (1 && f[a[i]]);
	}
	for(int i = 1;i<=m;i++) cout << ans[i] << ' ';
	return 0;
}
