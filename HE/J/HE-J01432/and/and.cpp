#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200010];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int z=0;
	if(m==1) {
		for(int i=1; i<=n; i++) {
			cin>>a[i];
			z=max(z,a[i]);
		}
		cout<<z;
	}
	if(m==2) {
		for(int i=1; i<=n; i++) {
			cin>>a[i];
		}
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=n; j++) {
				z=max(z,a[i]&a[j]);
			}
		}
		cout<<z;
	}
	return 0;
}
