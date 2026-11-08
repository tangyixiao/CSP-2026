#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005];
int f[300005],sum;
vector<int>t[300005];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++) {
		scanf("%d",&a[i]);
	} for (int i=n;i>=1;i--) {
		if (f[a[i]]==0) {
			t[++sum]=t[f[a[i+1]]];
			t[sum].push_back(a[i]);
			f[a[i]]=sum;
		} for (int x:t[f[a[i]]]) ans[x]++;
	} for (int i=1;i<=m;i++) {
		cout<<ans[i]<<' ';
	} return 0;
}
