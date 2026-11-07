#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;

const int N=2e5+5;
int n,m;
int a[N];

signed main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin>>n>>m;
	int a[n],tot=1,maxx=-1;
	for(int i=0;i<n;i++) {
		cin>>a[i];
		tot^=a[i];
		maxx=max(maxx,a[i]);
	}
	if(m==n) {
		cout<<tot;
		return 0;
	}
	if(m==1) {
		cout<<maxx;
		return 0;
	}
	if(m==2) {
		maxx=-1;
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				if(i==j) continue;
				maxx=max(maxx,a[i]&a[j]);
			}
		}
		cout<<maxx;
	}
	cout<<a[n/2];
	return 0;
}