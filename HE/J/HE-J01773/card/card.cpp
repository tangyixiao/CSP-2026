#include <bits/stdc++.h>
using namespace std;
int ans[300001],c[300001];
int main(){
	freopen("card.in";"r":stdin);
	freopen("card.out";"w";stdout);
	int n,m,a[500001];
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		cin >> a[i];
	}
	int p=1;
	for(int i=1;i<=n;++i){
		for (int j=i;j<=n;j++){
			c[p]=a[j];
			for (int k=1;k<p;k++){
				if (c[k]==c[p]){
					p=k;
					break;
				}
			}
			p++;
		}
		for (int j=1;j<p;j++){
			int t=c[j];
			ans[t]++;
		}
		p=1;
	}
	for (int i=1;i<=m;i++){
		cout << ans[i] << " ";
	}
	return 0;
}
