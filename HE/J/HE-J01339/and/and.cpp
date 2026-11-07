#include<bits/stdc++.h>
using namespace std;
int a[200010],b[200010];
int n,m,ans=INT_MIN;
void dfs(int x,int l) {
	if(x==m) {
		int k=a[b[0]];
		for(int i=1; i<x; i++) {
			k=(k&a[b[i]]);
		}
		ans=max(ans,k);
		return;
	}
	for(int i=l; i<n; i++) {
		b[x]=i;
		dfs(x+1,i+1);
		b[x]=0;
	}
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	cin >> n >> m;
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	if(m==1) {
		for(int i=0; i<n; i++) {
			ans=max(ans,a[i]);
		}
		cout << ans;
	} else if(m==2) {
		for(int i=0; i<n; i++) {
			for(int j=i+1; j<n; j++) {
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout << ans;
	} else {
		dfs(0,0);
		cout << ans;
	}
	return 0;
}
