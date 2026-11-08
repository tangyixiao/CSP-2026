#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> a;
int ans=0;
void dfs(int p,int q,int val) {
	if (q==m) {
		ans=max(ans,val);
		return;
	}
	if (m-q>n-p) {
		return;
	}
    dfs(p+1,q+1,val&a[p]);
    dfs(p+1,q,val);
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	a.resize(n);
	for (int i=0;i<n;i++) {
		cin >> a[i];
	}
	if (m==1) {
		int maxa=0;
		for (int i=0;i<n;i++) {
			maxa=max(maxa,a[i]);
		}
		cout << maxa << endl;
		return 0;
	} 
	if (m==n) {
		int ans=a[0];
		for (int i=1;i<n;i++) {
			ans&=a[i];
		}
		cout << ans << endl;
		return 0;
	}
	if (m==2) {
		int maxa=0;
		for (int i=0;i<n-1;i++) {
			for (int j=i+1;j<n;j++) {
				maxa=max(maxa,a[i]&a[j]);
			}
		}
		cout << maxa << endl;
		return 0;
	}
	int st=INT_MAX;
	dfs(0,0,st);
	cout << ans << endl;
	return 0;
}

