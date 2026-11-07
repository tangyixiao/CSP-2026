#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005];
int ans[300005];
int p(int i){
	int t[500005]={},z=0;
	for (int j=i;j<=n;j++){
		for (int l=1;l<=z;l++){
			if (t[l]==a[j]){
				for (int o=l;o<=z;o++) t[o]=0;
				z=l-1;
				break;
			}
		}
		t[++z]=a[j];
	}
	for (int j=1;j<=z;j++){
		ans[t[j]]++;
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for (int i=1;i<=n;i++){
		p(i);
	}
	for (int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}