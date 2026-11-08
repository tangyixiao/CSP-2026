#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d %d",&n,&m);
	for (int i=1;i<=n;i++) scanf("%d",&a[i]);
	for (int i=1;i<=n;i++){
		if (a[i]==a[n]) continue;
		int j=i;
		for (int k=n;k>=j;k--){
			if (j==k) break;
			if (a[j]==a[k]) j=k,k=n;
		}
		for (int k=j;k<=n;k++) ans[a[k]]++;
	}
	ans[a[n]]=n;
	for (int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
