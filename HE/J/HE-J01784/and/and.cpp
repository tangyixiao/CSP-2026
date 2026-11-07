#include<bits/stdc++.h>
using namespace std;
int n,m;
int num[200005];
int maxn;
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) {
		cin>>num[i];
	}
	sort(num+1,num+n+1);
	if (m==1) {
		cout<<num[n];
		return 0;
	}
	for(int i=n;i>=1;i--) {
		for(int j=1;j<=m;j++) {
			maxn=maxn&num[i];
		}
	}
	cout<<maxn;
	return 0;
}
