#include <bits/stdc++.h>
using namespace std;
int n,m,a[300010], t[300010], k[300010], ans[300010];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i=1; i<=n; i++) {
		cin >> a[i];
	}
	for (int i=1; i<=n; i++) {
		for (int j=i; j<=n; j++) {
			if (t[a[j]]==1) {
				for (int z=k[a[j]]; z<j; z++) {
					t[a[z]]=0;
				}
			}
			k[a[j]]=j;
			t[a[j]]=1;
		}
		for (int j=1; j<=m; j++) {
			ans[j]+=t[j];
			t[j]=0;
		}
	}
	for (int j=1; j<=m; j++) {
		cout << ans[j] << ' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
